<?php
namespace Services\HelloWorld;

error_reporting(E_ALL);
require_once('../../../../../../../lib/php/lib/Thrift/ClassLoader/ThriftClassLoader.php');
require_once('db_util.php');
//require_once('utils.php');

/*
use Thrift\ClassLoader\ThriftClassLoader;

$GEN_DIR = realpath(dirname(__FILE__)).'/gen-php';

$loader = new ThriftClassLoader();
$loader->registerNamespace('Thrift', __DIR__ .'/../../lib/php/lib');
$loader->registerDefinition('wineMateThrift', $GEN_DIR);
$loader->register();
*/
class HelloWorldHandler implements HelloWorldIf {
  public function sayHello($name)
  {
      $conn = db_connect();
      $sql = "SELECT * FROM user_account_info WHERE user_name = 'arthurchen'";
      $result = $conn->query($sql);
      $row = $result->fetch_assoc();
      //var_dump($result);
      return "Hello $name - ".$row['password'];
  }
}
