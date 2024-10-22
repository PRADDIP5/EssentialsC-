class OnlineTicket{
		private:
				string _name,_source,_destination,_mealType;
				int _preference,_age;
				bool _insured;
				OnlineTicket(){
						this->_name="";
						this->_age=4;
						this->_source="";
						this->_destination="";
						this->_mealTye="Veg";
						this->_preference=0;
						this->_insured=true;
				}

		public:
				OnlineTicket(string name,int age,string source,string destination){
						this->_name=name;
						this->_age=age;
						this->_source=source;
						this->_destination=destination;
				}
				OnlineTicket(string name,int age,string source,string destination,string mealType){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_mealTye=mealType
				}
				OnlineTicket(string name,int age,string source,string destination,bool insured){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_insured=insured;
				}
				OnlineTicket(string name,int age,string source,string destination,int  preference){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_preference=preference;
				}
				OnlineTicket(string name,int age,string source,string destination,string mealTye,int  preference){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_mealType=mealType;
						this->_preference=preference;
				}
				OnlineTicket(string name,int age,string source,string destination,string mealType,int  preference,bool insured){
						this->_name=name;
						this->age=age;
						this->_source=source;
						this->_destination=destination;
						this->_mealType=mealType;
						this->_preference=preference;
						this->_insured=insured;
				}

};
