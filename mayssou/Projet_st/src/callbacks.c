#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "stock.h"
#include "stock.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
produit o;
char tyy[20]="";
char tyy1[20]="";
int x1=0;int x2=0;
void
on_modifier_st_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *afiicher_st;
afiicher_st=lookup_widget(button,"afiicher_st");
gtk_widget_destroy(afiicher_st);
produit p;
FILE *f;
f=fopen("produit.txt","r");
GtkWidget *modifier_st;
  modifier_st = create_modifier_st ();
  gtk_widget_show (modifier_st);
GtkWidget *Mref_st;
Mref_st = lookup_widget (modifier_st ,"Mref_st");
GtkWidget *Mnom_st;
Mnom_st = lookup_widget (modifier_st ,"Mnom_st");
GtkWidget *combobox2_st;
combobox2_st = lookup_widget (modifier_st ,"combobox2_st");
GtkWidget *spinbutton11_st;
spinbutton11_st = lookup_widget (modifier_st ,"spinbutton11_st");
GtkWidget *spinbutton22_st;
spinbutton22_st = lookup_widget (modifier_st ,"spinbutton22_st");

while(fscanf(f,"%s %s %s %d %s %s %d\n",p.ref,p.nom,p.categ,&p.quant,p.type,p.date,&p.poid)!=-1){
 if (strcmp(p.ref,o.ref)==0){
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(modifier_st,"Mref_st")),p.ref);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(modifier_st,"Mnom_st")),p.nom);
                gtk_entry_set_text(GTK_ENTRY(lookup_widget(modifier_st,"combobox2_st")),p.categ);
                gtk_range_set_value(GTK_ENTRY(lookup_widget(modifier_st,"spinbutton11_st")),p.quant);
                gtk_range_set_value(GTK_ENTRY(lookup_widget(modifier_st,"spinbutton22_st")),p.poid);

}}
GtkWidget *erreur_nom2,*erreur_ref2,*erreur_conf2;

erreur_nom2=lookup_widget(modifier_st,"erreur_nom2");
erreur_ref2=lookup_widget(modifier_st,"erreur_ref2");
erreur_conf2=lookup_widget(modifier_st,"erreur_conf2");
 
gtk_widget_hide(erreur_nom2);  
gtk_widget_hide(erreur_ref2);  
gtk_widget_hide(erreur_conf2);
}


void
on_ajouter_st_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *afiicher_st;
afiicher_st=lookup_widget(button,"afiicher_st");
gtk_widget_destroy(afiicher_st);
GtkWidget *ajouter_st;
ajouter_st = create_ajouter_st ();
  gtk_widget_show (ajouter_st);


GtkWidget *erreur_nom1,*erreur_ref1,*erreur_categ1,*erreur_conf1;

erreur_nom1=lookup_widget(ajouter_st,"erreur_nom1");
erreur_ref1=lookup_widget(ajouter_st,"erreurref_1");
erreur_categ1=lookup_widget(ajouter_st,"erreur_categ1");
erreur_categ1=lookup_widget(ajouter_st,"erreur_conf1");

gtk_widget_hide(erreur_nom1);  
gtk_widget_hide(erreur_ref1);  
gtk_widget_hide(erreur_categ1);
gtk_widget_hide(erreur_conf1);



}


void
on_actualiser_st_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1_st;
GtkWidget *afiicher_st;
afiicher_st=lookup_widget(button,"afiicher_st");
treeview1_st=lookup_widget(afiicher_st,"treeview1_st");
afficher_st(treeview1_st);


}


void
on_chercher_st_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *cherch;
char ch[20];
GtkWidget *treeview1_st;
GtkWidget *afiicher_st;
afiicher_st=lookup_widget(button,"afiicher_st");

treeview1_st=lookup_widget(afiicher_st,"treeview1_st");
cherch = lookup_widget (button ,"entre_rechercher_st");
strcpy(ch, gtk_entry_get_text(GTK_ENTRY(cherch)));
 chercher_st(treeview1_st,ch);
}


void
on_ajouterpr_st_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *ref;
GtkWidget *nom;
GtkWidget *categ;
GtkWidget *quant;
GtkWidget *type;

GtkWidget *poid;
GtkWidget *ajouter_st;


produit p;
int aa,mm,jj;
char a[3];
char b[3];
char c[6];
char y[15]="";
int o=0;
ref = lookup_widget (button ,"entryref_st");
nom = lookup_widget (button ,"entrynom_st");
categ = lookup_widget (button ,"combobox1_categorie");
quant = lookup_widget (button ,"spinbutton1_qt_st");
type = lookup_widget (button ,"radiobutton1_fr");
poid = lookup_widget (button ,"spinbutton1_poid");


GtkWidget *erreur_nom1,*erreur_ref1,*erreur_categ1,*erreur_conf1;
ajouter_st=lookup_widget(button,"ajouter_st");
erreur_nom1=lookup_widget(ajouter_st,"erreur_nom1");
erreur_ref1=lookup_widget(ajouter_st,"erreurref_1");
erreur_categ1=lookup_widget(ajouter_st,"erreur_categ1");
erreur_conf1=lookup_widget(ajouter_st,"erreur_conf1");
gtk_widget_hide(erreur_nom1);  
gtk_widget_hide(erreur_ref1);  
gtk_widget_hide(erreur_categ1);

gtk_widget_hide(erreur_conf1);





GtkWidget *calendar;
calendar=lookup_widget(button,"calendar1_st");
gtk_calendar_get_date (GTK_CALENDAR(calendar),
                       &aa,
                       &mm,
                       &jj);
mm=mm+1;


p.quant=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(quant));
p.poid=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(poid));

strcpy(p.ref, gtk_entry_get_text(GTK_ENTRY(ref)));
strcpy(p.nom, gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(p.categ, gtk_combo_box_get_active_text(GTK_COMBO_BOX(categ)));


sprintf(a,"%d",jj);sprintf(b,"%d",mm);sprintf(c,"%d",aa);
strcat(y,a);strcat(y,"-");strcat(y,b);strcat(y,"-");strcat(y,c);

strcpy(p.date,y);
strcpy(p.type,tyy);

if (strcmp(p.ref,"")==0)
{o=1;
gtk_widget_show(erreur_ref1);
}
else o=0;
 if (strcmp(p.nom,"")==0)
{o=1;
gtk_widget_show(erreur_nom1);
}
else o=0;

 if (x1==0)
{
gtk_widget_show(erreur_conf1);
}


 if(o==0 && x1==1){
ajouter_produit(p);



gtk_widget_destroy(ajouter_st);
GtkWidget *afiicher_st;
afiicher_st = create_afiicher_st ();
  gtk_widget_show (afiicher_st);
x1=0;


}

}


void
on_anuulerajout_st_clicked             (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *ajouter_st;
ajouter_st=lookup_widget(button,"ajouter_st");
gtk_widget_destroy(ajouter_st);
GtkWidget *afiicher_st;
afiicher_st = create_afiicher_st ();
  gtk_widget_show (afiicher_st);
GtkWidget* resultat_st;

}


void
on_annulersupp_st_clicked              (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *supprimer_st;
supprimer_st=lookup_widget(button,"supprimer_st");
gtk_widget_destroy(supprimer_st);
GtkWidget *afiicher_st;
afiicher_st=lookup_widget(button,"afiicher_st");
  gtk_widget_show (afiicher_st);



}


void
on_confirmersupp_st_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
 supprimer_st(o.ref);
GtkWidget *supprimer_st;
supprimer_st=lookup_widget(button,"supprimer_st");
gtk_widget_destroy(supprimer_st);
GtkWidget *afiicher_st;

  gtk_widget_show (afiicher_st);

}


void
on_treeview1_st_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
                                    
{GtkTreeIter iter;
	gchar* ref;
	gchar* nom;
	gchar* categ;
	gchar* type;
	gchar* quant;
	gchar* date;
	gchar* poid;
	

	GtkTreeModel *model =gtk_tree_view_get_model(treeview);

	if (gtk_tree_model_get_iter(model, &iter , path))
	{ 
	  gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0 , &ref, 1, &nom,2,&categ,3,&type,4,&quant,5,&date,6,&poid,-1);
	strcpy(o.ref,ref);  
	
	}

}


void
on_supprimer_st_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *afiicher_st;
afiicher_st=lookup_widget(button,"afiicher_st");

GtkWidget *supprimer_st;
supprimer_st = create_supprimer_st ();
  gtk_widget_show (supprimer_st);
}


void
on_annulerM_st_clicked                 (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *modifier_st;
modifier_st=lookup_widget(button,"modifier_st");
gtk_widget_destroy(modifier_st);
GtkWidget *afiicher_st;
afiicher_st = create_afiicher_st ();
  gtk_widget_show (afiicher_st);


}


void
on_modifier1_st_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *ref;
GtkWidget *nom;
GtkWidget *categ;
GtkWidget *quant;
GtkWidget *type;

GtkWidget *poid;



produit p;
int aa,mm,jj;
char a[3];
char b[3];
char c[6];
char y[15]="";
int x=0;
GtkWidget *modifier_st;
modifier_st=lookup_widget(button,"modifier_st");
ref = lookup_widget (button ,"Mref_st");
nom = lookup_widget (button ,"Mnom_st");
categ = lookup_widget (button ,"combobox2_st");
quant = lookup_widget (button ,"spinbutton11_st");
type = lookup_widget (button ,"radiobutton11_st");
poid = lookup_widget (button ,"spinbutton22_st");

GtkWidget *erreur_nom2,*erreur_ref2,*erreur_conf2;

erreur_nom2=lookup_widget(modifier_st,"erreur_nom2");
erreur_ref2=lookup_widget(modifier_st,"erreur_ref2");
erreur_conf2=lookup_widget(modifier_st,"erreur_conf2");

 
gtk_widget_hide(erreur_nom2);  
gtk_widget_hide(erreur_ref2);  
gtk_widget_hide(erreur_conf2);

GtkWidget *calendar;
calendar=lookup_widget(button,"calendar1_dateM");
gtk_calendar_get_date (GTK_CALENDAR(calendar),
                       &aa,
                       &mm,
                       &jj);
mm=mm+1;


p.quant=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(quant));
p.poid=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(poid));

strcpy(p.ref, gtk_entry_get_text(GTK_ENTRY(ref)));
strcpy(p.nom, gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(p.categ, gtk_combo_box_get_active_text(GTK_COMBO_BOX(categ)));


sprintf(a,"%d",jj);sprintf(b,"%d",mm);sprintf(c,"%d",aa);
strcat(y,a);strcat(y,"-");strcat(y,b);strcat(y,"-");strcat(y,c);

strcpy(p.date,y);
strcpy(p.type,tyy1);
if (strcmp(p.ref,"")==0)
{x=1;
gtk_widget_show(erreur_ref2);
}else x=0;
 if (strcmp(p.nom,"")==0)
{x=1;
gtk_widget_show(erreur_nom2);
}else x=0;


 if (x2==0)
{
gtk_widget_show(erreur_conf2);
}

 if(x==0 && x2 ==1){
modifier_stt(o.ref,p);

gtk_widget_destroy(modifier_st);
GtkWidget *afiicher_st;
afiicher_st = create_afiicher_st ();
  gtk_widget_show (afiicher_st);
x2=0;
}}


void
on_radiobutton1_fr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
strcpy(tyy,"Ancien");
}


void
on_radiobutton2_nr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
strcpy(tyy,"Nouveau");
}


void
on_radiobutton11_st_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
strcpy(tyy1,"Ancien");
}


void
on_radiobutton22_st_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
strcpy(tyy1,"Nouveau");
}


void //confirmer l'ajout 
on_checkbutton1_st_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
x1=1;
}


void//confirmer la modification 
on_checkbutton11_st_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
x2=1;
}

