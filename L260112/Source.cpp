//#include <iostream>
//#include <exception>
//
//#include "mysql-connector/include/jdbc/mysql_connection.h"
//#include "mysql-connector/include/jdbc/cppconn/driver.h"
//#include "mysql-connector/include/jdbc/cppconn/exception.h"
//#include "mysql-connector/include/jdbc/cppconn/resultset.h"
//#include "mysql-connector/include/jdbc/cppconn/statement.h"
//#include "mysql-connector/include/jdbc/cppconn/prepared_statement.h"
//
//#ifdef _DEBUG
//#pragma comment(lib, ".\\mysql-connector\\lib64\\debug\\vs14\\mysqlcppconn")
//
//#else
//#pragma comment(lib, ".\\mysql-connector\\lib64\\debug\\vs14\\mysqlcppconn")
//
//#endif // _DEBUG
//
//int main()
//{
//	sql::Driver* Driver = nullptr;
//	sql::Connection* Connection = nullptr;
//	sql::Statement* Statement = nullptr;
//	sql::ResultSet* ResultSet = nullptr;
//
//	try
//	{
//
//		Driver = get_driver_instance();
//		Connection = Driver->connect("tcp://127.0.0.1", "root", "q1234");
//
//		Connection->setSchema("world");
//
//		Statement = Connection->createStatement();
//		ResultSet = Statement->executeQuery("select * from city left join country on city.CountryCode = country.Code where city.District = 'Seoul' or city.District = 'Pusan' or city.District = 'Taegu'; ");
//
//		while (ResultSet->next())
//		{
//			std::cout << ResultSet->getString("Name") << ", ";
//			std::cout << ResultSet->getString("District") << ", ";
//			std::cout << ResultSet->getString("CountryCode") << std::endl;
//			std::cout << std::endl;
//		}
//
//		ResultSet = Statement->executeQuery("select city.`Name` as CName, country.Name as NName from city left join country on city.CountryCode = country.Code where city.District = 'Seoul' or city.District = 'Pusan' or city.District = 'Taegu'; ");
//
//		while (ResultSet->next())
//		{
//			std::cout << "Use as name" << std::endl;
//			std::cout << ResultSet->getString("CName") << ", ";
//			std::cout << ResultSet->getString("NName") << ", " << std::endl;
//			std::cout << std::endl;
//		}
//	}
//	catch (const std::exception e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//
//	delete Statement;
//	delete Connection;
//
//	return 0;
//}