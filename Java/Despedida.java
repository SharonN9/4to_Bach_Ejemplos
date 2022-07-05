public class Despedida {
    String nombre = "";
    Despedida(String nombre){
        this.nombre = nombre;
    }
    
    public String decirAdios(){
        return "Adios " + nombre;
    }
}
