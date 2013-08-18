    /*--------------------------------------------------------------------
       file: config.cpp
       ================
       Author: nom <@email>  (ofpectag:)
       Remarks: 
    --------------------------------------------------------------------*/
    #define __filename config.cpp

    class CfgPatches {      //
       class arme {      //
          units[] = {""};      //
          weapons[] = {"arme"};      //
          versionDesc = "";      //
          requiredVersion = 1.6;      //
          requiredAddons = {"CA", "CA_E"}      //
       };
    };
    class CfgMagazine {      //
       class CA_Magazine;      //
       class MUN: CA_Magazine {      //
          scope = ;      //
          displayname = "";      //
          picture "";      //
          count = ;      //
          ammo = "";      //
          initSpeed = ;      //
          reloadMagazineSound[] = {"",,,};      //
          descriptionShort = "";      //
        };
    };
    class Mode_SemiAuto;      //
    class Mode_Burst;      //
    class Mode_FullAuto;      //
    class CfgWeapons {      //
       class Rifle      //
       class ARME: Rifle {      //
          scope = ;      //
          model = "";      //
          picture = "";      //
          UiPicture = "";      //
          modelOptics = "";      //
          opticsFlare = ;      //
          opticsDisablePeripherialVision = ;      //
          opticsZoomInit = ;      //
          opticsZoomMin = ;      //
          distanceZoomMin = ;      //
          opticsZoomMax = ;      //
          distanceZoomMax = ;      //
          dexterity = ;      //
          displayName = "";      //
          magazines[] = {""};      //
          reloadTime = ;      //
          backgroundReload = ;      //
          handAnim[] = {"",""};      //

          modes[] = {"Single", "FullAuto"};      //

          class Single: Mode_SemiAuto
                    {
           dispersion=;      //
           sound[]={"",1,1};      //
           reloadTime= ;      //
           recoil=assaultRifleBase;      //
           recoilProne = "assaultRifleBase";      //
           minRange = ;      //
           minRangeProbab = ;      //
           midRange = ;      //
           midRangeProbab = ;      //
           maxRange = ;      //
           maxRangeProbab = ;      //
           distanceZoomMin = ;      //
           distanceZoomMax = ;      //
       };

         class FullAuto: Mode_FullAuto      //
         {
           dispersion=;      //
           sound[]={"",1,1};      //
           reloadTime= ;      //
           recoil=assaultRifleBase;      //
           recoilProne = "assaultRifleBase";      //
           minRange = ;      //
           minRangeProbab = ;      //
           midRange = ;      //
           midRangeProbab = ;      //
           maxRange = ;      //
           maxRangeProbab = ;      //
           distanceZoomMin = ;      //
           distanceZoomMax = ;      //
       };
    };
    };
