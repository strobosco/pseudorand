## Nomenclatura immagini

Le immagini hanno la seguente nomenclatura:

```pi<NUMERI GENERATI><RANGE><OFFSET>.png ```

- Numeri Generati: 100, 1000, 5000, 20000, 50000, 1000000, 1000000
- Range: 10, 50, 100, 500
- Offset: 100, 500, 1000

Per ogni campo sono state calcolate tutte le possibili combinazioni.
Osservando le immagini con oltre 20000 numeri risulta che il range è troppo ristretto per consentire una dispersione adeguata.

## Struttura

```
frontend
  +-- img // cartella contenente le immagini
  |   |   ...
  |    
  +-- csv // cartella contenente i file .csv (Comma-Separated-Values)
  |   |   ...
  |    
  +-- main.cpp // file usato per creare i file .csv
  +-- main.exe // .exe del file main.cpp
  +-- plot.py // file Python usato per creare e salvare i grafici

```