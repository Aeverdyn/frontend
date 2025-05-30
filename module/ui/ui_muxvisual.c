#include "ui_muxvisual.h"

lv_obj_t *ui_pnlBattery_visual;
lv_obj_t *ui_pnlClock_visual;
lv_obj_t *ui_pnlNetwork_visual;
lv_obj_t *ui_pnlName_visual;
lv_obj_t *ui_pnlDash_visual;
lv_obj_t *ui_pnlFriendlyFolder_visual;
lv_obj_t *ui_pnlTheTitleFormat_visual;
lv_obj_t *ui_pnlTitleIncludeRootDrive_visual;
lv_obj_t *ui_pnlFolderItemCount_visual;
lv_obj_t *ui_pnlDisplayEmptyFolder_visual;
lv_obj_t *ui_pnlMenuCounterFolder_visual;
lv_obj_t *ui_pnlMenuCounterFile_visual;
lv_obj_t *ui_pnlHidden_visual;
lv_obj_t *ui_pnlOverlayImage_visual;
lv_obj_t *ui_pnlOverlayTransparency_visual;

lv_obj_t *ui_lblBattery_visual;
lv_obj_t *ui_lblClock_visual;
lv_obj_t *ui_lblNetwork_visual;
lv_obj_t *ui_lblName_visual;
lv_obj_t *ui_lblDash_visual;
lv_obj_t *ui_lblFriendlyFolder_visual;
lv_obj_t *ui_lblTheTitleFormat_visual;
lv_obj_t *ui_lblTitleIncludeRootDrive_visual;
lv_obj_t *ui_lblFolderItemCount_visual;
lv_obj_t *ui_lblDisplayEmptyFolder_visual;
lv_obj_t *ui_lblMenuCounterFolder_visual;
lv_obj_t *ui_lblMenuCounterFile_visual;
lv_obj_t *ui_lblHidden_visual;
lv_obj_t *ui_lblOverlayImage_visual;
lv_obj_t *ui_lblOverlayTransparency_visual;

lv_obj_t *ui_icoBattery_visual;
lv_obj_t *ui_icoClock_visual;
lv_obj_t *ui_icoNetwork_visual;
lv_obj_t *ui_icoName_visual;
lv_obj_t *ui_icoDash_visual;
lv_obj_t *ui_icoFriendlyFolder_visual;
lv_obj_t *ui_icoTheTitleFormat_visual;
lv_obj_t *ui_icoTitleIncludeRootDrive_visual;
lv_obj_t *ui_icoFolderItemCount_visual;
lv_obj_t *ui_icoDisplayEmptyFolder_visual;
lv_obj_t *ui_icoMenuCounterFolder_visual;
lv_obj_t *ui_icoMenuCounterFile_visual;
lv_obj_t *ui_icoHidden_visual;
lv_obj_t *ui_icoOverlayImage_visual;
lv_obj_t *ui_icoOverlayTransparency_visual;

lv_obj_t *ui_droBattery_visual_visual;
lv_obj_t *ui_droClock_visual;
lv_obj_t *ui_droNetwork_visual_visual;
lv_obj_t *ui_droName_visual;
lv_obj_t *ui_droDash_visual;
lv_obj_t *ui_droFriendlyFolder_visual;
lv_obj_t *ui_droTheTitleFormat_visual;
lv_obj_t *ui_droTitleIncludeRootDrive_visual;
lv_obj_t *ui_droFolderItemCount_visual;
lv_obj_t *ui_droDisplayEmptyFolder_visual;
lv_obj_t *ui_droMenuCounterFolder_visual;
lv_obj_t *ui_droMenuCounterFile_visual;
lv_obj_t *ui_droHidden_visual;
lv_obj_t *ui_droOverlayImage_visual;
lv_obj_t *ui_droOverlayTransparency_visual;

void init_muxvisual(lv_obj_t *ui_pnlContent) {
    ui_pnlBattery_visual = lv_obj_create(ui_pnlContent);
    ui_pnlClock_visual = lv_obj_create(ui_pnlContent);
    ui_pnlNetwork_visual = lv_obj_create(ui_pnlContent);
    ui_pnlDash_visual = lv_obj_create(ui_pnlContent);
    ui_pnlName_visual = lv_obj_create(ui_pnlContent);
    ui_pnlDisplayEmptyFolder_visual = lv_obj_create(ui_pnlContent);
    ui_pnlTheTitleFormat_visual = lv_obj_create(ui_pnlContent);
    ui_pnlFolderItemCount_visual = lv_obj_create(ui_pnlContent);
    ui_pnlFriendlyFolder_visual = lv_obj_create(ui_pnlContent);
    ui_pnlMenuCounterFile_visual = lv_obj_create(ui_pnlContent);
    ui_pnlMenuCounterFolder_visual = lv_obj_create(ui_pnlContent);
    ui_pnlOverlayImage_visual = lv_obj_create(ui_pnlContent);
    ui_pnlOverlayTransparency_visual = lv_obj_create(ui_pnlContent);
    ui_pnlHidden_visual = lv_obj_create(ui_pnlContent);
    ui_pnlTitleIncludeRootDrive_visual = lv_obj_create(ui_pnlContent);

    ui_lblBattery_visual = lv_label_create(ui_pnlBattery_visual);
    lv_label_set_text(ui_lblBattery_visual, "");
    ui_lblNetwork_visual = lv_label_create(ui_pnlNetwork_visual);
    lv_label_set_text(ui_lblNetwork_visual, "");
    ui_lblClock_visual = lv_label_create(ui_pnlClock_visual);
    lv_label_set_text(ui_lblClock_visual, "");
    ui_lblName_visual = lv_label_create(ui_pnlName_visual);
    lv_label_set_text(ui_lblName_visual, "");
    ui_lblDash_visual = lv_label_create(ui_pnlDash_visual);
    lv_label_set_text(ui_lblDash_visual, "");
    ui_lblFriendlyFolder_visual = lv_label_create(ui_pnlFriendlyFolder_visual);
    lv_label_set_text(ui_lblFriendlyFolder_visual, "");
    ui_lblTheTitleFormat_visual = lv_label_create(ui_pnlTheTitleFormat_visual);
    lv_label_set_text(ui_lblTheTitleFormat_visual, "");
    ui_lblTitleIncludeRootDrive_visual = lv_label_create(ui_pnlTitleIncludeRootDrive_visual);
    lv_label_set_text(ui_lblTitleIncludeRootDrive_visual, "");
    ui_lblFolderItemCount_visual = lv_label_create(ui_pnlFolderItemCount_visual);
    lv_label_set_text(ui_lblFolderItemCount_visual, "");
    ui_lblDisplayEmptyFolder_visual = lv_label_create(ui_pnlDisplayEmptyFolder_visual);
    lv_label_set_text(ui_lblDisplayEmptyFolder_visual, "");
    ui_lblMenuCounterFolder_visual = lv_label_create(ui_pnlMenuCounterFolder_visual);
    lv_label_set_text(ui_lblMenuCounterFolder_visual, "");
    ui_lblMenuCounterFile_visual = lv_label_create(ui_pnlMenuCounterFile_visual);
    lv_label_set_text(ui_lblMenuCounterFile_visual, "");
    ui_lblHidden_visual = lv_label_create(ui_pnlHidden_visual);
    lv_label_set_text(ui_lblHidden_visual, "");
    ui_lblOverlayImage_visual = lv_label_create(ui_pnlOverlayImage_visual);
    lv_label_set_text(ui_lblOverlayImage_visual, "");
    ui_lblOverlayTransparency_visual = lv_label_create(ui_pnlOverlayTransparency_visual);
    lv_label_set_text(ui_lblOverlayTransparency_visual, "");

    ui_icoBattery_visual = lv_img_create(ui_pnlBattery_visual);
    ui_icoNetwork_visual = lv_img_create(ui_pnlNetwork_visual);
    ui_icoClock_visual = lv_img_create(ui_pnlClock_visual);
    ui_icoName_visual = lv_img_create(ui_pnlName_visual);
    ui_icoDash_visual = lv_img_create(ui_pnlDash_visual);
    ui_icoFriendlyFolder_visual = lv_img_create(ui_pnlFriendlyFolder_visual);
    ui_icoTheTitleFormat_visual = lv_img_create(ui_pnlTheTitleFormat_visual);
    ui_icoTitleIncludeRootDrive_visual = lv_img_create(ui_pnlTitleIncludeRootDrive_visual);
    ui_icoFolderItemCount_visual = lv_img_create(ui_pnlFolderItemCount_visual);
    ui_icoDisplayEmptyFolder_visual = lv_img_create(ui_pnlDisplayEmptyFolder_visual);
    ui_icoMenuCounterFolder_visual = lv_img_create(ui_pnlMenuCounterFolder_visual);
    ui_icoMenuCounterFile_visual = lv_img_create(ui_pnlMenuCounterFile_visual);
    ui_icoHidden_visual = lv_img_create(ui_pnlHidden_visual);
    ui_icoOverlayImage_visual = lv_img_create(ui_pnlOverlayImage_visual);
    ui_icoOverlayTransparency_visual = lv_img_create(ui_pnlOverlayTransparency_visual);

    ui_droBattery_visual_visual = lv_dropdown_create(ui_pnlBattery_visual);
    lv_dropdown_clear_options(ui_droBattery_visual_visual);
    lv_obj_set_style_text_opa(ui_droBattery_visual_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droNetwork_visual_visual = lv_dropdown_create(ui_pnlNetwork_visual);
    lv_dropdown_clear_options(ui_droNetwork_visual_visual);
    lv_obj_set_style_text_opa(ui_droNetwork_visual_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droClock_visual = lv_dropdown_create(ui_pnlClock_visual);
    lv_dropdown_clear_options(ui_droClock_visual);
    lv_obj_set_style_text_opa(ui_droClock_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droName_visual = lv_dropdown_create(ui_pnlName_visual);
    lv_dropdown_clear_options(ui_droName_visual);
    lv_obj_set_style_text_opa(ui_droName_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droDash_visual = lv_dropdown_create(ui_pnlDash_visual);
    lv_dropdown_clear_options(ui_droDash_visual);
    lv_obj_set_style_text_opa(ui_droDash_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droFriendlyFolder_visual = lv_dropdown_create(ui_pnlFriendlyFolder_visual);
    lv_dropdown_clear_options(ui_droFriendlyFolder_visual);
    lv_obj_set_style_text_opa(ui_droFriendlyFolder_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droTheTitleFormat_visual = lv_dropdown_create(ui_pnlTheTitleFormat_visual);
    lv_dropdown_clear_options(ui_droTheTitleFormat_visual);
    lv_obj_set_style_text_opa(ui_droTheTitleFormat_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droTitleIncludeRootDrive_visual = lv_dropdown_create(ui_pnlTitleIncludeRootDrive_visual);
    lv_dropdown_clear_options(ui_droTitleIncludeRootDrive_visual);
    lv_obj_set_style_text_opa(ui_droTitleIncludeRootDrive_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droFolderItemCount_visual = lv_dropdown_create(ui_pnlFolderItemCount_visual);
    lv_dropdown_clear_options(ui_droFolderItemCount_visual);
    lv_obj_set_style_text_opa(ui_droFolderItemCount_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droDisplayEmptyFolder_visual = lv_dropdown_create(ui_pnlDisplayEmptyFolder_visual);
    lv_dropdown_clear_options(ui_droDisplayEmptyFolder_visual);
    lv_obj_set_style_text_opa(ui_droDisplayEmptyFolder_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droMenuCounterFolder_visual = lv_dropdown_create(ui_pnlMenuCounterFolder_visual);
    lv_dropdown_clear_options(ui_droMenuCounterFolder_visual);
    lv_obj_set_style_text_opa(ui_droMenuCounterFolder_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droMenuCounterFile_visual = lv_dropdown_create(ui_pnlMenuCounterFile_visual);
    lv_dropdown_clear_options(ui_droMenuCounterFile_visual);
    lv_obj_set_style_text_opa(ui_droMenuCounterFile_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droHidden_visual = lv_dropdown_create(ui_pnlHidden_visual);
    lv_dropdown_clear_options(ui_droHidden_visual);
    lv_obj_set_style_text_opa(ui_droHidden_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droOverlayImage_visual = lv_dropdown_create(ui_pnlOverlayImage_visual);
    lv_dropdown_clear_options(ui_droOverlayImage_visual);
    lv_obj_set_style_text_opa(ui_droOverlayImage_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    ui_droOverlayTransparency_visual = lv_dropdown_create(ui_pnlOverlayTransparency_visual);
    lv_dropdown_clear_options(ui_droOverlayTransparency_visual);
    lv_obj_set_style_text_opa(ui_droOverlayTransparency_visual, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
}
