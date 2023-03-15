import java.awt.*; 
import java.awt.event.*;

public class Demo extends WindowAdapter {
    Frame f=new Frame();
    public Demo(String name){
          f= new Frame(name);
          f.setSize(400,400);
          f.setLayout(new FlowLayout());
          f.setVisible(true);
          f.addWindowListener(this);

    }
    public void WindowClosed(WindowEvent e){
        f.dispose();
    }
    public static void main(String[] args) {
        new Demo("name");
    }
}
