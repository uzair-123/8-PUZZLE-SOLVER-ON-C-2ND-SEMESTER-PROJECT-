#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std ;


       
       
  void crit(int i , vector <int> &v1 , int &total , vector <int> &v2 , int x , int y )  
  {
  	  
   iter_swap(v1.begin() + x , v1.begin() + y);
  	total++ ;
  		
   
   cout<<"\n\n" ;		
   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }
   
  	
  v2[0] = x ;
  v2[1] = y ;	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  }   









void func(int &z , int &x , int &c , int &v , int &i , int &k , vector <int> &v1 , int h )
   {
   	
   	
	for(i=0;i<9;i++)
	{
		if(v1[i]==0)
		break ;
	}

	if(i+3<=8)
	{
	z = i + 3 ;

	}

	if(i-3>=0)
	{
		x = i - 3 ;

	}


	if(i+1!=6)
	{
	  if(i+1!=3)
	  {
	  	if(i+1<=8)
	  	{
	  	c = i + 1 ;


		}


	  }

	}



	if(i-1!=5)
	{
	  if(i-1!=2)
	  {
	  	if(i-1 >= 0)
	  	{
	  	v = i - 1 ;
		}


	  }

	}

  


	for( k = 0 ; k < 9 ; k++)
	  	{

	  	if(v1[k] == h )
	  	break ;

		}
   
   }








void decide(int x , int y , int &m1 , int &m2 , int k ,  vector <int> &v1 , int i , vector <int> &v2 , int n1 , int n2 , char ch )
 {
 
 	int a  ,  s   ;
 	
 	if(x == k)
 	m1 = 0 ;
 	
 	else
 	if( x > k )
 	{
 	
	 a = x - k ;	
 		
 	
	 if( x - k == 1 || x - k == 3 )
	 {
	 	if(k == 2 && x == 3)
	 	 m1 = n1 ;
	 	 
	 	else
		 if(k == 5 &&  x == 6 )
		 m1 = n1 ;
		 
		 else
		 m1 = 1  ;	
	 }
	 
	 else
	 if(x - k == 2 || x - k == 4 || x - k == 6)
	 {
	 	
	 	if(k == 2 && x == 6)
	 	m1 = n1 ;
	 	
	 	else
	 	m1 = 2 ;
	 	
	 	
	 }
	 
	 else
	 if(x - k == 5 || x- k == 7)
	 m1 = 3 ;
	 
	 else
	 if(x - k == 8)
	 m1 = 4 ;
		
	}
	
	else
	if(k > x)
	{
	
	a = k - x ;
	
	if( k - x == 1 || k- x == x )
	{
	
	if(x == 2 && k == 3)
	m1 = n1 ;
	
	else 
	if(x == 5 && k == 6)
	m1 = n1 ;
	
	else
	m1 = 1	 ;
		
    }	
		
   else
   if(k - x == 2 || k - x == 4 || k - x == 6 )
   {
   
   if( x == 2 && k == 6)
    m1 = n1 ;
    
   else
   m1 = 2 ; 
		 	
   	
   }		
	
	
  else
  if(k - x == 5 || k - x == 7 )
  m1 = 3 ;
  
  else 
  if( k - x == 8 )
  m1 = 4  ;
  
  
	}
	
  
  if( y == k )
  m2 = 0 ; 
  	
   else
    if(y>k)
 	{
 		
 		s = y - k ;
 	
	 if( y - k == 1 || y - k == 3 )
	 {
	 	if(k == 2 && y == 3)
	 	 m2 = n2 ;
	 	 
	 	else
		 if(k == 5 &&  y == 6 )
		  m2 = n2 ;
		 
		 else
		 m2 = 1 ;	
	 }
	 
	 else
	 if(y - k == 2 || y - k == 4 || y - k == 6)
	 {
	 	
	 	if(k == 2 && y == 6)
	 	m2 = n2  ;
	 	
	 	else
	 	m2 = 2 ;
	 	
	 	
	 }
	 
	 else
	 if(y - k == 5 || y - k == 7)
	 m2 = 3 ;
	 
	 else
	 if(y - k == 8)
	 m2 = 4 ;
		
	}
	
	else
	if(k > y)
	{
	
	s = k - y ;
	
	if( k - y == 1 || k - y == x )
	{
	
	if(y == 2 && y == 3)
	m2 =  n2 ;
	
	else 
	if(y == 5 && k == 6)
	m2 = n2 ;
	
	else
	m2 = 1 ;	
		
    }	
		
   else
   if(k - y == 2 || k - y == 4 || k - y == 6 )
   {
   
   if( y == 2 && k == 6)
    m2 = n2 ;
	    
   else
   m2 = 2 ; 
		 	
   	
   }		
	
	
  else
  if(k - y == 5 || k - y == 7 )
  m2 = 3 ;
  
  else 
  if( k - y == 8 )
  m2 = 4  ;
  
  
   }
   


    if(m1<m2)
    {
	iter_swap(v1.begin() + x , v1.begin() + i );
	v2[0] = x ;
	v2[1] = i ;
    }

    else
    if(m2<m1)
{

    iter_swap(v1.begin() + y , v1.begin() + i );
    v2[0] = y ;
	v2[1] = i ;
}
    else
    if(m1 == m2 )
    {
    
    if(ch == 'y')
    {
    
	iter_swap(v1.begin() + x , v1.begin() + i );
	v2[0] = x ;
	v2[1] = i ;
	
		
	}
    
	else	
    if( a < s )
    {

	iter_swap(v1.begin() + x , v1.begin() + i );
	v2[0] = x ;
	v2[1] = i ;


    }

	else
	if( s  < a )
	{

	iter_swap(v1.begin() + y , v1.begin() + i );
	v2[0] = y ;
	v2[1] = i ;

    }
	}



}



 void decide1(int x , int y , int z , int &m1 , int &m2 , int &m3 , int k , vector <int> &v1 , vector <int> &v2 , int n1 , int n2 , int n3 , int i  )
 {
 	int a  , s  ,  d  ;
 	
    if(x == k )
    m1 = 0 ;
    
    else
 	if( x > k )
 	{
 	
	 a = x - k ;	
 		
 	
	 if( x - k == 1 || x - k == 3 )
	 {
	 	if(k == 2 && x == 3)
	 	 m1 = n1 ;
	 	 
	 	else
		 if(k == 5 &&  x == 6 )
		 m1 = n1 ;
		 
		 else
		 m1 = 1  ;	
	 }
	 
	 else
	 if(x - k == 2 || x - k == 4 || x - k == 6)
	 {
	 	
	 	if(k == 2 && x == 6)
	 	m1 = n1 ;
	 	
	 	else
	 	m1 = 2 ;
	 	
	 	
	 }
	 
	 else
	 if(x - k == 5 || x- k == 7)
	 m1 = 3 ;
	 
	 else
	 if(x - k == 8)
	 m1 = 4 ;
		
	}
	
	else
	if(k > x)
	{
	
	a = k - x ;
	
	if( k - x == 1 || k- x == x )
	{
	
	if(x == 2 && k == 3)
	m1 = n1 ;
	
	else 
	if(x == 5 && k == 6)
	m1 = n1 ;
	
	else
	m1 = 1	 ;
		
    }	
		
   else
   if(k - x == 2 || k - x == 4 || k - x == 6 )
   {
   
   if( x == 2 && k == 6)
    m1 = n1 ;
    
   else
   m1 = 2 ; 
		 	
   	
   }		
	
	
  else
  if(k - x == 5 || k - x == 7 )
  m1 = 3 ;
  
  else 
  if( k - x == 8 )
  m1 = 4  ;
  
  
	}
	


    if(y == k )
    m2 = 0 ;
	
	else  
    if(y>k)
 	{
 		
 		s = y - k ;
 	
	 if( y - k == 1 || y - k == 3 )
	 {
	 	if(k == 2 && y == 3)
	 	 m2 = n2 ;
	 	 
	 	else
		 if(k == 5 &&  y == 6 )
		  m2 = n2 ;
		 
		 else
		 m2 = 1 ;	
	 }
	 
	 else
	 if(y - k == 2 || y - k == 4 || y - k == 6)
	 {
	 	
	 	if(k == 2 && y == 6)
	 	m2 = n2  ;
	 	
	 	else
	 	m2 = 2 ;
	 	
	 	
	 }
	 
	 else
	 if(y - k == 5 || y - k == 7)
	 m2 = 3 ;
	 
	 else
	 if(y - k == 8)
	 m2 = 4 ;
		
	}
	
	else
	if(k > y)
	{
	
	s = k - y ;
	
	if( k - y == 1 || k - y == x )
	{
	
	if(y == 2 && y == 3)
	m2 =  n2 ;
	
	else 
	if(y == 5 && k == 6)
	m2 = n2 ;
	
	else
	m2 = 1 ;	
		
    }	
		
   else
   if(k - y == 2 || k - y == 4 || k - y == 6 )
   {
   
   if( y == 2 && k == 6)
    m2 = n2 ;
	    
   else
   m2 = 2 ; 
		 	
   	
   }		
	
	
  else
  if(k - y == 5 || k - y == 7 )
  m2 = 3 ;
  
  else 
  if( k - y == 8 )
  m2 = 4  ;
  
  
	}
    
   
	
	

	 
    if( z == k )
    m3 = 0 ;
	
	  
    else
   	if(z>k)
 	{
 	
 	d = z - k ;
 	
 	
 	
	 if( z - k == 1 || z - k == 3 )
	 {
	 	if(k == 2 && z == 3)
	 	 m3 = n3 ;
	 	 
	 	else
		 if(k == 5 &&  z == 6 )
		  m3 = n3 ;
		 
		 else
		 m3 = 1  ;	
	 }
	 
	 else
	 if(z - k == 2 || z - k == 4 || z - k == 6)
	 {
	 	
	 	if(k == 2 && z == 6)
	 	m3 = n3 ; 
	 	
	 	else
	 	m3 = 2 ;
	 	
	 	
	 }
	 
	 else
	 if(z - k == 5 || z - k == 7)
	 m3 = 3 ;
	 
	 else
	 if(z - k == 8)
	 m3 = 4 ;
		
	}
	
	else
	if(k > z)
	{
	
	
	s = k - z ;
	
	if( k - z == 1 || k - z == x )
	{
	
	if(z == 2 && k == 3)
	m3 =  n3 ;
	
	else 
	if(z == 5 && k == 6)
	m3 = n3 ;
	
	else
	m3 = 1 ;	
		
    }	
		
   else
   if(k - z == 2 || k - z == 4 || k - z == 6 )
   {
   
   if( z == 2 && k == 6)
    m3 = n3 ;
	    
   else
   m3 = 2 ; 
		 	
   	
   }		
	
	
  else
  if(k - z == 5 || k - z == 7 )
  m3 = 3 ;
  
  else 
  if( k - z == 8 )
  m3 = 4  ;
  
  

   
 
}

  
    

 
  if(m1 < m2 && m1 < m3 )
  {
  
  iter_swap(v1.begin() + x , v1.begin() + i );
	v2[0] = x ;
	v2[1] = i ;
  	
  	
  	
  }
  
  else
  if( m2 < m1 && m2 < m3 )
  {
  	
  	iter_swap(v1.begin() + y , v1.begin() + i );
	v2[0] = y ;
	v2[1] = i ;
  	
  }
  
  else
  if( m3 < m1 && m3 < m2 )
  {
  	iter_swap(v1.begin() + z , v1.begin() + i );
	v2[0] = z ;
	v2[1] = i ;
  	
  	
  }
  
  
  else
  if(a < s && a < d )
  {
  	
  	iter_swap(v1.begin() + x , v1.begin() + i );
	v2[0] = x ;
	v2[1] = i ;
  	
  	
  }
  
  else
  if(s < a && s < d )
  {
  	
  	iter_swap(v1.begin() + y , v1.begin() + i );
	v2[0] = y ;
	v2[1] = i ;
  	
  }
  
  
  else
  if( d < a && d < s )
  {
  	
  	iter_swap(v1.begin() + z , v1.begin() + i );
	v2[0] = z ;
	v2[1] = i ;
  	
  }
  
  
  
  	
   }
   
   
  void decide2(int x , int &n1 , int m1 , int  i)  
  {
  	
   	if( x > i )
 	{
 	
 	
 	
 	
 	
	 if( x - i == 1 || x - i == 3 )
	 {
	 	if( i == 2 && x == 3 )
	 	 n1 = m1 ;
	 	 
	 	else
		 if(i == 5 &&  x == 6 )
		  n1 = m1 ;
		 
		 else
		 n1 = 1  ;	
	 }
	 
	 else
	 if(x - i == 2 || x - i == 4 || x - i == 6)
	 {
	 	
	 	if(i == 2 && x == 6)
	 	n1 = m1 ; 
	 	
	 	else
	 	n1 = 2 ;
	 	
	 	
	 }
	 
	 else
	 if(x - i == 5 || x - i == 7)
	 n1 = 3  ;
	 
	 else
	 if(x - i == 8)
	 n1 = 4 ;
	 
	 	
	}
	
	else
	if(i > x)
	{
	
	
	if( i - x == 1 || i - x == 3 )
	{
	
	if(x == 2 && i == 3)
	n1 = m1 ;
	
	else 
	if(x == 5 && i == 6)
	n1 = m1 ;
	
	else
	n1 = 1 ;	
		
    }	
		
   else
   if(i - x == 2 || i - x == 4 || i - x == 6 )
   {
   	
   if( x == 2 && i == 6)
    n1 = m1 ;
	    
   else
   n1 = 2 ; 
		 	
   	
   }		
	
	
  else
  if(i - x == 5 || i - x == 7 )
  n1 = 3 ;
  
  else 
  if( i - x == 8 )
  n1 = 3 ;
  
  

   }

   } 	
  	
   
  



int main()
{
 int index ;

 char ch ;
 ch = 'y' ;

 while(ch == 'y' )
 {



 vector <int> v1(9,0) ;


 for( index = 0 ; index < 9 ; index ++ )

 {

     cout<<"enter tile " << index + 1 << " number\n" ;
     cin>>v1[index] ;
 }

 cout<<"HERE IS YOUR CHOICE\n" ;

 for( index = 0 ; index < 9 ; index ++ )

 {

   cout<<v1[index] ;

   if(index == 2 )
   cout<<"\n" ;

   else
   if(index == 5 )
   cout<<"\n" ;

   else
   if(index == 8)
   cout<<"\n" ;

 }






	vector <int> v2{9,9};

    int total = 0  , l  = 0  , m ;

  for( m = 0 ; m < 1 ; m++)
  {
  	 
  	 
  	 

     l++ ;

    while( v1[0] != 1 )
    {
	
   	int i  , count  = 0  , z = 9 , x = 9  , c = 9 , v = 9 , check = 0  ,  j = 0  , n1 = 9  , n2 = 10 , n3 = 11  , n4 = 12 , k  , a = 0 , s = 3 ;
  
  
     func( z ,  x ,  c ,  v ,  i  ,  k  , v1 , 1 ) ;
 
      
      
     
    if(z != 9 )
	  {


	    for(j=0;j<2;j++)
		  {
		  if(v2[j] == z )
		  count++ ;


		  if(v2[j] == i )
		  count++ ;

		  }




		 if(count != 2)
		 {

		 if(v1[z] == 1 )
		 {

	  	iter_swap(v1.begin() + z , v1.begin() + i );
	  	check += 1 ;
	  	v2[0] = z ;
	  	v2[1] = i ;
	  	total++ ;

	     }

	  else
	  decide2( z , n1 , 9 , k ) ;


		 }



	   count = 0 ;

}





if(x!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == x )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	    if(check == 0 )
		{
			
			if(count != 2)
         decide2(x,n2,10,k) ;
	
		 
		}

		count = 0 ;

	  }



	  if(c!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == c )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }




	    if(check == 0 )
		{
			if(count != 2)
			{



			if(v1[c] == 1)
			{

			iter_swap(v1.begin() + c , v1.begin() + i);
			check += 1 ;
			v2[0] = c ;
			v2[1] = i ;
			total++ ;

		    }
		     
		    else
		    decide2(c,n3,11,k) ;
		 }
		 
		 }



		count = 0 ;

	  }

	  if(v!=9)
	  {

		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == v )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	 if(check == 0 )
		{



			if(count != 2)
			{

			if(v1[v] == 1)
			{

			iter_swap(v1.begin() + v , v1.begin() + i);
			check +=  1 ;
			v2[0] = v ;
			v2[1] = i ;
			total++ ;
		    }
		    
		    else
		    decide2( v , n4 , 12 , k ) ;
		    
		    }

			}



		 count = 0 ;

	        }


	   if(l == 8)
	   {
	    cout<<z<<x<<c<<v ;
	   cout<<n1<<n2<<n3<<n4 ;


	  }

     if( l == 10 )
     cout<<"\n"<<n1<<n2<<n3<<n4<<z<<x<<c<<v ;

	   if( check == 0 )

	   {

	   if(n1<n2 && n1<n3 && n1<n4)
	   {

	   	iter_swap(v1.begin() + z , v1.begin() + i);
	   	v2[0] = z ;
	   	v2[1] = i ;
	   	total++ ;

	   }

	   else
	   if(n2<n1 && n2<n3 && n2<n4)
	   {

	   iter_swap(v1.begin() + x , v1.begin() + i );
	   	v2[0] = x ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if(n3 < n1 && n3 < n2 && n3 < n4)
	   {
	   iter_swap(v1.begin() + c , v1.begin() + i);
	   	v2[0] = c ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if( n4 < n1 && n4 < n2 && n4 < n3 )
	   {

	   	iter_swap(v1.begin() + v , v1.begin() + i);
	   	v2[0] = v ;
	   	v2[1] = i ;
	   	total++ ;
	   }
	   
	   
	   else
	   if( n1 == n2 && n2 == n3 )
	   {
	
	   	decide1(z , x , c , n1 , n2 , n3  , 0 ,  v1 , v2 , 9 , 10 , 11 , i) ;
	   	total++ ;
	   	
	   	
	   }
	   
	   else
	   if( n1 == n2 && n2 == n4 )
	   {
	   
	   	decide1(z , x , v , n1 , n2 , n4 , 0 , v1 , v2 , 9 , 10 , 12 , i  ) ;
	   	total++ ;
	   	
	   }
	   
	   else
	   if( n1 == n3 && n3 == n4 )
	   {
	   	
	   	decide1(z , c , v , n1 , n3 , n4 , 0 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    total++ ;
	   	
	   }
	   
	   else
	   if( n2 == n3 && n3 == n4 )
	   {
	   		   	
	   	
	   	decide1(x , c , v , n2 , n3 , n4 , 0 , v1 , v2 , 10 , 11 , 12 , i ) ;
	   	total++ ;
	   	
	   }
	   

	   else
	   if( n1 == n2 )
	   {
	   	
	   	
	   	

	   	decide(z , x , n1 , n2 , 0  , v1 , i , v2 , 9 , 10 ,  'n') ;
	   	total++ ;
	   }

	   else
	   if(n1 == n3)
	   {
	   	
	   	

	   	decide(z , c ,  n1 , n3 , 0 , v1 , i , v2 , 9 , 11 ,  'n') ;
	   	total++ ;

	   }

	   else
	   if(n1 == n4)
	   {
	   	
	
	   	

	   	decide(z , v ,  n1 , n4 , 0 , v1 , i , v2 , 9 , 12 ,  'n' ) ;
	   	total++ ;



	   }

	   else
	   if(n2 == n3)
	   {
	   	
       
        
        
	   	decide(x , c ,  n2 , n3 , 0 , v1 , i , v2 , 10 , 11 , 'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n2 == n4)
	   {
	   	
	
	   	
	   	
	   	
	   	
	   	
	   	decide(x , v ,  n2 , n4 , 0 , v1 , i , v2 , 10 , 12  ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n3  == n4)
	   {
	   	
	  
	   	
	   	decide(c , v ,  n3 , n4 , 0 , v1 , i , v2 , 11 , 12 ,  'n' ) ;
	   	total++ ;



	   }


}


   cout<<"\n\n";

   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }









}
   
   int h ;
   
   while( v1[1] != 2 )
  {
  	 
  	 
  	 
   	int  count  = 0  , z = 9 , x = 9  , c = 9 , v = 9 , check = 0  ,  j = 0  , n1 = 9  , n2 = 10 , n3 = 11  , n4 = 12 , k  , a = 0 , s = 3 , i  ;

     func( z , x , c, v ,i , k , v1 , 2 ) ;
   
   
   
     
    if(z != 9 )
	  {


	    for(j=0;j<2;j++)
		  {
		  if(v2[j] == z )
		  count++ ;


		  if(v2[j] == i )
		  count++ ;

		  }


		 if(count != 2)
		 {
		 	
		if(z != 0 )
		{
			  	

		 if(v1[z] == 2 )
		 {

	  	iter_swap(v1.begin() + z , v1.begin() + i );
	  	check += 1 ;
	  	v2[0] = z ;
	  	v2[1] = i ;
	  	total++ ;

	     }

	  else
	  decide2( z , n1 , 9 , k ) ;


		 }

   }

	   count = 0 ;

    }





if(x!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == x )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	    if(check == 0 )
		{
			
			if(count != 2)
		{
		
		if(x != 0 )		
		{
				
         decide2(x,n2,10,k) ;
	    }
	    
	    }
		 
		}

		count = 0 ;

	  }



	  if(c!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == c )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }




	    if(check == 0 )
		{
		  	
			
			if(count != 2)
			{

           if( c != 0 )
           {
		   
  
			if(v1[c] == 2)
			{

			iter_swap(v1.begin() + c , v1.begin() + i);
			check += 1 ;
			v2[0] = c ;
			v2[1] = i ;
			total++ ;

		    }
		     
		    else
		    decide2(c,n3,11,k) ;
		 }
		 
		 }
   
    }


		count = 0 ;

	  }

	  if(v!=9)
	  {

		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == v )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	 if(check == 0 )
		
		{

			if(count != 2)
			{
				
			if( v != 0 )
			{
				
				

			if(v1[v] == 2)
			{

			iter_swap(v1.begin() + v , v1.begin() + i);
			check +=  1 ;
			v2[0] = v ;
			v2[1] = i ;
			total++ ;
		    }
		    
		    else
		    decide2( v , n4 , 12 , k ) ;
		    
		    }
        
			}

     }

		 count = 0 ;

	        }



	   if( check == 0 )

	   {

	   if(n1<n2 && n1<n3 && n1<n4)
	   {

	   	iter_swap(v1.begin() + z , v1.begin() + i);
	   	v2[0] = z ;
	   	v2[1] = i ;
	   	total++ ;

	   }

	   else
	   if(n2<n1 && n2<n3 && n2<n4)
	   {

	   iter_swap(v1.begin() + x , v1.begin() + i );
	   	v2[0] = x ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if(n3 < n1 && n3 < n2 && n3 < n4)
	   {
	   iter_swap(v1.begin() + c , v1.begin() + i);
	   	v2[0] = c ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if( n4 < n1 && n4 < n2 && n4 < n3 )
	   {

	   	iter_swap(v1.begin() + v , v1.begin() + i);
	   	v2[0] = v ;
	   	v2[1] = i ;
	   	total++ ;
	   }
	   
	   
	   else
	   if( n1 == n2 && n2 == n3 )
	   {
	  
	   	
	   	
	   	
	   	
	   	
	   	decide1(z , x , c , n1 , n2 , n3  , 1 ,  v1 , v2 , 9 , 10 , 11 , i) ;
	   	total++ ;
	   	
	   	
	   }
	   
	   else
	   if( n1 == n2 && n2 == n4 )
	   {
	   	

	   
	   	decide1(z , x , v , n1 , n3 , n4 , 1 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    
	   	total++ ;
	   
	   	
	   }
	   
	   else
	   if( n1 == n3 && n3 == n4 )
	   {
	   	
	   
	   	
	   	
	   	
	   	
	   	decide1(z , c , v , n1 , n3 , n4 , 1 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    total++ ;
	   	
	   }
	   
	   else
	   if( n2 == n3 && n3 == n4 )
	   {
	   	
	   	decide1(x , c , v , n2 , n3 , n4 , 1 , v1 , v2 , 10 , 11 , 12 , i ) ;
	   	total++ ;
	   	
	   }
	   

	   else
	   if( n1 == n2 )
	   {

	   	decide(z , x , n1 , n2 , 1 ,  v1 , i , v2 , 9 , 10 , 'n' ) ;
	   	total++ ;
	   }

	   else
	   if(n1 == n3)
	   {
        
      

	   	decide(z , c , n1 , n3 , 1 , v1 , i , v2 , 9 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n1 == n4)
	   {
	   	
	  
	   	

	   	decide(z , v ,  n1 , n4 , 1 , v1 , i , v2 , 9 , 12 ,  'n' ) ;
	   	total++ ;



	   }

	   else
	   if(n2 == n3)
	   {
	   
	   	

	   	decide(x , c ,  n2 , n3 , 1 , v1 , i , v2 , 10 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n2 == n4)
	   {
	   	
	  
	   	decide(x , v ,  n2 , n4 , 1 , v1 , i , v2 , 10 , 12 ,  'n') ;
	   	total++ ;

	   }

	   else
	   if(n3  == n4)
	   {
	   	
			      	
	   	decide(c , v ,  n3 , n4 , 1 , v1 , i , v2 , 11 , 12 , 'y' ) ;
	   	total++ ;



	   }

}



   cout<<"\n\n";

   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }














  }
  
  
  
   int i  ;
    char aq ;
    int r  , t ;
   
   if(v1[2] == 0  && v1[5] == 3 )
   {
   crit(i ,  v1 , total , v2 ,  2 , 5 ) ;	
   } 
   
   
  
  if(v1[2] != 3 )	
  {
  
  
  if( v1[4] == 0 )
  {
  	crit(i ,  v1 , total , v2 ,  3 , 4 ) ;
  	
  }
  
  else
  if( v1[2] == 0 )
  {
  	crit(i ,  v1 , total , v2 ,  2 , 5 ) ; 
  		  		
  	crit(i ,  v1 , total , v2 ,  4 , 5 ) ; 
		
  	crit(i ,  v1 , total , v2 ,  3 , 4 ) ; 
  	
  	
  	
  	
  	
  	
  }
  
  
  
  	crit(i ,  v1 , total , v2 ,  0 , 3 ) ; 
     
	crit(i ,  v1 , total , v2 ,  0 , 1 ) ;   
	  
 
   
   for(i=0;i<9;i++)
   {
   	
   	if(v1[i] == 3 )
   	break ;
   }
   
  
   
   
   if(i == 6 )
   {
    
    r = 3 ;
    
    t = 6 ;

    
    aq = 'y' ;
   	
   	crit(i ,  v1 , total , v2 ,  1 , 4 ) ;
	crit(i ,  v1 , total , v2 ,  4 , 7 ) ; 	    	
   	crit(i ,  v1 , total , v2 ,  6 , 7 ) ; 	
   	crit(i ,  v1 , total , v2 ,  3 , 6 ) ; 	
   	crit(i ,  v1 , total , v2 ,  0 , 3 ) ; 	
  	
   	
   }
   
    else
    {
    	
    	r = 0 ;
    	
    	t = 3 ;
    	
	}
   
    
    
  
        
  
  
      }
  
   
   int hy ;
  
  
  
   while( v1[2] != 3 )
  {

  	
   	int  count  = 0  , z = 9 , x = 9  , c = 9 , v = 9 , check = 0  ,  j = 0  , n1 = 9  , n2 = 10 , n3 = 11  , n4 = 12 , k  , a = 0 , s = 3 , i  ;

     func( z , x , c, v ,i , k , v1 , 3 ) ;

    if(z != 9 )
	  {
	  	
	    for(j=0;j<2;j++)
		  {
		  if(v2[j] == z )
		  count++ ;


		  if(v2[j] == i )
		  count++ ;

		  }


		 if(count != 2)
		 {
		 	
		if(z != r )
		{
		
		if(z !=  t)
		{
				
			  	

		 if(v1[z] == 3 )
		 {

	  	iter_swap(v1.begin() + z , v1.begin() + i );
	  	check += 1 ;
	  	v2[0] = z ;
	  	v2[1] = i ;
	  	total++ ;

	     }

	  else
	  decide2( z , n1 , 9 , k ) ;

     }
 
		 }

   }

	   count = 0 ;

    }





if(x!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == x )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	    if(check == 0 )
		{
			
			if(count != 2)
		{
		
		if(x != 0 )		
		{
		
		
		if( x != 3 )
		{
						
         decide2(x,n2,10,k) ;
         
     }
         
	    }
	    
	    }
		 
		}

		count = 0 ;

	  }



	  if(c!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == c )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }




	    if(check == 0 )
		{
		  	
			
			if(count != 2)
			{

           if( c != 0 )
           {
           	
           	if(c != 3 )
           	{
			   
           	
		   
  
			if(v1[c] == 3)
			{

			iter_swap(v1.begin() + c , v1.begin() + i);
			check += 1 ;
			v2[0] = c ;
			v2[1] = i ;
			total++ ;

		    }
		     
		    else
		    decide2(c,n3,11,k) ;
		    
		}
		
		 }
		 
		 }
   
    }


		count = 0 ;

	  }

	  if(v!=9)
	  {

		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == v )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	 if(check == 0 )
		
		{

			if(count != 2)
			{
				
			if( v != 0 )
			{
			
			if( v != 3 )
			{
				
				

			if(v1[v] == 3 )
			{

			iter_swap(v1.begin() + v , v1.begin() + i);
			check +=  1 ;
			v2[0] = v ;
			v2[1] = i ;
			total++ ;
		    }
		    
		    else
		    decide2( v , n4 , 12 , k ) ;
		    
		}
		    
		    }
        
			}

     }

		 count = 0 ;

	        }



	   if( check == 0 )

	   {

	   if(n1<n2 && n1<n3 && n1<n4)
	   {

	   	iter_swap(v1.begin() + z , v1.begin() + i);
	   	v2[0] = z ;
	   	v2[1] = i ;
	   	total++ ;

	   }

	   else
	   if(n2<n1 && n2<n3 && n2<n4)
	   {

	   iter_swap(v1.begin() + x , v1.begin() + i );
	   	v2[0] = x ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if(n3 < n1 && n3 < n2 && n3 < n4)
	   {
	   iter_swap(v1.begin() + c , v1.begin() + i);
	   	v2[0] = c ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if( n4 < n1 && n4 < n2 && n4 < n3 )
	   {

	   	iter_swap(v1.begin() + v , v1.begin() + i);
	   	v2[0] = v ;
	   	v2[1] = i ;
	   	total++ ;
	   }
	   
	   
	   else
	   if( n1 == n2 && n2 == n3 )
	   {
	   	
	   	decide1(z , x , c , n1 , n2 , n3  , 2 ,  v1 , v2 , 9 , 10 , 11 , i) ;
	   	total++ ;
	   	
	   	
	   }
	   
	   else
	   if( n1 == n2 && n2 == n4 )
	   {
	   	decide1(z , x , v , n1 , n2 , n4 , 2 , v1 , v2 , 9 , 10 , 12 , i  ) ;
	   	total++ ;
	   	
	   }
	   
	   else
	   if( n1 == n3 && n3 == n4 )
	   {
	   	
	   	decide1(z , c , v , n1 , n3 , n4 , 2 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    total++ ;
	   	
	   }
	   
	   else
	   if( n2 == n3 && n3 == n4 )
	   {
	
	   	decide1(x , c , v , n2 , n3 , n4 , 2 , v1 , v2 , 10 , 11 , 12 , i ) ;
	   	total++ ;
	   	
	   }
	   

	   else
	   if( n1 == n2 )
	   {
	   	

	   	decide(z , x , n1 , n2 , 2 ,  v1 , i , v2 , 9 , 10 , 'n' ) ;
	   	total++ ;
	   }

	   else
	   if(n1 == n3)
	   {

	   	decide(z , c , n1 , n3 , 2 , v1 , i , v2 , 9 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n1 == n4)
	   {

	   	decide(z , v ,  n1 , n4 , 2 , v1 , i , v2 , 9 , 12 ,  'n' ) ;
	   	total++ ;



	   }

	   else
	   if(n2 == n3)
	   {

	   	decide(x , c ,  n2 , n3 , 2 , v1 , i , v2 , 10 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n2 == n4)
	   {
	   	decide(x , v ,  n2 , n4 , 2 , v1 , i , v2 , 10 , 12 ,  'n') ;
	   	total++ ;

	   }

	   else
	   if(n3  == n4)
	   {
	   		   	
	   	decide(c , v ,  n3 , n4 , 2 , v1 , i , v2 , 11 , 12 , 'y' ) ;
	   	total++ ;



	   }

}



   cout<<"\n\n";

   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }














  }
  
   if(v1[0] != 1)
   {
    if(v1[1] != 2)
    {
	
  if(v1[1] == 0  )
  {
  	
  	if(r == 3)
  	{
  	
	  crit(i ,   v1 , total , v2 ,  0 , 1 ) ;	
	  crit(i ,   v1 , total , v2 ,  0 , 3 ) ;
	  crit(i ,   v1 , total , v2 ,  3 , 6 ) ;
	  crit(i ,   v1 , total , v2 ,  6 , 7 ) ;
	  crit(i ,   v1 , total , v2 ,  4 , 7 ) ;
	  crit(i ,   v1 , total , v2 ,  1 , 4 ) ;
	  crit(i ,   v1 , total , v2 ,  0 , 1 ) ;
	  crit(i ,   v1 , total , v2 ,  0 , 3 ) ;
	  
	  }
  	
  	
  	else
  	{
	  
  	
  	
  	iter_swap(v1.begin() + 0 , v1.begin() + 1);
  	total++ ;
  		
   
   cout<<"\n\n" ;		
   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }
  	
  
  iter_swap(v1.begin() + 0 , v1.begin() + 3);
  total++ ;
  		
   
   cout<<"\n\n" ;		
   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }
  
  }
  	
  }
  
  else
  if( v1[5] == 0 )
  {
  	
  	if(r == 3 )
  	{
  		
	crit(i ,   v1 , total , v2 ,  4 , 5 ) ;
	crit(i ,   v1 , total , v2 ,  1 , 4 ) ;
	crit(i ,   v1 , total , v2 ,  0 , 1 ) ;
	crit(i ,   v1 , total , v2 ,  0 , 3 ) ;
	crit(i ,   v1 , total , v2 ,  3 , 6 ) ;
	crit(i ,   v1 , total , v2 ,  6 , 7 ) ;
	crit(i ,   v1 , total , v2 ,  4 , 7 ) ;
	crit(i ,   v1 , total , v2 ,  4 , 1 ) ;
	crit(i ,   v1 , total , v2 ,  0 , 1 ) ;
	crit(i ,   v1 , total , v2 ,  0 , 3 ) ;
	
	}
  	
  	
  	else
  	{
	  
  	
  	iter_swap(v1.begin() + 4 , v1.begin() + 5 );
  	total++ ;
  		
   
   cout<<"\n\n" ; 		
   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }
   
   
   
   iter_swap(v1.begin() + 1 , v1.begin() + 4);
  	total++ ;
  		
   
   cout<<"\n\n" ;		
   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }
   
   
   iter_swap(v1.begin() + 0 , v1.begin() + 1);
  	total++ ;
  		
   
   cout<<"\n\n" ;		
   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }
   
   
   
   
   iter_swap(v1.begin() + 0 , v1.begin() + 3);
  	total++ ;
  		
   
   cout<<"\n\n" ;		
   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }
   
   
     }
   	
  	
  }
   
    }
   
     }
  
    
   while( v1[3] != 4 )
  {
  	 
   	int  count  = 0  , z = 9 , x = 9  , c = 9 , v = 9 , check = 0  ,  j = 0  , n1 = 9  , n2 = 10 , n3 = 11  , n4 = 12 , k  , a = 0 , s = 3 , i  ;

     func( z , x , c, v ,i , k , v1 , 4 ) ;
   
   
   
     
    if(z != 9 )
	  {


	    for(j=0;j<2;j++)
		  {
		  if(v2[j] == z )
		  count++ ;


		  if(v2[j] == i )
		  count++ ;

		  }


		 if(count != 2)
		 {
		 	
		if(z != 0 )
		{
	 
	    if(z != 1 )
		{
		
		if( z != 2 )
		{
																  	  
			  	  

		 if(v1[z] == 4 )
		 {

	  	iter_swap(v1.begin() + z , v1.begin() + i );
	  	check += 1 ;
	  	v2[0] = z ;
	  	v2[1] = i ;
	  	total++ ;

	     }

	  else
	  decide2( z , n1 , 9 , k ) ;
     }
     
     
    }

		 }

   }

	   count = 0 ;

    }





if(x!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == x )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	    if(check == 0 )
		{
			
			if(count != 2)
		{
		
		if(x != 0 )		
		{
			
	    if(x != 1 )
		{
			
	    if( x != 2 )
		{
						
						
			
				
         decide2(x,n2,10,k) ;
         
    }
         
     }
         
	    }
	    
	    }
		 
		}

		count = 0 ;

	  }



	  if(c!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == c )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }




	    if(check == 0 )
		{
		  	
			
			if(count != 2)
			{

           if( c != 0 )
           {
		   
		   if( c != 1 )
		   {
		   
		   if(c != 2 )
		   {
		   
  
			if(v1[c] == 4)
			{

			iter_swap(v1.begin() + c , v1.begin() + i);
			check += 1 ;
			v2[0] = c ;
			v2[1] = i ;
			total++ ;

		    }
		     
		    else
		    decide2(c,n3,11,k) ;
		   
	       }
		    
		}
		 }
		 
		 }
   
    }


		count = 0 ;

	  }

	  if(v!=9)
	  {

		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == v )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	 if(check == 0 )
		
		{

			if(count != 2)
			{
				
			if( v != 0 )
			{
			
			
			
			if(v != 1 )
			{
		     
			 if( v != 2 )
			 {
						
					
				

			if(v1[v] == 4)
			{

			iter_swap(v1.begin() + v , v1.begin() + i);
			check +=  1 ;
			v2[0] = v ;
			v2[1] = i ;
			total++ ;
		    }
		    
		    else
		    decide2( v , n4 , 12 , k ) ;
	}
		
		}
		    }
        
			}

     }

		 count = 0 ;

	        }



	   if( check == 0 )

	   {

	   if(n1<n2 && n1<n3 && n1<n4)
	   {

	   	iter_swap(v1.begin() + z , v1.begin() + i);
	   	v2[0] = z ;
	   	v2[1] = i ;
	   	total++ ;

	   }

	   else
	   if(n2<n1 && n2<n3 && n2<n4)
	   {

	   iter_swap(v1.begin() + x , v1.begin() + i );
	   	v2[0] = x ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if(n3 < n1 && n3 < n2 && n3 < n4)
	   {
	   iter_swap(v1.begin() + c , v1.begin() + i);
	   	v2[0] = c ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if( n4 < n1 && n4 < n2 && n4 < n3 )
	   {

	   	iter_swap(v1.begin() + v , v1.begin() + i);
	   	v2[0] = v ;
	   	v2[1] = i ;
	   	total++ ;
	   }
	   
	   
	   else
	   if( n1 == n2 && n2 == n3 )
	   {
	  
	   	
	   	
	   	
	   	
	   	
	   	decide1(z , x , c , n1 , n2 , n3  , 3 ,  v1 , v2 , 9 , 10 , 11 , i) ;
	   	total++ ;
	   	
	   	
	   }
	   
	   else
	   if( n1 == n2 && n2 == n4 )
	   {
	   	

	   
	   	decide1(z , c , v , n1 , n3 , n4 , 3 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    
	   	total++ ;
	   
	   	
	   }
	   
	   else
	   if( n1 == n3 && n3 == n4 )
	   {
	   	
	   
	   	
	   	
	   	
	   	
	   	decide1(z , c , v , n1 , n3 , n4 , 3 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    total++ ;
	   	
	   }
	   
	   else
	   if( n2 == n3 && n3 == n4 )
	   {
	   	
	   	decide1(x , c , v , n2 , n3 , n4 , 3 , v1 , v2 , 10 , 11 , 12 , i ) ;
	   	total++ ;
	   	
	   }
	   

	   else
	   if( n1 == n2 )
	   {

	   	decide(z , x , n1 , n2 , 3 ,  v1 , i , v2 , 9 , 10 , 'n' ) ;
	   	total++ ;
	   }

	   else
	   if(n1 == n3)
	   {
        
      

	   	decide(z , c , n1 , n3 , 3 , v1 , i , v2 , 9 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n1 == n4)
	   {
	   	
	  
	   	

	   	decide(z , v ,  n1 , n4 , 3 , v1 , i , v2 , 9 , 12 ,  'n' ) ;
	   	total++ ;



	   }

	   else
	   if(n2 == n3)
	   {
	   
	   	

	   	decide(x , c ,  n2 , n3 , 3 , v1 , i , v2 , 10 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n2 == n4)
	   {
	   	
	  
	   	decide(x , v ,  n2 , n4 , 3 , v1 , i , v2 , 10 , 12 ,  'n') ;
	   	total++ ;

	   }

	   else
	   if(n3  == n4)
	   {
	   	
			      	
	   	decide(c , v ,  n3 , n4 , 3 , v1 , i , v2 , 11 , 12 , 'y' ) ;
	   	total++ ;



	   }

}



   cout<<"\n\n";

   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }














  }

  
    
    
    if(v1[4] != 5)
    
 {
 
     	
  if(v1[4] == 0 && v1[6] == 5 )
  {
  	
  	crit(i ,   v1 , total , v2 ,  4 , 7 ) ; 
    	
    crit(i ,   v1 , total , v2 ,  6 , 7 ) ;
	  	
  	crit(i ,   v1 , total , v2 ,  3 , 6 ) ; 
  	
  	crit(i ,   v1 , total , v2 ,  3 , 4 ) ;
	 
	crit(i ,   v1 , total , v2 ,  4 , 7 ) ;   
	   
	crit(i ,   v1 , total , v2 ,  7 , 8 ) ;   
	  
	crit(i ,   v1 , total , v2 ,  5 , 8 ) ;   

	crit(i ,   v1 , total , v2 ,  4 , 5 ) ; 
	
	crit(i ,  v1 , total , v2 ,  3 , 4 ) ; 
	
	crit(i ,  v1 , total , v2 ,  3 , 6 ) ; 
	
	crit(i ,  v1 , total , v2 ,  6 , 7 ) ; 
	   
	crit(i ,  v1 , total , v2 ,  4 , 7 ) ;
	
	crit(i ,  v1 , total , v2 ,  4 , 5 ) ;  
	
	   
	   
  }
  
  
    else
    if(v1[6] == 0 && v1[7] == 5 )
    {
    	
        crit(i ,  v1 , total , v2 ,  3 , 6 ) ; 	
    	
     	crit(i ,  v1 , total , v2 ,  3 , 4 ) ; 	
    	
     	crit(i ,  v1 , total , v2 ,  4 , 7 ) ;  	
    	
      	crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
      	
		crit(i ,  v1 , total , v2 ,  8 , 5 ) ;
		 
	    crit(i ,  v1 , total , v2 ,  4 , 5 ) ; 
					    
		crit(i ,  v1 , total , v2 ,  3 , 4 ) ;  	
    	
    	crit(i ,  v1 , total , v2 ,  3 , 6 ) ;
		
		crit(i ,   v1 , total , v2 ,  6 , 7 ) ;  
    
    	crit(i ,   v1 , total , v2 ,  4 , 7 ) ; 
    	
    	crit(i ,   v1 , total , v2 ,  4 , 5 ) ; 
    	
    	
     }
  	
  	
  	else
  	if((v1[6] == 5 && v1[7] == 0 ) || (v1[6] == 5 && v1[8] == 0  ) )
  	{
     
	 if(v1[7] == 0 )
	 {
	 	crit(i ,  v1 , total , v2 ,  6 , 7 ) ;
	 	
        crit(i ,  v1 , total , v2 ,  3 , 6 ) ; 	
    	
     	crit(i ,  v1 , total , v2 ,  3 , 4 ) ; 	
    	
     	crit(i ,  v1 , total , v2 ,  4 , 7 ) ;  	
    	
      	crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
      	
		crit(i ,  v1 , total , v2 ,  8 , 5 ) ;
		 
	    crit(i ,  v1 , total , v2 ,  4 , 5 ) ; 
					    
		crit(i ,  v1 , total , v2 ,  3 , 4 ) ;  	
    	
    	crit(i ,  v1 , total , v2 ,  3 , 6 ) ;
		
		crit(i ,   v1 , total , v2 ,  6 , 7 ) ;  
    
    	crit(i ,   v1 , total , v2 ,  4 , 7 ) ; 
    	
    	crit(i ,   v1 , total , v2 ,  4 , 5 ) ; 	
	 	
	 	
	 }
	 
	 
	 else
	 if(v1[8] == 0 )
	 {
	 
	 crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
	 	
	 crit(i ,  v1 , total , v2 ,  6 , 7 ) ;
	 	
     crit(i ,  v1 , total , v2 ,  3 , 6 ) ; 	
    	
     	crit(i ,  v1 , total , v2 ,  3 , 4 ) ; 	
    	
     	crit(i ,  v1 , total , v2 ,  4 , 7 ) ;  	
    	
      	crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
      	
		crit(i ,  v1 , total , v2 ,  8 , 5 ) ;
		 
	    crit(i ,  v1 , total , v2 ,  4 , 5 ) ; 
					    
		crit(i ,  v1 , total , v2 ,  3 , 4 ) ;  	
    	
    	crit(i ,  v1 , total , v2 ,  3 , 6 ) ;
		
		crit(i ,   v1 , total , v2 ,  6 , 7 ) ;  
    
    	crit(i ,   v1 , total , v2 ,  4 , 7 ) ; 
    	
    	crit(i ,   v1 , total , v2 ,  4 , 5 ) ; 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
			 
			 
			 
	 }		
	  
	  
	  
    }
    
    
    
    
  	
  	else
  	{
  		
  	while(v1[4] != 5 )
  {
  	 
   	int  count  = 0  , z = 9 , x = 9  , c = 9 , v = 9 , check = 0  ,  j = 0  , n1 = 9  , n2 = 10 , n3 = 11  , n4 = 12 , k  , a = 0 , s = 3 , i  ;

     func( z , x , c, v ,i , k , v1 , 5 ) ;
   
   
   
     
    if(z != 9 )
	  {


	    for(j=0;j<2;j++)
		  {
		  if(v2[j] == z )
		  count++ ;


		  if(v2[j] == i )
		  count++ ;

		  }


		 if(count != 2)
		 {
		 	
		if(z != 0 )
		{
	 
	    if(z != 1 )
		{
		
		if( z != 2 )
		{
		 
		if(z != 3 )
		   {
		   
																		  														  	  
			  	  

		 if(v1[z] == 5 )
		 {

	  	iter_swap(v1.begin() + z , v1.begin() + i );
	  	check += 1 ;
	  	v2[0] = z ;
	  	v2[1] = i ;
	  	total++ ;

	     }

	  else
	  decide2( z , n1 , 9 , k ) ;
       
           }
	   
	    }
     
     
    }

		 }

   }

	   count = 0 ;

    }





if(x!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == x )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	    if(check == 0 )
		{
			
			if(count != 2)
		{
		
		if(x != 0 )		
		{
			
	    if(x != 1 )
		{
			
	    if( x != 2 )
		{
						
		if(x != 3 )
		{
										
			
				
         decide2(x,n2,10,k) ;
         
     }
         
    }
         
     }
         
	    }
	    
	    }
		 
		}

		count = 0 ;

	  }



	  if(c!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == c )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }




	    if(check == 0 )
		{
		  	
			
			if(count != 2)
			{

           if( c != 0 )
           {
		   
		   if( c != 1 )
		   {
		   
		   if(c != 2 )
		   {
		   

		   if(c != 3 )
		   {
		   	
		   
		      
		      
		      
  
			if(v1[c] == 5)
			{

			iter_swap(v1.begin() + c , v1.begin() + i);
			check += 1 ;
			v2[0] = c ;
			v2[1] = i ;
			total++ ;

		    }
		     
		    else
		    decide2(c,n3,11,k) ;
		    
		    
		}
		   
	       }
		    
		}
		 }
		 
		 }
   
    }


		count = 0 ;

	  }

	  if(v!=9)
	  {

		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == v )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	 if(check == 0 )
		
		{

			if(count != 2)
			{
				
			if( v != 0 )
			{
			
			if(v != 1 )
			{
		     
			 if( v != 2 )
			 {
			
			 if(v != 3)
			 {
									
					
				

			if(v1[v] == 5)
			{

			iter_swap(v1.begin() + v , v1.begin() + i);
			check +=  1 ;
			v2[0] = v ;
			v2[1] = i ;
			total++ ;
		    }
		    
		    else
		    decide2( v , n4 , 12 , k ) ;
		    
		    
		}
	}
		
		}
		    }
        
			}

     }

		 count = 0 ;

	        }



	   if( check == 0 )

	   {

	   if(n1<n2 && n1<n3 && n1<n4)
	   {

	   	iter_swap(v1.begin() + z , v1.begin() + i);
	   	v2[0] = z ;
	   	v2[1] = i ;
	   	total++ ;

	   }

	   else
	   if(n2<n1 && n2<n3 && n2<n4)
	   {

	   iter_swap(v1.begin() + x , v1.begin() + i );
	   	v2[0] = x ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if(n3 < n1 && n3 < n2 && n3 < n4)
	   {
	   iter_swap(v1.begin() + c , v1.begin() + i);
	   	v2[0] = c ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if( n4 < n1 && n4 < n2 && n4 < n3 )
	   {

	   	iter_swap(v1.begin() + v , v1.begin() + i);
	   	v2[0] = v ;
	   	v2[1] = i ;
	   	total++ ;
	   }
	   
	   
	   else
	   if( n1 == n2 && n2 == n3 )
	   {
	  
	   	
	   	
	   	
	   	
	   	
	   	decide1(z , x , c , n1 , n2 , n3  , 4 ,  v1 , v2 , 9 , 10 , 11 , i) ;
	   	total++ ;
	   	
	   	
	   }
	   
	   else
	   if( n1 == n2 && n2 == n4 )
	   {
	   	

	   
	   	decide1(z , c , v , n1 , n3 , n4 , 4 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    
	   	total++ ;
	   
	   	
	   }
	   
	   else
	   if( n1 == n3 && n3 == n4 )
	   {
	   	
	   
	   	
	   	
	   	
	   	
	   	decide1(z , c , v , n1 , n3 , n4 , 4 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    total++ ;
	   	
	   }
	   
	   else
	   if( n2 == n3 && n3 == n4 )
	   {
	   	
	   	decide1(x , c , v , n2 , n3 , n4 , 4 , v1 , v2 , 10 , 11 , 12 , i ) ;
	   	total++ ;
	   	
	   }
	   

	   else
	   if( n1 == n2 )
	   {

	   	decide(z , x , n1 , n2 , 4 ,  v1 , i , v2 , 9 , 10 , 'n' ) ;
	   	total++ ;
	   }

	   else
	   if(n1 == n3)
	   {
        
      

	   	decide(z , c , n1 , n3 , 4 , v1 , i , v2 , 9 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n1 == n4)
	   {
	   	
	  
	   	

	   	decide(z , v ,  n1 , n4 , 4 , v1 , i , v2 , 9 , 12 ,  'n' ) ;
	   	total++ ;



	   }

	   else
	   if(n2 == n3)
	   {
	   
	   	

	   	decide(x , c ,  n2 , n3 , 4 , v1 , i , v2 , 10 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n2 == n4)
	   {
	   	
	  
	   	decide(x , v ,  n2 , n4 , 4 , v1 , i , v2 , 10 , 12 ,  'n') ;
	   	total++ ;

	   }

	   else
	   if(n3  == n4)
	   {
	   	
			      	
	   	decide(c , v ,  n3 , n4 , 4 , v1 , i , v2 , 11 , 12 , 'y' ) ;
	   	total++ ;



	   }

}



   cout<<"\n\n";

   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }














  }
 	
  		
  		
  		
  		
  	
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  

	  	
	}
  	
    }
    
    if(v1[5] == 0 && v1[8] == 6 )
    {
    	crit(i ,  v1 , total , v2 ,  5 , 8 ) ;
	}
	
    
    
    
    if(v1[5] != 6 )
  	 {
	   
   if(v1[5] == 0 )
   {
   
    crit(i ,  v1 , total , v2 ,  5 , 8 ) ;
    crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
    crit(i ,  v1 , total , v2 ,  6 , 7 ) ;
   
   	
   } 
 
   else
   if(v1[7] == 0 )
   {
   	 crit(i ,  v1 , total , v2 ,  6 , 7 ) ;   	
   }
 
    crit(i ,  v1 , total , v2 ,  3 , 6 ) ;
    crit(i ,  v1 , total , v2 ,  4 , 3 ) ;
    
    }
    
    while( v1[5] != 6 )
  {
  	 
   	int  count  = 0  , z = 9 , x = 9  , c = 9 , v = 9 , check = 0  ,  j = 0  , n1 = 9  , n2 = 10 , n3 = 11  , n4 = 12 , k  , a = 0 , s = 3 , i  ;

     func( z , x , c, v ,i , k , v1 , 6 ) ;
   
   
   
     
    if(z != 9 )
	  {


	    for(j=0;j<2;j++)
		  {
		  if(v2[j] == z )
		  count++ ;


		  if(v2[j] == i )
		  count++ ;

		  }


		 if(count != 2)
		 {
		 	
		if(z != 0 )
		{
	 
	    if(z != 1 )
		{
		
		if( z != 2 )
		{
		 
		if(z != 3 )
		   {
		   
		 if(z != 6 )
		    {
		    	
		    	
			
																																		   																  														  	  
			  	  

		 if(v1[z] == 6 )
		 {

	  	iter_swap(v1.begin() + z , v1.begin() + i );
	  	check += 1 ;
	  	v2[0] = z ;
	  	v2[1] = i ;
	  	total++ ;

	     }

	  else
	  decide2( z , n1 , 9 , k ) ;
	  
          }
       
           }
	   
	    }
     
     
    }

		 }

   }

	   count = 0 ;

    }





if(x!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == x )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	    if(check == 0 )
		{
			
			if(count != 2)
		{
		
		if(x != 0 )		
		{
			
	    if(x != 1 )
		{
			
	    if( x != 2 )
		{
						
		if(x != 3 )
		{
		
		  if(x != 6 )
		  {
										  								
			
				
         decide2(x,n2,10,k) ;
            
        }
        
       }
         
    }
         
     }
         
	    }
	    
	    }
		 
		}

		count = 0 ;

	  }



	  if(c!=9)
	  {


		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == c )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }




	    if(check == 0 )
		{
		  	
			
			if(count != 2)
			{

           if( c != 0 )
           {
		   
		   if( c != 1 )
		   {
		   
		   if(c != 2 )
		   {
		   

		   if(c != 3 )
		   {
		   
		   if(c != 6 )
		   {
			   	
		   
		      
		      
		      
  
			if(v1[c] == 6)
			{

			iter_swap(v1.begin() + c , v1.begin() + i);
			check += 1 ;
			v2[0] = c ;
			v2[1] = i ;
			total++ ;

		    }
		     
		    else
		    decide2(c,n3,11,k) ;
		    
		}
		
		}
		   
	       }
		    
		}
		 }
		 
		 }
   
    }


		count = 0 ;

	  }

	  if(v!=9)
	  {

		  for(j=0;j<2;j++)
		  {
		  if(v2[j] == v )
		  count++ ;

		  if(v2[j] == i )
		  count++ ;

		  }



	 if(check == 0 )
		
		{

			if(count != 2)
			{
				
			if( v != 0 )
			{
			
			if(v != 1 )
			{
		     
			 if( v != 2 )
			 {
			
			 if(v != 3)
			 {
			
			
			 if(v != 6 )
			 {
									 							

			if(v1[v] == 6)
			{

			iter_swap(v1.begin() + v , v1.begin() + i);
			check +=  1 ;
			v2[0] = v ;
			v2[1] = i ;
			total++ ;
		    }
		    
		    else
		    decide2( v , n4 , 12 , k ) ;
		    
		}
		
		}
	}
		
		}
		    }
        
			}

     }

		 count = 0 ;

	        }



	   if( check == 0 )

	   {

	   if(n1<n2 && n1<n3 && n1<n4)
	   {

	   	iter_swap(v1.begin() + z , v1.begin() + i);
	   	v2[0] = z ;
	   	v2[1] = i ;
	   	total++ ;

	   }

	   else
	   if(n2<n1 && n2<n3 && n2<n4)
	   {

	   iter_swap(v1.begin() + x , v1.begin() + i );
	   	v2[0] = x ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if(n3 < n1 && n3 < n2 && n3 < n4)
	   {
	   iter_swap(v1.begin() + c , v1.begin() + i);
	   	v2[0] = c ;
	   	v2[1] = i ;
	   	total++ ;


	   }


	   else
	   if( n4 < n1 && n4 < n2 && n4 < n3 )
	   {

	   	iter_swap(v1.begin() + v , v1.begin() + i);
	   	v2[0] = v ;
	   	v2[1] = i ;
	   	total++ ;
	   }
	   
	   
	   else
	   if( n1 == n2 && n2 == n3 )
	   {
	  
	   	
	   	
	   	
	   	
	   	
	   	decide1(z , x , c , n1 , n2 , n3  , 5 ,  v1 , v2 , 9 , 10 , 11 , i) ;
	   	total++ ;
	   	
	   	
	   }
	   
	   else
	   if( n1 == n2 && n2 == n4 )
	   {
	   	

	   
	   	decide1(z , c , v , n1 , n3 , n4 , 5 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    
	   	total++ ;
	   
	   	
	   }
	   
	   else
	   if( n1 == n3 && n3 == n4 )
	   {
	   	
	   
	   	
	   	
	   	
	   	
	   	decide1(z , c , v , n1 , n3 , n4 , 5 , v1 , v2 , 9 , 11 , 12 , i ) ;
	    total++ ;
	   	
	   }
	   
	   else
	   if( n2 == n3 && n3 == n4 )
	   {
	   	
	   	decide1(x , c , v , n2 , n3 , n4 , 5 , v1 , v2 , 10 , 11 , 12 , i ) ;
	   	total++ ;
	   	
	   }
	   

	   else
	   if( n1 == n2 )
	   {

	   	decide(z , x , n1 , n2 , 5 ,  v1 , i , v2 , 9 , 10 , 'n' ) ;
	   	total++ ;
	   }

	   else
	   if(n1 == n3)
	   {
        
      

	   	decide(z , c , n1 , n3 , 5 , v1 , i , v2 , 9 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n1 == n4)
	   {
	   	
	  
	   	

	   	decide(z , v ,  n1 , n4 , 5 , v1 , i , v2 , 9 , 12 ,  'n' ) ;
	   	total++ ;



	   }

	   else
	   if(n2 == n3)
	   {
	   
	   	

	   	decide(x , c ,  n2 , n3 , 5 , v1 , i , v2 , 10 , 11 ,  'n' ) ;
	   	total++ ;

	   }

	   else
	   if(n2 == n4)
	   {
	   	
	  
	   	decide(x , v ,  n2 , n4 , 5 , v1 , i , v2 , 10 , 12 ,  'n') ;
	   	total++ ;

	   }

	   else
	   if(n3  == n4)
	   {
	   	
			      	
	   	decide(c , v ,  n3 , n4 , 5 , v1 , i , v2 , 11 , 12 , 'y' ) ;
	   	total++ ;



	   }

}



   cout<<"\n\n";

   for(i=0;i<9;i++)
   {
   	if(i == 3)
   	cout<<"\n" ;

   	if(i == 6)
   	cout<<"\n" ;

   	if(v1[i] == 0)
   	cout<<" " ;

   	else
   	cout<<v1[i];

   }














  }
  
  
  
  if(v1[3] != 4)
  {
  
  if(v1[4] != 5 )
  {
  
  
  if(v1[4] == 0 )
  {
  	
  crit(i ,  v1 , total , v2 ,  3 , 4 ) ;
  crit(i ,  v1 , total , v2 ,  3 , 6 ) ;
  	
  	
  }
  
  else
  if( v1[8] == 0)
  {
  	
  	crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
  	crit(i ,  v1 , total , v2 ,  4 , 7 ) ;
  	crit(i ,  v1 , total , v2 ,  3 , 4 ) ;
  	crit(i ,  v1 , total , v2 ,  3 , 6 ) ;
  	
     }   
  
     } 
     
     }
  	
  	
  	if(v1[6] == 0 )
	{
		    	
  	crit(i ,  v1 , total , v2 ,  6 , 7 ) ;		  
    crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
    
    }
    
    
    else
    if(v1[7] == 0 )	  
    crit(i ,  v1 , total , v2 ,  7 , 8 ) ;
    
		
   	
	
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
        
   
   
   
   
   
   
   
   
   
   
   
   
   
 
 
 
 
 
 
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   	
   	
  	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	


  








	   }

  






      cout<<"\n\n"<<" AND HERE ARE YOUR TOTAL MOVES "<<total ;

      cout<<"\n"<<v1[0] ;



      cout<<"\npress y to try again \n" ;
      cin>>ch ;

 }
 

 
}


