#include <iostream>

class Phone_Camera
{
	private:
		int numberOfLenses;
		bool absorb = false;
	public:
		int megapixels;
		int size;
		
		Phone_Camera()
		{
			std::cout<<"Should to hava a phone!"<<std::endl;	
		};
		Phone_Camera(int _megapixels,int _size,int _numberOfLenses)
		{
			megapixels = _megapixels;
			size = _size;
			numberOfLenses = _numberOfLenses;
		};
		Phone_Camera(const Phone_Camera &PC):megapixels(PC.megapixels),size(PC.size),numberOfLenses(PC.numberOfLenses)
		{	
		};
		
		void AbsorbLight()
		{
			absorb = true;
		}
		
		void TakePhoto()
		{
			if(megapixels>0 && size>0 && numberOfLenses>0)
			{
				AbsorbLight();
				if(absorb = true)
				{
					std::cout<<"Take photo."<<std::endl;
				}
				else
				{
					std::cout<<"Error."<<std::endl;
				}
					
			}
			else
			{
				std::cout<<"We don't have a camera."<<std::endl;
			}
		}
		
		void Focus()
		{
			if(megapixels>0 && size>0 && numberOfLenses>0)
			{
				std::cout<<"Focus."<<std::endl;
			}
			else
			{
				std::cout<<"We don't have a camera."<<std::endl;
			}
		}
	
};

class Phone
{
	private:
		int PIN;
		int photos = 0;
		
	public:
		int storage;
		int numberOfButtons;
		Phone_Camera PC1;

		
		Phone()
		{
			std::cout<<"Enter PIN:"<<std::endl;
		};
		Phone(int _storage,int _numberOfButtons,int _PIN):storage(_storage),numberOfButtons(_numberOfButtons),PIN(_PIN)
		{	
		};
		Phone(const Phone &Ph)
		{
			storage = Ph.storage;
			numberOfButtons = Ph.numberOfButtons;
			PIN = Ph.PIN;
		};
		
		void Ring()
		{
			if(storage>0)
			{
				std::cout<<"RING!"<<std::endl;
			}
			else
			{
				std::cout<<"We don't have a phone."<<std::endl;
			}
		}
		void Shine()
		{
			if(storage>0)
			{
				std::cout<<"SHINE!"<<std::endl;
			}
			else
			{
				std::cout<<"We don't have a phone."<<std::endl;
			}
		}
		int TakePhoto()
		{
			if(storage>0)
			{
				photos++;
				std::cout<<"Ready."<<std::endl;
				return photos;
			}
			else
			{
				std::cout<<"We don't have a phone."<<std::endl;
				return 0;
			}
		}
		
};



int main()
{
	Phone motorola(123,3,444);
	motorola.Ring();
	
	Phone_Camera sony(12,4,3);
	sony.Focus();
	Phone_Camera notSony(sony);
	notSony.TakePhoto();
	
}

