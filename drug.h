#ifndef _drug_h_
#define _drug_h_

#include <string>
#include <iostream>
#include <fstream>

class Drug {
protected:
  int id;
  string name;
  string laboratory;
  string expiration_date;
  float pooling;
  string measure_unit;
  int quantity;
  
public:
  Drug(int id);
  ~Drug();

  // START: gets and sets
  virtual int getId() const;
  virtual void setId(int value);

  virtual string getName() const;
  virtual void setName(string value);
  
  virtual string getLaboratory() const;
  virtual void setLaboratory(string value);
  
  virtual string getExpirationDate() const;
  virtual void setExpirationDate(string value);
  
  virtual float getPrice() const;
  virtual void setPrice(float value);
  
  virtual float getPooling() const;
  virtual void setPooling(float value);
  
  virtual string getMeasureUnit() const;
  virtual void setMeasureUnit(string value);
  
  virtual int getQuantity() const;
  virtual void setQuantity(int value);
  // END: gets and sets  
  
  
  // START: methods
  virtual float getPricePooling() const;
  // END: methods
  

	// método responsável por escrever o estado do Vehicle para o ostream out
	//virtual void print(std::ostream &out) const;
	
	// métodos responsáveis por ler e escrever o estado do Vehicle v
	//static void write(std::ostream &out, Vehicle * v);
	//static Vehicle * read(std::istream &in);
};

#endif