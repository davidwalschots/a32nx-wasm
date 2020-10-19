#ifndef DATASTRINGS
#define DATASTRINGS

#include "data_enums.h"
#include <MSFS/Legacy/gauges.h>

/*pcstring_<type> holds string inputs required by simconnect function
Ensure that their indices match their corresponding enum definitions.*/

const PCSTRINGZ pcstring_units[enumUnitsCount] = {
    "Bool",
    "Percent",
    "Volts",
    "Hertz",
    "PSI",
    "Number",
    "Enum"
};

const PCSTRINGZ pcstring_aSimVars[aSimVarsCount] = {
    "(A:EXTERNAL POWER AVAILABLE, Bool)",
    "(A:EXTERNAL POWER ON, Bool)",
    "(A:FUELSYSTEM VALVE SWITCH:8, Bool)",
    "(A:APU PCT RPM, Percent)",
    "(A:ENG N2 RPM:1, Percent)",
    "(A:ENG N2 RPM:2, Percent)",
    "(A:ENG N1 RPM:1, Percent)",
    "(A:ENG N1 RPM:2, Percent)",
    "(A:APU SWITCH, Bool)",
    "(A:ELECTRICAL MASTER BATTERY:1 , Bool)",
    "(A:ELECTRICAL MASTER BATTERY:2 , Bool)",
    "(A:AMBIENT TEMPERATURE, celsius)",
    "(A:AMBIENT PRESSURE, inHg)",
    "(A:AIRSPEED TRUE, Knots)",
    "(A:AIRSPEED INDICATED, Knots)",
    "(A:GENERAL ENG MASTER ALTERNATOR:1, Bool)",
    "(A:GENERAL ENG MASTER ALTERNATOR:2, Bool)",
    "(A:BLEED AIR ENGINE:1, Bool)",
    "(A:BLEED AIR ENGINE:2, Bool)",
    "(A:BLEED AIR APU, Bool)",
    "(A:GENERAL ENG STARTER:1, Bool)",
    "(A:GENERAL ENG STARTER:2, Bool)",
    "(A:STRUCTURAL DEICE SWITCH, Bool)",
    "(A:ENG EXHAUST GAS TEMPERATURE:1, Rankine)",
    "(A:ENG EXHAUST GAS TEMPERATURE:2, Rankine)",
    "(A:SIM ON GROUND, Bool)",
    "(A:GROUND ALTITUDE, Meters)",
    "(A:PLANE ALTITUDE, Feet)",
    "(A:PLANE ALT ABOVE GROUND, Feet)",
    "(A:GENERAL ENG THROTTLE LEVER POSITION:1, Percent)",
    "(A:GENERAL ENG THROTTLE LEVER POSITION:2, Percent)",
    "(A:VERTICAL SPEED, Feet per second)",
    "(A:GEAR POSITION, enum)",
    "(A:INTERACTIVE POINT OPEN:0, percent)",
    "(A:INTERACTIVE POINT OPEN:3, percent)",
    "(A:INTERACTIVE POINT OPEN:5, percent)"
};

const PCSTRINGZ pcstring_lSimVars[totalLVarsCount] = {
    //===============================ELEC======================
        "BATT1_ONLINE",
        "BATT2_ONLINE",
        "BATT1_CAPACITY",
        "BATT2_CAPACITY",
        "BATT1_VOLTAGE",
        "BATT2_VOLTAGE",
        "BATT1_AMPERAGE",
        "BATT2_AMPERAGE",
        "BATT_BUS_LOAD",
        "EXT_GEN_ONLINE",
        "EXT_GEN_VOLTAGE",
        "EXT_GEN_AMPERAGE",
        "EXT_GEN_FREQ",
        "APU_GEN_ONLINE",
        "APU_GEN_VOLTAGE",
        "APU_GEN_AMPERAGE",
        "APU_GEN_FREQ",
        "APU_LOAD_PERCENT",
        "GEN1_ONLINE",
        "GEN2_ONLINE",
        "GEN1_VOLTAGE",
        "GEN2_VOLTAGE",
        "GEN1_AMPERAGE",
        "GEN2_AMPERAGE",
        "GEN1_FREQ",
        "GEN2_FREQ",
        "GEN1_IDG_TEMP",
        "GEN2_IDG_TEMP",
        "EMER_ONLINE",
        "EMER_VOLTAGE",
        "EMER_AMPERAGE",
        "EMER_FREQ",
        "AC_BUS1",
        "AC_BUS2",
        "AC_ESS",
        "AC_SHED",
        "GALLEY_SHED",
        "DC_BUS1",
        "DC_BUS2",
        "DC_BATBUS",
        "DC_ESS",
        "DC_SHED",
        "HOT_BUS1",
        "HOT_BUS2",
        "TR1_ONLINE",
        "TR2_ONLINE",
        "TRESS_ONLINE",
        "TR1_VOLTAGE",
        "TR2_VOLTAGE",
        "TRESS_VOLTAGE",
        "TR1_AMPERAGE",
        "TR2_AMPERAGE",
        "TRESS_AMPERAGE",
        "STATIC_INV",
        "STATIC_INV_VOLTAGE",
        "STATICINV_AMPERAGE",
        "STATIC_INV_FREQ",
        "ACPowerAvailable",
        "DCPowerAvailable",
        "CIRCUIT",
        "CIRCUIT_BREAKER",
        "A32NX_APU_START_ACTIVATED",
        "A32NX_ELEC_IDG1_FAULT",
        "A32NX_ELEC_IDG1_TOGGLE",
        "A32NX_ELEC_IDG2_FAULT",
        "A32NX_ELEC_IDG2_TOGGLE",
        "A32NX_ELEC_BUSTIE_TOGGLE",
        "A32NX_ELEC_ACESSFEED_FAULT",
        "A32NX_ELEC_ACESSFEED_TOGGLE",
        "A32NX_ELEC_COMMERCIAL_TOGGLE",
        "A32NX_ELEC_COMMERCIAL_FAULT",
        "A32NX_ELEC_GALYCAB_TOGGLE",
        "A32NX_ELEC_GALYCAB_FAULT",
        //===============================BLEED=========================
        "ENG1_IP_VALVE",
        "ENG2_IP_VALVE",
        "ENG1_HP_VALVE",
        "ENG2_HP_VALVE",
        "ENG1_BLEED_VALVE",
        "ENG2_BLEED_VALVE",
        "APU_BLEED_VALVE",
        "GPU_BLEED_VALVE",
        "ENG1_BLEED_STARTER_VALVE",
        "ENG2_BLEED_STARTER_VALVE",
        "WING_ANTICE_VALVE",
        "X_BLEED_VALVE",
        "ENG1_BLEED_PRESSURE",
        "ENG2_BLEED_PRESSURE",
        "ENG1_BLEED_TEMPERATURE",
        "ENG2_BLEED_TEMPERATURE",
        "APU_BLEED_PRESSURE",
        "APU_BLEED_TEMPERATURE",
        "GPU_BLEED_PRESSURE",
        "GPU_BLEED_TEMPERATURE",
        "DUCT1",
        "DUCT2",
        "DUCT1_TEMPERATURE",
        "DUCT2_TEMPERATURE",
        "DUCT1_PRESSURE",
        "DUCT2_PRESSURE",
        "A32NX_KNOB_OVHD_AIRCOND_XBLEED_Position",
        //==============================PACKS============================
        "PACK1_OUTLET_TEMP",
        "PACK2_OUTLET_TEMP",
        "PACK1_CMPRSO_TEMP",
        "PACK2_CMPRSO_TEMP",
        "CKPT_TEMP",
        "FWD_TEMP",
        "AFT_TEMP",
        "A320_Neo_AIRCOND_LVL_1",
        "A320_Neo_AIRCOND_LVL_2",
        "A320_Neo_AIRCOND_LVL_3",
        "A32NX_AIRCOND_HOTAIR_TOGGLE",
        "A32NX_AIRCOND_PACK1_TOGGLE",
        "A32NX_AIRCOND_PACK2_TOGGLE",
        "A32NX_KNOB_OVHD_AIRCOND_PACKFLOW_POSITION",
        //=============================ENGINES============================
        "APU_FLAP_OPEN",
        "APU_N1",
        "APU_EGT",
        "APU_EGT_WARN",
        //=============================PRESS==============================
        "OUTFLOW_VAVLE_PCT",
        "SAFETY_VAVLE_1",
        "SAFETY_VALVE_2",
        "CABIN_ALTITUDE",
        "CABIN_ALTITUDE_GOAL",
        "CABIN_ALTITUDE_RATE",
        "DELTA_PRESSURE",
        "LANDING_ELEV_MODE",
        "LANDING_ELEV",
        "CPC_SYS1",
        "CPC_SYS2",
        "A32NX_LANDING_ELEVATION",
        "XMLVAR_KNOB_OVHD_CABINPRESS_LDGELEV",
        "A32NX_CAB_PRESS_MODE_MAN",
        "A32NX_MAN_VS_CONTROL",
        "A32NX_DITCHING"
};

#endif // !DATASTRINGS
