import csv
from matplotlib.pyplot import figure
import numpy as np
import matplotlib.pylab as plt
  

numeri= [100, 1000, 5000, 20000, 50000, 1000000, 1000000];
range = [10, 50, 100, 500];
offset = [100, 500, 1000];

for n in numeri:
  nReal = n
  for r in range:
    rReal = r
    for o in offset:
      oReal = o

      fileName = "pi" + str(nReal) + "-" + str(rReal) + "-" + str(oReal)
      print(fileName)
      with open("./csv/" + fileName + ".csv") as csvFile:

        csvReader = csv.reader(csvFile, delimiter=",")
        lineCount = 0

        iterations = []
        numeriInUso = []

        for row in csvReader:
          if lineCount == 0:
            print("Colum names")
            lineCount += 1
          else:

            iterations.append(row[0])
            numeriInUso.append(row[1])
            # print(numeriInUso)

            lineCount += 1


      finalFigure = plt.figure()
      plt.scatter(iterations, numeriInUso)
      plt.xlabel("Iterazioni")
      plt.xscale("linear")
      plt.ylabel("Numero")
      plt.yscale("linear")
      # plt.show()
      finalFigure.savefig("./img/" + fileName + ".png")