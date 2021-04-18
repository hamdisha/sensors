import pandas as pd 
import sqlalchemy
import mysql.connector


df = pd.read_csv('/pathto/sensor.txt', delimiter=',')

def storeToDb(tabalename='sensors',database_username = 'root',database_password = 'password', database_ip = 'localhost', database_name = 'sensors'):
    
    try:
        database_connection = sqlalchemy.create_engine('mysql+mysqlconnector://{0}:{1}@{2}/{3}'.
                                                format(database_username, database_password, 
                                                        database_ip, database_name))

        df.to_sql(con=database_connection, name=tabalename, if_exists='append', index=False)
        print("Your data has been stored to database")
    except Exception as e:
        print("Oops! Something went wrong at storeToDb")
        pass

storeToDb()
