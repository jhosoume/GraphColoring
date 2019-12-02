#include "Graph.hpp"

int main(void) {
  // Sets to true if want graph with the name of the classes
  std::cout << "Ciência da Computaçao" << std::endl;
  if (true) {
      // Creates a Digraph of mandatory UnB CiC Classes
      LinkedGraph<std::string> cic_curriculum = LinkedGraph<std::string>();

      // Adding Vertices
      cic_curriculum.insertVertex("Calculo1", 6, 1);
      cic_curriculum.insertVertex("ISC", 4, 1);
      cic_curriculum.insertVertex("APC", 6, 1);
      cic_curriculum.insertVertex("InfoSoc", 2, 1);
      cic_curriculum.insertVertex("FTC", 4, 2);
      cic_curriculum.insertVertex("CircuitosLogicos", 4, 2);
      cic_curriculum.insertVertex("LabdeCircuitosLogicos", 2, 2);
      cic_curriculum.insertVertex("Calculo2", 6, 2);
      cic_curriculum.insertVertex("IAL", 4, 2);
      cic_curriculum.insertVertex("ED", 4, 2);
      cic_curriculum.insertVertex("OAC", 4, 3);
      cic_curriculum.insertVertex("TP1", 4, 3);
      cic_curriculum.insertVertex("Algebra1", 4, 3);
      cic_curriculum.insertVertex("CN", 4, 3);
      cic_curriculum.insertVertex("PE", 4, 3);
      cic_curriculum.insertVertex("LC1", 4, 4);
      cic_curriculum.insertVertex("TP2", 4, 4);
      cic_curriculum.insertVertex("TAGrafos", 4, 4);
      cic_curriculum.insertVertex("Redes", 4, 4);
      cic_curriculum.insertVertex("LP", 4, 5);
      cic_curriculum.insertVertex("Concorrente", 4, 5);
      cic_curriculum.insertVertex("ES", 4, 5);
      cic_curriculum.insertVertex("BD", 4, 5);
      cic_curriculum.insertVertex("IIA", 4, 5);
      cic_curriculum.insertVertex("SB", 4, 6);
      cic_curriculum.insertVertex("SO", 6, 6);
      cic_curriculum.insertVertex("Automatos", 4, 6);
      cic_curriculum.insertVertex("SI", 4, 6);
      cic_curriculum.insertVertex("CE", 4, 6);
      cic_curriculum.insertVertex("PAA", 4, 7);
      cic_curriculum.insertVertex("Compiladores", 4, 7);
      cic_curriculum.insertVertex("Seguranca", 4, 7);
      cic_curriculum.insertVertex("MetCien", 4, 8);
      cic_curriculum.insertVertex("TCC1", 2, 8);
      cic_curriculum.insertVertex("TCC2", 4, 9);
      cic_curriculum.insertVertex("TopicosEmComp", 4, 9);
      std::cout << "The CIC Curriculum Graph has " << cic_curriculum.num_vertices() << " Vertices\n";

      // Adding Edges (Not Directed Unweightned)

      // First Semester
      cic_curriculum.insertNondirectedConnection("APC", "Calculo1", 1);
      cic_curriculum.insertNondirectedConnection("APC", "ISC", 1);
      cic_curriculum.insertNondirectedConnection("APC", "InfoSoc", 1);
      cic_curriculum.insertNondirectedConnection("Calculo1", "ISC", 1);
      cic_curriculum.insertNondirectedConnection("Calculo1", "InfoSoc", 1);
      cic_curriculum.insertNondirectedConnection("ISC", "InfoSoc", 1);

      // Second Semester
      cic_curriculum.insertNondirectedConnection("FTC", "CircuitosLogicos", 1);
      cic_curriculum.insertNondirectedConnection("FTC", "LabdeCircuitosLogicos", 1);
      cic_curriculum.insertNondirectedConnection("FTC", "Calculo2", 1);
      cic_curriculum.insertNondirectedConnection("FTC", "IAL", 1);
      cic_curriculum.insertNondirectedConnection("FTC", "ED", 1);
      cic_curriculum.insertNondirectedConnection("CircuitosLogicos", "LabdeCircuitosLogicos", 1);
      cic_curriculum.insertNondirectedConnection("CircuitosLogicos", "Calculo2", 1);
      cic_curriculum.insertNondirectedConnection("CircuitosLogicos", "IAL", 1);
      cic_curriculum.insertNondirectedConnection("CircuitosLogicos", "ED", 1);
      cic_curriculum.insertNondirectedConnection("LabdeCircuitosLogicos", "Calculo2", 1);
      cic_curriculum.insertNondirectedConnection("LabdeCircuitosLogicos", "IAL", 1);
      cic_curriculum.insertNondirectedConnection("LabdeCircuitosLogicos", "ED", 1);
      cic_curriculum.insertNondirectedConnection("Calculo2", "IAL", 1);
      cic_curriculum.insertNondirectedConnection("Calculo2", "ED", 1);
      cic_curriculum.insertNondirectedConnection("IAL", "ED", 1);

      // Third Semester
      cic_curriculum.insertNondirectedConnection("OAC", "TP1", 1);
      cic_curriculum.insertNondirectedConnection("OAC", "Algebra1", 1);
      cic_curriculum.insertNondirectedConnection("OAC", "CN", 1);
      cic_curriculum.insertNondirectedConnection("OAC", "PE", 1);
      cic_curriculum.insertNondirectedConnection("TP1", "Algebra1", 1);
      cic_curriculum.insertNondirectedConnection("TP1", "CN", 1);
      cic_curriculum.insertNondirectedConnection("TP1", "PE", 1);
      cic_curriculum.insertNondirectedConnection("Algebra1", "CN", 1);
      cic_curriculum.insertNondirectedConnection("Algebra1", "PE", 1);
      cic_curriculum.insertNondirectedConnection("CN", "PE", 1);

      // Forth Semester
      cic_curriculum.insertNondirectedConnection("LC1", "TP2", 1);
      cic_curriculum.insertNondirectedConnection("LC1", "TAGrafos", 1);
      cic_curriculum.insertNondirectedConnection("LC1", "Redes", 1);
      cic_curriculum.insertNondirectedConnection("TP2", "TAGrafos", 1);
      cic_curriculum.insertNondirectedConnection("TP2", "Redes", 1);
      cic_curriculum.insertNondirectedConnection("TAGrafos", "Redes", 1);

      // Fifth Semester
      cic_curriculum.insertNondirectedConnection("LP", "Concorrente", 1);
      cic_curriculum.insertNondirectedConnection("LP", "ES", 1);
      cic_curriculum.insertNondirectedConnection("LP", "BD", 1);
      cic_curriculum.insertNondirectedConnection("LP", "IIA", 1);
      cic_curriculum.insertNondirectedConnection("Concorrente", "ES", 1);
      cic_curriculum.insertNondirectedConnection("Concorrente", "BD", 1);
      cic_curriculum.insertNondirectedConnection("Concorrente", "IIA", 1);
      cic_curriculum.insertNondirectedConnection("ES", "BD", 1);
      cic_curriculum.insertNondirectedConnection("ES", "IIA", 1);
      cic_curriculum.insertNondirectedConnection("BD", "IIA", 1);

      // Sixth Semester
      cic_curriculum.insertNondirectedConnection("SB", "SO", 1);
      cic_curriculum.insertNondirectedConnection("SB", "Automatos", 1);
      cic_curriculum.insertNondirectedConnection("SB", "SI", 1);
      cic_curriculum.insertNondirectedConnection("SB", "CE", 1);
      cic_curriculum.insertNondirectedConnection("SO", "Automatos", 1);
      cic_curriculum.insertNondirectedConnection("SO", "SI", 1);
      cic_curriculum.insertNondirectedConnection("SO", "CE", 1);
      cic_curriculum.insertNondirectedConnection("Automatos", "SI", 1);
      cic_curriculum.insertNondirectedConnection("Automatos", "CE", 1);
      cic_curriculum.insertNondirectedConnection("SI", "CE", 1);

      // Seventh Semester
      cic_curriculum.insertNondirectedConnection("PAA", "Compiladores", 1);
      cic_curriculum.insertNondirectedConnection("PAA", "Seguranca", 1);
      cic_curriculum.insertNondirectedConnection("Compiladores", "Seguranca", 1);

      // Eigth Semester
      cic_curriculum.insertNondirectedConnection("MetCien", "TCC1", 1);

      // Ninth Semester
      cic_curriculum.insertNondirectedConnection("TopicosEmComp", "TCC2", 1);

      std::cout << "The CIC Curriculum Graph has " << cic_curriculum.num_edges() << " Edges\n";
      cic_curriculum.print();
      cic_curriculum.writeUnDirGraphAsDot("CIC_Curriculum", "cic_curriculum.dot");
      cic_curriculum.greedColoring();
      cic_curriculum.writeColoredGraphAsDot("Colored_Curriculum", "colored_curriculum.dot");
      cic_curriculum.printTimetable();

  }


  // Sets to true if want graph with the classes codes
  if (false) {
      // Creates a Digraph of mandatory UnB CiC Classes
      LinkedGraph<std::string> cic_curriculum = LinkedGraph<std::string>();

      // Adding Vertices
      cic_curriculum.insertVertex("113034", 6);
      cic_curriculum.insertVertex("113468", 4);
      cic_curriculum.insertVertex("113476", 6);
      cic_curriculum.insertVertex("113476", 2);
      cic_curriculum.insertVertex("113450", 4);
      cic_curriculum.insertVertex("129011", 4);
      cic_curriculum.insertVertex("129020", 2);
      cic_curriculum.insertVertex("113042", 6);
      cic_curriculum.insertVertex("113093", 4);
      cic_curriculum.insertVertex("116319", 4);
      cic_curriculum.insertVertex("116394", 4);
      cic_curriculum.insertVertex("117889", 4);
      cic_curriculum.insertVertex("113107", 4);
      cic_curriculum.insertVertex("113417", 4);
      cic_curriculum.insertVertex("115045", 4);
      cic_curriculum.insertVertex("117366", 4);
      cic_curriculum.insertVertex("117897", 4);
      cic_curriculum.insertVertex("117901", 4);
      cic_curriculum.insertVertex("116572", 4);
      cic_curriculum.insertVertex("116343", 4);
      cic_curriculum.insertVertex("117935", 4);
      cic_curriculum.insertVertex("116441", 4);
      cic_curriculum.insertVertex("116378", 4);
      cic_curriculum.insertVertex("116653", 4);
      cic_curriculum.insertVertex("116432", 4);
      cic_curriculum.insertVertex("117960", 4);
      cic_curriculum.insertVertex("116882", 6);
      cic_curriculum.insertVertex("116416", 4);
      cic_curriculum.insertVertex("117943", 4);
      cic_curriculum.insertVertex("117536", 4);
      cic_curriculum.insertVertex("117951", 4);
      cic_curriculum.insertVertex("117927", 4);
      cic_curriculum.insertVertex("117919", 2);
      std::cout << "The CIC Curriculum Graph has " << cic_curriculum.num_vertices() << " Vertices\n";

      // Adding Edges (Directed weightned)
      cic_curriculum.insertConnection("113476", "129011", 6);
      cic_curriculum.insertConnection("113476", "129020", 6);
      cic_curriculum.insertConnection("113476", "116319", 6);
      cic_curriculum.insertConnection("113034", "113042", 6);
      cic_curriculum.insertConnection("129011", "116394", 4);
      cic_curriculum.insertConnection("129020", "116394", 2);
      cic_curriculum.insertConnection("116319", "117889", 4);
      cic_curriculum.insertConnection("113042", "113417", 6);
      cic_curriculum.insertConnection("113034", "115045", 6);
      cic_curriculum.insertConnection("113450", "117366", 4);
      cic_curriculum.insertConnection("117889", "117897", 4);
      cic_curriculum.insertConnection("116319", "117901", 4);
      cic_curriculum.insertConnection("116319", "116572", 4);
      cic_curriculum.insertConnection("116319", "116343", 4);
      cic_curriculum.insertConnection("116394", "117935", 4);
      cic_curriculum.insertConnection("117897", "117935", 4);
      cic_curriculum.insertConnection("116343", "116441", 4);
      cic_curriculum.insertConnection("116319", "116653", 4);
      cic_curriculum.insertConnection("116394", "116432", 4);
      cic_curriculum.insertConnection("116319", "116432", 4);
      cic_curriculum.insertConnection("117935", "117960", 4);
      cic_curriculum.insertConnection("113107", "116882", 4);
      cic_curriculum.insertConnection("116319", "116416", 4);
      cic_curriculum.insertConnection("115045", "117943", 4);
      cic_curriculum.insertConnection("116319", "117943", 4);
      cic_curriculum.insertConnection("113034", "117536", 6);
      cic_curriculum.insertConnection("116319", "117536", 4);
      cic_curriculum.insertConnection("116343", "117951", 4);
      cic_curriculum.insertConnection("116432", "117951", 4);
      cic_curriculum.insertConnection("116882", "117951", 6);
      cic_curriculum.insertConnection("116572", "117927", 4);

      std::cout << "The CIC Curriculum Graph has " << cic_curriculum.num_edges() << " Edges\n";
      cic_curriculum.print();
      cic_curriculum.printTopologicalOrder("CIC_TopologicalOrder_Codes", "CIC_TopologicalOrder_codes.dot");
      cic_curriculum.writeDigraphAsDot("CIC_Curriculum_Codes", "all_cic_curriculum_codes.dot");
      cic_curriculum.CriticalPath(5);
  }

    return 0;
}
