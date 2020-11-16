Pro dostání se do SQL v Containeru:
V elevovaném režimu
docker exec -ti Název/ID_Kontejneru /bin/bash
-- Tímto jsem v kontejneru docker 

Pro připojení do samotného SQL
mysql -u Uživatel -D Jméno_Databáze -p
HESLO:




GRAFANA + SQL
[Pomohlo s propojení](https://docs.docker.com/compose/networking/)
Hlavně to že se do nastavení zdroje dat pro grafanu dá do kolonky host
```
backend_database
```



VOLUMES
https://docs.docker.com/storage/volumes/


MOHLO BZ SE HODIT K DOCKERFILE U MYSQL
https://hub.docker.com/_/mysql/