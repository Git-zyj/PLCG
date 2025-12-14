/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82655
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((/* implicit */unsigned int) (unsigned char)6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            arr_11 [i_0] [i_0] [i_2] [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)255)) : (419305660)));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14300)) ? (9070277294695428161LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12015)))));
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (2417722103U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 312304367U)) ? (((/* implicit */int) (short)11697)) : (((/* implicit */int) (signed char)12))));
                        }
                        for (int i_5 = 4; i_5 < 9; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 1749296457U);
                            arr_20 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) 7344534982331133355ULL);
                            arr_21 [i_5] [i_1] [i_1] [(unsigned char)5] [(unsigned char)5] = ((/* implicit */unsigned short) 5731204899398833587LL);
                            arr_22 [i_2] = ((/* implicit */unsigned char) (signed char)18);
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_26 [i_0] [i_0] [(unsigned short)9] [i_6] = ((/* implicit */long long int) (unsigned char)134);
                            arr_27 [i_0] [8U] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9168191572551396898ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
                            arr_28 [(short)3] [(short)3] [(short)3] [i_3] [(short)3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 312304367U)) ? (-533938019836772751LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219)))))) ? (((/* implicit */long long int) 403702828)) : (((((/* implicit */_Bool) (unsigned short)53521)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (1984943282112518183LL)))));
                            arr_29 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7183575851230773540LL)) ? (7183575851230773551LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))))) : (((((/* implicit */_Bool) (unsigned char)240)) ? (4239863262036421401ULL) : (((/* implicit */unsigned long long int) 312304367U))))));
                            arr_30 [i_3] [i_1] [i_2] [i_3] [i_6] [i_1] [i_1] = ((/* implicit */short) (unsigned char)58);
                        }
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            arr_33 [i_7] [i_7] [i_2] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (1648632537409124057ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) : (((((/* implicit */_Bool) 1648632537409124060ULL)) ? (((/* implicit */long long int) 3724711948U)) : (-533938019836772744LL)))));
                            arr_34 [i_7] [i_3] [6U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16798111536300427554ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) (unsigned char)31)) ? (14206880811673130214ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)197)) ? (7183575851230773571LL) : (-7008653488498676177LL))))))));
                        }
                        arr_35 [i_0] [i_0] [i_1] [i_2] [(short)5] = 3724711933U;
                    }
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_1] [i_2] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1285239438404275075LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) : (312304366U)))) : (7183575851230773525LL)));
                                arr_42 [i_0] [i_0] [8ULL] [9LL] [8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) ? (-533938019836772751LL) : (((((/* implicit */_Bool) 14206880811673130218ULL)) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (-533938019836772751LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)66))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49436)))))));
                                arr_43 [i_0] [i_0] [i_0] [(signed char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14206880811673130214ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)114))) : (6U)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        arr_46 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned char)172))))) ? (((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */unsigned long long int) -7374266863646387964LL)) : (7056342753618216208ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4163404875U)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (signed char)6)))))));
                        /* LoopSeq 4 */
                        for (signed char i_11 = 2; i_11 < 9; i_11 += 3) 
                        {
                            arr_49 [i_0] [i_0] [i_2] [i_2] [i_10] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned short)4531)) : (((/* implicit */int) (short)28212))))) ? (-6804082758978576432LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53521)) ? (((/* implicit */int) (short)28191)) : (((/* implicit */int) (unsigned char)154)))))));
                            arr_50 [i_11 + 1] [i_10] [i_2] [i_1] [i_10] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65088)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1780801388238010001ULL)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (unsigned char)98))))) ? (((((/* implicit */_Bool) 817825064U)) ? (1543143596) : (((/* implicit */int) (unsigned char)142)))) : (((/* implicit */int) (unsigned char)63))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15LL)) ? (((/* implicit */long long int) 2730292517U)) : (-7183575851230773526LL)))) ? (4352742068988620695ULL) : (((((/* implicit */_Bool) 4352742068988620695ULL)) ? (((/* implicit */unsigned long long int) 2730292529U)) : (4352742068988620677ULL)))))));
                            arr_51 [i_1] [i_1] [i_1] [i_10] [i_11 - 1] = ((/* implicit */short) (unsigned char)83);
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            arr_55 [i_0] [i_10] [(short)9] [i_10] [(short)9] = ((/* implicit */unsigned long long int) (signed char)50);
                            arr_56 [i_0] [i_1] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)142)) ? (((((/* implicit */_Bool) 9425113518973453093ULL)) ? (14094002004720930924ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7183575851230773526LL)) ? (((/* implicit */int) (short)23552)) : (((/* implicit */int) (signed char)53))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7183575851230773517LL)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned short)296))))) ? (((((/* implicit */_Bool) (unsigned short)56223)) ? (((/* implicit */int) (short)-28422)) : (((/* implicit */int) (unsigned short)296)))) : (((/* implicit */int) (unsigned char)78)))))));
                            arr_57 [i_10] [i_1] [i_2] [4] [i_12] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3419)) ? (((/* implicit */int) (unsigned short)315)) : (((/* implicit */int) (unsigned short)65222))))) : (((((/* implicit */_Bool) 2730292516U)) ? (8142673751369111960LL) : (-8142673751369111960LL)))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 9; i_13 += 4) 
                        {
                            arr_61 [i_0] [i_10] |= ((/* implicit */unsigned char) (unsigned short)65258);
                            arr_62 [i_10] [i_10] [i_10] [i_10] [i_1] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (short)22447)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) : (1530160841043240231ULL)))))) ? (((((/* implicit */_Bool) -4058791912547926030LL)) ? (1530160841043240231ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1642698152)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) : (4058791912547926029LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17669)) ? (-2106633248) : (((/* implicit */int) (unsigned char)216)))))));
                            arr_63 [i_0] [i_10] = ((/* implicit */unsigned int) (unsigned char)87);
                            arr_64 [i_0] [0ULL] [(unsigned short)4] [i_1] [i_0] [(unsigned short)4] [i_1] = ((/* implicit */unsigned short) (short)-28436);
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            arr_67 [i_0] [i_0] [i_0] [i_0] [i_14] [i_14] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14494326717993039551ULL)) ? (196204986) : (((/* implicit */int) (unsigned short)65239))));
                            arr_68 [i_0] [(signed char)2] [i_0] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65234)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27838))) : (8005799156988936806LL)));
                        }
                        arr_69 [i_1] [i_1] [i_2] [i_10] &= ((/* implicit */short) (unsigned short)303);
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            arr_72 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)313)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) -1327480870772928701LL)) ? (13744798290318293736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65233)))))));
                            arr_73 [i_2] [i_0] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)313)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) : (14494326717993039551ULL)))) ? (((/* implicit */int) (unsigned short)65222)) : (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (unsigned short)297)) : (-196204979))));
                        }
                        arr_74 [i_0] [i_10] [i_10] [(signed char)5] = ((/* implicit */int) (unsigned char)100);
                    }
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        arr_78 [i_0] [i_2] [i_1] [i_16] = ((/* implicit */unsigned char) (short)-27928);
                        arr_79 [i_2] [i_1] [i_2] [i_16] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4086091743U) : (((/* implicit */unsigned int) -196204979))))) ? (((((/* implicit */_Bool) 4086091733U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8891076840559550792LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-26)))))));
                        arr_80 [i_0] [i_0] [i_2] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (0U)))) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned short)62712))));
                        arr_81 [i_0] [1ULL] [i_2] [i_16] = ((/* implicit */unsigned long long int) (unsigned short)14477);
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 7; i_17 += 2) 
                    {
                        arr_86 [(unsigned char)7] [i_17] [1U] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65223)) ? (-7008307827951757477LL) : (-7008307827951757474LL)));
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            arr_89 [i_0] [i_17] [(unsigned short)1] [i_17 + 3] [i_18] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (7008307827951757473LL) : (5477251385968487442LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8891076840559550795LL)) ? (8891076840559550799LL) : (-8891076840559550795LL)))) : (((((/* implicit */_Bool) -7008307827951757474LL)) ? (2852491013388603535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40)))))));
                            arr_90 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)104);
                            arr_91 [i_18] [i_0] [i_17] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1565343478407301457ULL)) ? (14637378799617891933ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2206347150U)) ? (((/* implicit */int) (unsigned char)163)) : (781793111))))));
                        }
                        arr_92 [i_0] [i_0] [i_2] [i_17] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7008307827951757474LL)) ? (-7008307827951757477LL) : (((/* implicit */long long int) 3652854599U))))) ? (17220801511077542653ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)22903)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65222))) : (((((/* implicit */_Bool) -7008307827951757474LL)) ? (1859752597U) : (((/* implicit */unsigned int) 781793124))))))) : (((((/* implicit */_Bool) -7008307827951757477LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)9))) : (281474976710655LL)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        arr_95 [i_1] = ((/* implicit */short) 15056555826624135886ULL);
                        /* LoopSeq 2 */
                        for (short i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            arr_99 [i_20] [i_19] [(unsigned char)4] [i_1] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)313)) ? (((/* implicit */int) (signed char)15)) : (1572864)))) : (((((/* implicit */_Bool) 504706667U)) ? (-8891076840559550771LL) : (((/* implicit */long long int) -234518575)))));
                            arr_100 [i_1] [i_19] [i_1] [i_1] [i_1] [7LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned char)92)) : (((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned short)30446)) : (((/* implicit */int) (signed char)-126))))));
                            arr_101 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8891076840559550795LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2363988122940204954LL)) ? (2210896585U) : (((/* implicit */unsigned int) 234518574))))) ? (((((/* implicit */_Bool) -252557203069917859LL)) ? (234518575) : (((/* implicit */int) (unsigned char)96)))) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned char)199))))));
                        }
                        for (int i_21 = 0; i_21 < 10; i_21 += 1) 
                        {
                            arr_105 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [6LL] = 234518574;
                            arr_106 [i_0] [i_19] [i_2] [i_0] [i_2] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1492883667)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (unsigned char)72))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) : (2719929283U))) : (466681076U)));
                            arr_107 [i_1] [i_1] [i_1] [i_1] [i_2] [6ULL] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17186330245810705878ULL)) ? (4294967285U) : (((/* implicit */unsigned int) -234518574))))) ? (((/* implicit */int) (short)-17551)) : (((/* implicit */int) (short)0))));
                        }
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_112 [i_22] = (short)-29371;
                        arr_113 [i_0] [i_1] [i_2] [i_22] = (unsigned char)80;
                        arr_114 [i_0] [i_1] [i_2] [i_2] [i_22] &= ((/* implicit */unsigned char) (short)31530);
                    }
                }
            } 
        } 
    } 
}
