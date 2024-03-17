#include<iostream>
#include<cctype>
#include<string>
using namespace std;   // usar siempre antes del  main y funciones 

/* PRIMER PARCIAL FUNDAMENTOS DE COMPUTACIÓN 18/03/2024  7 am aula P 102 G02

   PRIMER PARCIAL FUNDAMENTOS DE COMPUTACIÓN 18/03/2024  9 am aula P 305 G03 
*/

//fx() para leer un valor > otro RECIBIDO       // Revisar, probar y hacer lo necesario para 
											    // obtener lo solicitado.

int leemyo( int otvr, string msg ) 
{ 
	int vr; 
	vr = otvr;
	while (vr <= otvr )
	{
		cout << " el  valor de " << msg << " debe ser > a " << otvr << "--> ";  
		cin >> vr;
	}   
	return vr ;
}

//fx() para leer un valor < otro RECIBIDO       // Revisar, probar y hacer lo necesario para 
											    // obtener lo solicitado.
int leemno( int otvr, string msg )  
{
	int vr ; 
	vr = otvr -1;
	while (vr > otvr ) 
	{
		cout << " el  valor de " << msg << " debe ser < a " << otvr << "--> ";  
		cin >> vr;
	}   
	return vr ;
}

//fx() para leer un valor > otros 2 recibidos:vu ,vd   forma 1 while 
int Leer_Num_May_Que_Dos(int vu, int vd)      // Revisar, probar y hacer lo necesario para 
											  // obtener lo solicitado.
{
    int z ;
    cout << "Digite un valor mayor que " << vu << " y mayor que " << vd << ": ";
    cin >> z;
    while (z <= vu or z <= vd) {
        cout << "Digite un valor mayor que " << vu << " y mayor que " << vd << ": ";
        cin >> z;
    }
    return z;
}

//fx() para leer un valor > otros 2 recibidos:vu ,vd    forma 2  do while
int Leer_Num_May_Que_Dos_a(int vu, int vd) 
{
	int z;									// Revisar, probar y hacer lo necesario para 
											// obtener lo solicitado.
    do {
    	cout << "Digite un valor mayor que " << vu << " y mayor que " << vd << ": ";
		cin >> z;	
    	} while (z <= vu  or z <= vd) ; //&& and oprdor lógico "y"; || or  oprdor lógico "o";
	return z;
}

//fx() para leer un valor > otros 2 recibidos:vu ,vd   forma 3  ? mayor DOS y leemyo 
int Leer_Num_May_Que_Dos_b(int vu, int vd)  // Revisar, probar y hacer lo necesario para 
											// obtener lo solicitado.                
{
    int z ;
    int my ;
	my = max(vu, vd);
    z = leemyo(my, "ejemplo") ;   
    return z;
}

//fx() para leer 1 valor pertenezca rango de valores entre vu y vd ( inclusive )
int Leer_Entre_Ra(int vu, int vd)           // Revisar, probar y hacer lo necesario para 
											// obtener lo solicitado.
{
    int mn, my,vlr; 
	mn = min(vu, vd);   
    my = max(vu, vd);
    vlr = my +1 ;   // vlr = mn - 1
    while (vlr < mn  or  vlr > my) {
        cout << "Digite un valor que este entre " << mn << " y " << my << ": ";
        cin >> vlr;
    }
    return vlr;
}

//fx() para leer 1 valor pertenezca rango de valores entre vu y vd ( sin incluir vu y vd )
int Leer_Entre_Rc(int vu, int vd)           // Revisar, probar y hacer lo necesario para 
											// obtener lo solicitado. 
{
    int mn, my,vlr; 
	mn = min(vu, vd);   
    my = max(vu, vd);
    do{
        cout << "Digite un valor que este entre " << mn << " y " << my << ": ";
        cin >> vlr;
    }while (vlr <= mn  or  vlr >= my) ;
    
    return vlr;
}

//fx() que lea un valor que no pertenezca a un rango recibido:  do while 
int Leer_Fuera_Rc(int vu, int vd) {         // Revisar, probar y hacer lo necesario para 
    int fr, mn, my;						   //  obtener lo solicitado.
    mn = min(vu, vd);   
    my = max(vu, vd);
	do {
		cout << "Digite un valor que NO este entre " << mn << " y " << my << ": ";
		cin>> fr;
    	} while (fr >= mn and fr <= my) ;
	return fr;   
}

//fx() para aumentar en -inc- el < entre pv y sv, lo necesario para superar al >
int Aumentar_Inc(int pv, int sv, int inc)  {  // Revisar, probar y hacer lo necesario para 
										  	 //  obtener lo solicitado. 		
	int mn, my ;
    string avt ;
	avt = "digitar valor incremento (debe ser > 0): "; 
	while ( inc <= 0 ) { 
		cout<< avt;
		cin >> inc;
					}
    mn = min(pv, sv);
    my = max(pv, sv);  // si no exitiera max -->  if (mn == pv ){ my = sv } , 
    	       	                               // else {   mn = sv ;
											  //	       my = pv ; } 	
    while (mn <= my)   
	{
        mn += inc;
    }   
	return mn;
}

// fx() para incrementar en: el menor de tres valores recibidos al menor de los otros dos
//   las veces que sean necesarias para superar al mayor. 
                                               // Revisar, probar y hacer lo necesario para 
										       // obtener lo solicitado.        " FORMA 1 "
int mnt_inmnod1(int vu, int vd, int vt){                   
	int mnt, mnod, myod, rs; 
	mnt = min(min(vu,vd),vt);
	myod = max(max(vu,vd),vt);
	if (mnt == vu )	{ 
		    mnod = min(vd,vt);
		   	}
	else if (mnt = vd ){
			mnod = min (vu,vt);
			}
         else mnod = min(vu,vd) ;
    rs = Aumentar_Inc( mnod,myod,mnt) ;
    return rs;    
}
int rotac(int &a, int &b );       //   definir prototipo de una función que se implementará mas adelante

// fx() para incrementar en: el menor de tres valores recibidos al menor de los otros dos
// las veces que sean necesarias para superar al mayor.

                                               // Revisar, probar y hacer lo necesario para 
										       // obtener lo solicitado.          " FORMA 2 "
int mnt_inmnod2(int vu, int vd, int vt){         // hacer esta FUNCIÓN  sin utilizar "min" ni "max" , solo if    
	int mnt, pvod, svod,rs;   
	if (vu < vd and vu < vt ) { mnt = vu;
								pvod = vd ;
								svod = vt;  }
	else if ( vd < vt) { mnt = vd;
						 pvod = vu;
						 svod = vt; }
		 else { mnt = vt;
		        pvod = vu;
		        svod = vd; }
	if (pvod > svod ){ rotac (pvod , svod);
					   	} 
	
	rs = Aumentar_Inc(pvod,svod,mnt) ;
    return rs;    			
		}                        // hecha la FUNCIÓN  sin utilizar "min" ni "max" , solo if

//fx() leer cantidad de registros a procesar y confirmarla con el usuario 
												// Revisar, probar y hacer lo necesario para 
										        // obtener lo solicitado.
int leecr_cfus() {                             //  forma 1
    char rpu;
    bool pgr;
    int cr;
    do  { 
        cout << "Digitar cantidad de registros a procesar: ";
        cin >> cr;
        cout << "Procesara " << cr << " registros, correcto S/N ? --> ";
        do{
        	cin >> rpu;
		    rpu = toupper(rpu);  
			pgr = rpu != 'S' and rpu != 'N' ; 
			if ( pgr == true ) 
                      	cout << "Respuesta Invalida, debe ser S o N -->";
		} while (pgr == true);
    }while (rpu != 'S');
    
    return cr;
}

int leecr_cfus1() {                            //   forma  2 
    char rpu;
    bool pgr;
    int cr;
    do  { 
        cout << "Digitar cantidad de registros a procesar: ";
        cin >> cr;
        cout << "Procesara " << cr << " registros, correcto S/N ? --> ";
        pgr = true;
        while (pgr == true) {
        	cin >> rpu;
		    rpu = toupper(rpu);  
			pgr = rpu != 'S' and rpu != 'N' ; 
			if ( pgr == true ) 
                      	cout << "Respuesta Invalida, debe ser S o N -->" ;
		    } 
    }while (rpu != 'S');
    
    return cr;
}

// f(x)  para determinar si un año es bisiesto ó no lo es. Revisar, probar y hacer lo 
											    // necesario para determinar bisiesto ó no.
bool abis(int A){
    bool rstb = false;   
	if ((A % 4 == 0 && A %100  != 0 ) or A % 400 ==  0) {        
					   										rstb =  true ;}				   
	return rstb ;
} 

// f(x)  para determinar número de días  de un año. Revisar, probar y hacer lo 
											    // necesario para determinar DÍAS del MES.
int dias_mes(int ms, int ao){
	int dm, rpb ;
	switch(ms){
		case 2 : 
				 if (abis(ao) == true ) dm = 29;
				 else  dm = 28;
				 break;
		case 11:
		case 4 :
		case 6 : 
		case 9 : dm = 30;
				 break;
		default: dm = 31;
    }
return dm ;	
}

// f(x)  para leer una fecha (día mes año rango de años).  Revisar, probar y hacer lo necesario para 
											    		   // leer una fecha válida.
int leefec(int &af, int &mf, int &df, int lina, int lsua ){	                 // lina : limite inferior del año
																			 // lsua : limite superior del año
	af = Leer_Entre_Ra(lina, lsua);         // 
	mf = Leer_Entre_Ra(1,12);			
	df = Leer_Entre_Ra(1,dias_mes(af,mf));
	return 0 ;
}

// f(x) determina NRO días trascurridos de un año. Revisar, probar y hacer lo necesario para 
											    // obtener lo solicitado.
											    
int dtra(int fd,int fm, int fa) {                     // <-  definición de la función y variables para "Valores" que recibe. 
    int dtan, msa;			                          // <-  valores para realizar lo solicitado. dtan : días transcurridos
						                              // <-  msa: mes a derminar su nro de días 		
    for ( msa = 1 ; msa < fm ; msa++) {               // CICLO para tomar desde mes 1 hasta el mes anterior al RECIBIDO   
    	        dtan = dtan + dias_mes(msa, fa);      // acumula los días de cada mes completo
										}
	dtan = dtan + fd ;                                // suma al acumulado obtenido en el CICLO los días del mes dado.
	return dtan;	                                  // entrega a quien uso la función ( Programa o Función ) el resultado
}             

// f(x) determina NRO días faltan para fin de año. Revisar, probar y hacer lo necesario para 
											    // obtener lo solicitado.
int dfala(int fd,int fm,int fa) {                      // forma 1 
					bool  tpa ;	
					int dfal;
					tpa = abis(fa) ;
					if ( tpa == true ) { dfal = 366 - dtra(fd,fm,fa) ;}
					else dfal = 365 - dtra(fd,fm,fa) ;
					return dfal;
		}

// f(x) determina NRO días faltan para fin de año. Revisar, probar y hacer lo necesario para 
					 						    // obtener lo solicitado.
int dfala1(int fd,int fm,int fa) {
	int msf, dfalta ;
	for ( msf = fm; msf < 13; msf ++) {
		        dfalta = dfalta + dias_mes(msf,fa);}
	dfalta = dfalta - fd; 
	return dfalta;  
					    	    }   

// f(x) intercambia 2 valores entre si. Revisar, probar y hacer lo necesario para 
					 					// obtener lo solicitado.
int rotac(int &a, int &b ){
	int vt;
	vt = a;
	a = b;
	b = vt ; 
}
/*
int rotac(int &a, int &b){
	int s;
	s = a + b ;
	a = s - a ;
	b = s - b ;
}
*/

/* 
int rotac(int &a, int &b) {

HACER esta función de intercambiar DOS valores sin  utilizar NINGUNA otra variable ni llamar a otra Función 

*/


// f(x) reciba DOS fechas y devuelva en la primera la menor y de segunda la mayor. Revisar, probar y hacer lo necesario para 
					 					                                          // obtener lo solicitado.
int ordfec(int &df1, int &mf1, int &af1, int &df2, int &mf2, int &af2){
	if (af1 > af2){ 	
					rotac(af1,af2);
					rotac(mf1,mf2);
					rotac(df1,df2);
				}
	else if (af1 == af2) {
					if (mf1 > mf2  or (mf1 == mf2 and df1 > df2)) {
										rotac(af1,af2);
										rotac(mf1,mf2);
										rotac(df1,df2);	
										}			
					}		
	}

/*
int ordfec(int &df1, int &mf1, int &af1, int &df2, int &mf2, int &af2){

HACER su función de ordenar DOS fechas utilizando un SOLO if y maximo TRES rotaciones 

}
 
*/
	
// f(x) reciba 3 valores y los devuelva ordenados ascendentemente. Revisar, probar y hacer lo necesario para 
					 						                       // obtener lo solicitado.    Forma 1 
int ordenASC(int du, int dd, int dt){  
	int pv,sv,tv;
	if (du <= dd ){
				if (dd <= dt) { pv = du;
							    sv = dd;
							    tv = dt;}
				else if (dt <= du ){ pv = dt;
									 sv = du;
									 tv = dd; }
					 else {	pv = du;
					 		sv = dt;
							tv = dd;  }
				}
	else { if (du <= dt ) { pv = dd;
						    sv = du;
						    tv = dt;}
		   else if (dt <= dd )	{ pv = dt;
		   						  sv = dd;
								  tv = du;}
				else{ pv = dd ;
				      sv = dt ;
					  tv = du ;   }	  	 
		   }
	
	
	
}						 

// f(x) reciba 3 valores y los devuelva ordenados ascendentemente. Revisar, probar y hacer lo necesario para 
					 						                       // obtener lo solicitado.    Forma 2
int ordenASC1(int du, int dd, int dt){                       
	int pv,sv,tv;
	if (du <= dd ){
				if (du <= dt) { pv = du;                                                                                    
							    sv = min(dd,dt);
							    tv = max(dd,dt);}
				else {  pv = dt;
						sv = du; 
						tv = dd ;}
			}
	else if (dd <= dt )	{ pv = dd ;
						  sv = min(du,dt);
						  tv = max(dt,du);}
 		else { pv = dt;
 		 		sv = dd;
 		 		tv = du;}
	
}							                       
										
// PRIMER PARCIAL FUNDAMENTOS DE COMPUTACIÓN 18/03/2024  7 am aula P 102 G02

// PRIMER PARCIAL FUNDAMENTOS DE COMPUTACIÓN 18/03/2024  9 am aula P 305 G03



