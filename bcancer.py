#PRE PROCESSING PART

import numpy as np
from sklearn import preprocessing , neighbors , svm , model_selection
import pandas as pd

df= pd.read_csv('https://archive.ics.uci.edu/ml/machine-learning-databases/breast-cancer-wisconsin/breast-cancer-wisconsin.data')
df.replace('?',-99999,inplace=True)
col_names=['id','clump_thickness','cell_size','cell shape','adhesion','epithelial','nuclei','brandchlomatin','nucleoli','mitoses','class']
df.columns=col_names
print(df.head())
df.drop(['id'],1,inplace=True)

X=np.array(df.drop(['class'],1))
y=np.array(df['class'])

X_train,X_test,y_train,y_test = model_selection.train_test_split(X,y,test_size=0.2)
clf=neighbors.KNeighborsClassifier()
clf.fit(X_train,y_train)
confidence=clf.score(X_test,y_test)
print("Confidence is  :-  ", int(confidence*100),'%')

example_measures=np.array([4,.2,1,1,1,2,3,2,1])
example_measures.shape=(1,-1)
prediction=clf.predict(example_measures)
print('Cancer state : ','Benign' if prediction==2 else 'Malignant')
from sklearn.pipeline import Pipeline
from sklearn.model_selection import train_test_split , GridSearchCV

pipeline=Pipeline([('clf',svm.SVC(kernel='linear',C=1,gamma=.1))])
params={'clf_C': (0.1,0.5,1,2,5,10,20)
    
}
clf=svm.SVC()
clf.fit(X_train,y_train)
confidence=clf.score(X_test,y_test)
print("Confidence is  :-  ", int(confidence*100),'%')

example_measures=np.array([4,.2,1,1,1,2,3,2,1])
example_measures.shape=(1,-1)
prediction=clf.predict(example_measures)
print('Cancer state : ','Benign' if prediction==2 else 'Malignant')
print(clf)
