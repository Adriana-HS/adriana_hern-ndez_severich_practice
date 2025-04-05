using namespace std;
#include <iostream>
int main() {
    //La primera variable para el bucle, las otras 2 para las muertes en base a 2 opciones y las últimas 2 para los otros 2 posibles finales 
    int answer, muerte1, muerte2, final3, final4;
    int question = 1;
    cout << "Te encontrabas en el metro revisando tu teléfono después de un largo día de trabajo. Observaste a tu alrededor, estabas en frente de tu compañera de trabajo, a tu lado había un niño y al otro una señora mayor más allá había algunos estudiantes cuando vibra algo en tu pantalón, era una notificación. Era de tu autor favorito que como agradecimiento a tu fidelidad te envío su nueva novela. Antes de que pudieras procesarlo el metro se detuvo abruptamente dando paso a un ser flotante el cual cambiaría la vida de todos en el lugar.\n Presione 1 para continuar..." << endl;  
        cin.get();
        cin.ignore();
    while (question <= 10){
        if (question = 1){
            do{
                cout << "El ser (presentador) les muestra a cada uno una ventana emergente enfrente suyo:\n\"Demuestra tu valor:\nMata a uno o más seres vivos\"\nObservas con terror la decisión instantánea de algunos en el vagón. ¿Qué harás?\n1) Tu moral vale más. No matas a nadie.\n2) Quieres vivir. Te acercas a la anciana y...\n3) Vas donde el niño y..." << endl;
                cin >> answer;
                if(answer == 1){
                    question = 12; 
                }
                else if (answer == 2){
                    question++;
                }
                else if (answer == 3){
                    question++;
                    final3 = 1;
                }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        if (question == 2){
            do{
            cout << "Sobrevives al desafío junto a tu compañera de trabajo, el niño ya sin sus insectos dado que fueron clave de supervivencia para la mayoría de ahí, un policía y otros 4 más, entre ellos un joven que acabó con la vida de varios en el vagón. El joven se te acerca y te hace una propuesta ya que le agrado tu actuar: \"Unete a mi y conseguirás más que la supervivencia.\"\n1) No te unes, mantienes tu lealtad con tus compañeros de equipo. Conservas algo de moralidad.\n2) El mundo ya está acabado, será un gran aliado.\n3) Decides que es mejor estar solo." << endl;
            cin >> answer;
            if(answer == 1){
               question ++;
               final3++;
               final4 = 1;
            }
            else if (answer == 2){
                question++;
            }
            else if (answer == 3){
                question++;
                muerte1 = 1;
                muerte2 = 1;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        else if (question == 3){
            do{
            cout << "Con ayuda de los demás sobrevivientes abres las puertas del metro. Sales y se muestra enfrente de cada uno otra vez una ventana emergente indicando las monedas obtenidas. Con estas monedas puedes mejorar tus habilidades físicas o atributos. También muestran las constelaciones (espectadores del universo) que están interesados en ayudarte. Decides mejorar tus habilidades y no aceptar alguna constelación por el momento. Escuchas un gruñido que te hace levantar la cabeza, ves al ser (presentador) está levantando a los muertos, dándoles vida según para hacer las cosas más interesantes.\n1) Decides atacar con tus habilidades mejoradas.\n2) No te arriesgas a tu muerte, huyes.\n3) Huir es en vano, piensas en algo lo más pronto posible" << endl;
            cin >> answer;
            if(answer == 1 && muerte1 == 1){
               question = 12; 
            }
            if (answer == 1){
                question++;
            }
            if (answer == 2){
                question = 12;
            }
            else if (answer == 3){
                question++;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        else if (question == 4){
            do{
            cout << "Sobrevives a los muertos vivientes. Estás asombrado de tu nueva fuerza hasta que ves a un hombre acercándose acabando con los muertos vivientes con su espada sin esfuerzo. No te da tiempo de reaccionar hasta que te tiene del cuello. Intentas zafarte y no puedes, te acercas al puente con la amenaza de dejarte caer donde las bestias marinas. ¿Qué harás?\n1) Que importa su espada o su \"fuerza\", solo estabas nervioso, tú eres más fuerte. Lo atacas.\n2) Intentas convencerlo de que puedes serle útil mediante tu elocuencia.\n3) Lo retas a que puedes sobrevivir si eres lanzado y si ganas él tendrá que ser tú compañero." << endl;
            cin >> answer;
            if(answer == 1){
               question = 12; 
            }
            else if (answer == 2){
                question = 12;
            }
            else if (answer == 3){
                question++;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        else if (question == 5){
            do{
            cout << "Le agrada tu audacia y acepta tu reto. Sin aviso te lanza, caes y eres tragado por una bestia marina donde terminas en su estómago. A las constelaciones le agrada tu actitud confiada así que te ofrecen regalarte objetos para tú supervivencia. \n1) Una espada con una poción que te recupera tu fuerza.\n2) Una cuchilla con una potente poción podadora.\n3) Un potente ácido que corroe todo a su paso." << endl;
            cin >> answer;
            if(answer == 1){
               question++; 
            }
            else if (answer == 2){
                question++;
            }
            else if (answer == 3){
                question = 12;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        else if (question == 6){
            do{
            cout << "Acabas con la bestia después de un largo rato y llegas a la superficie, nadas hasta llegar a la costa de la ciudad. Estas tan exhausto que no te mueves aunque el presentador se te aparezca de repente, pero este no aparece con las manos vacías, te trae una recompensa por acabar una bestia de nivel alto para las estadísticas actuales.¿Qué eliges? \n1) Una espada capaz de atravesar el objeto más duro.\n2) Reparar tu teléfono para contactar otros posibles sobrevivientes.\n3) Un atributo al azar." << endl;
            cin >> answer;
            if(answer == 1){
               question++; 
            }
            else if (answer == 2){
                question++;
                final4++;
            }
            else if (answer == 3){
                question++;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        else if (question == 7){
            do{
            cout << "Caminas hasta el supermercado más cercano con sigilo comienzas a llevarte toda la comida posible hasta que te topas con una mujer tirada en estado miribundo, decides ayudarla y ella te indica donde está el refugio. La cargas junto a todo lo que recolectaste y te diriges velozmente hacia allí. Te dejan pasar sin vacilar por la comida que traes. El líder del lugar aparece, te ve y te sonríe mientras se dirige a la multitud de refugiados con voz potente: \"Gracias a este hombre de aquí volveremos a tener comida, todos un aplauso, por tu esfuerzo podrás recibir ración doble, claro, mientras aceptes compartir la comida.\" Todos los ojos están sobre ti. \n1) Compartes la comida y cedes ante la presión.\n2) No compartes, pero le das la posibilidad de que puedan comprarla por monedas. No eres ingenuo.\n3) Dices que no y te enfrentas a él líder." << endl;
            cin >> answer;
            if(answer == 1){
               question++; 
            }
            else if (answer == 2){
                question++;
                final3++;
            }
            else if (answer == 3 && muerte2 == 1){
                question = 12;
            }
            else if (answer == 3){
                question++;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        if (question == 8){
            do{
            cout << "Al final te quedas sin comida en menos de un día. Estás agotado, decides dormir. En la mañana, te sobresaltas por la voz del ser (presentador) quien se dirige a todos los del refugio \"¿Creen que con un poco de alimento lograrán sobrevivir escondiéndose como ratas? Pues bien, tendrán un castigo.\" El ser mediante un chasquido desaparece toda la comida y se muestra la ventana emergente:\n \"Cuota diaria para sobrevivir: 100 monedas\"\n Sabes que será complicado estar aquí sin el riesgo de ser herido por las monedas, pero salir es muy arriesgado. ¿Qué haces?\n1) Es mejor quedarte en aquel lugar que conoces.\n2) Decides ir a buscar mejores opciones de refugio y recompensas.\n3) Meditas sobre cuál sería la mejor opción, no hay tanto apuro." << endl;
            cin >> answer;
            if(answer == 1){
            }
            else if (answer == 2){
                question++;
            }
            else if (answer == 3){
                question++;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        if (question == 9){
            do{
            cout << "Decides salir con tu grupo y sigues explorando la ruta del metro hasta llegar a una zona la cual parece estar gobernada por un arrendador quien ofrece zonas seguras contras las bestias qué aparecen en la noche a un precio de 500 monedas por día. Tu grupo decide que seguirán qué decidas. ¿Qué eliges?\n1) Atacas al arrendador después de todo eres muy fuerte.\n2) Dices que eres amigo del \"hombre más fuerte\", así que es mejor llegar a un acuerdo.\n 3) Aceptar su condición y pagar junto a tu grupo." << endl;
            cin >> answer;
            if(answer == 1){
               question++; 
            }
            else if (answer == 2){
                question++;
            }
            else if (answer == 3){
                question++;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
        if (question == 10 && final4 == 2){
            do{
            cout << "Descansas en el nuevo refugio y al fin decides prender tu preciado teléfono. Esté inmediatamente se abre en una novela donde el protagonista es el \" hombre más fuerte\" y al instante ves todo lo ocurrió y ocurrirá en la novela en cuestión de segundos. Lo que sabes cambiará el curso de la historia.\n1) Contarle a tu grupo todo lo que sabes.\n2) Guardarlo como un secreto.\n3)Usar tu habilidad y decir que eres un profeta cuando lo requiera." << endl;
            cin >> answer;
            if(answer == 1){
               question++; 
            }
            else if (answer == 2){
                question++;
            }
            else if (answer == 3){
                question++;
            }
            } while (answer != 1 and answer != 2 and answer != 3);
        }
    }
//Final 1- Estás muerto
if(question == 12){
    cout <<"Tu estas muerto. La acción que tomaste tuvo consecuencias fatales para ti. Este es un nuevo mundo, por lo tanto el pensamiento convencional no es el más recomendado." << endl;
}
// Final 4 - La verdad
else if (final4 == 2){
    cout << "Felicidades! Eres increíble, no solo sobreviviste en contra de todo sino que también describiste como terminará esta catástrofe. Tienes muy buenas estadísticas/habilidades y un atributo único en su tipo \"El profeta\". Junto al grupo que formaste enfrentarás los problemas e incluso revierte el final. Sigue así y sobrevivirás hasta el final." << endl;
}
// Final 3 - Plus
else if (final3 == 2 or final3 == 3){
    cout << "Felicidades! Logras sobrevivir con muy buenas mejoras a tus estadísticas/habilidades con el grupo que formaste. Claro, eso no te garantiza tu supervivencia, pero tienes una muy alta probabilidad de sí hacerlo. Estás por encima del promedio de los sobrevivientes." << endl;
}
//Final 2 - Normal
else{
cout << "Felicidades! Logras sobrevivir junto a ese grupo espontáneo. Tus estadísticas/habilidades son promedio, por suerte no debajo de este. Seguirás luchando cada vez más por tu supervivencia, cambia tu pensamiento, no es el mismo mundo que conocías." << endl;
}   
    return 0;
}

