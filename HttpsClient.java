import java.net.MalformedURLException;
import java.net.URL;
import java.security.cert.Certificate;
import java.io.*;

import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLPeerUnverifiedException;

public class HttpsClient{
	
   public static void main(String[] args)
   {
        new HttpsClient().testIt();
   }
	
   private void testIt(){

      String https_url = "https://v6.exchangerate-api.com/v6/b82e5027d3d25db2aef4fcc9/latest/AUD";
      URL url;
      try {

	     url = new URL(https_url);
	     HttpsURLConnection con = (HttpsURLConnection)url.openConnection();
        System.out.println(con);
         
        
	     //dumpl all cert info
	   //   print_https_cert(con);
			
	   //   //dump all the content
	   print_content(con);
			
      } catch (MalformedURLException e) {
	     e.printStackTrace();
      } catch (IOException e) {
	     e.printStackTrace();
      }

   }

   private void print_content(HttpsURLConnection con){
      if(con!=null){
            
      try {
         
         System.out.println("****** Content of the URL ********");			
         BufferedReader br = 
         new BufferedReader(
            new InputStreamReader(con.getInputStream()));
               
         String input;
               
         while ((input = br.readLine()) != null){
            System.out.println(input);
         }
         br.close();
               
      } catch (IOException e) {
         e.printStackTrace();
      }
            
          }
         
      }

   }