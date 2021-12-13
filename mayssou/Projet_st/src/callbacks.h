#include <gtk/gtk.h>


void
on_modifier_st_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_ajouter_st_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_actualiser_st_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_chercher_st_clicked                 (GtkButton       *button,
                                        gpointer         user_data);

void
on_ajouterpr_st_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_anuulerajout_st_clicked             (GtkWidget       *button,
                                        gpointer         user_data);

void
on_annulersupp_st_clicked              (GtkWidget       *button,
                                        gpointer         user_data);

void
on_confirmersupp_st_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview1_st_row_activated          (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_supprimer_st_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_annulerM_st_clicked                 (GtkWidget      *button,
                                        gpointer         user_data);

void
on_modifier1_st_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton1_fr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton2_nr_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton11_st_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton22_st_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton1_st_toggled             (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton11_st_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);
