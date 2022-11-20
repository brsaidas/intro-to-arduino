int controle = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  do {
  
    Serial.println("1 - INSERIR");
    Serial.println("2 - DELETAR");
    Serial.println("3 - BUSCA");
    Serial.println("4 - EDITAR");
    
    while (Serial.available() == 0);
    
    char c = Serial.read();

    switch (c) {
    	case '1':
      		Serial.println("Inserido com sucesso");
      		break;
      	case '2':
      		Serial.println("Deletado com sucesso");
      		break;
      	case '3':
      		Serial.println("Buscado com sucesso");
      		break;
      	case '4':
      		Serial.println("Editado com sucesso");
      		break;
      	default:
      		Serial.println("Entra invalida!");
      		break;
    }
    
  } while (true);
  
}