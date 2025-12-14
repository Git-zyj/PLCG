/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59709
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) min(((unsigned short)19705), (((/* implicit */unsigned short) (short)7412))))) != (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)-79)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35599))) & (3924928911342535390ULL))), (((/* implicit */unsigned long long int) max((-1LL), (((/* implicit */long long int) (short)-28305))))))), (((arr_10 [i_0] [i_4] [(unsigned short)10] [i_4 + 3] [i_4 + 3]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)19705)) ? (((/* implicit */int) arr_2 [i_4 - 1] [i_4])) : (((/* implicit */int) arr_2 [i_4 + 2] [i_4 + 3])))), (((/* implicit */int) max((var_7), (((/* implicit */short) arr_6 [i_0] [i_1] [i_2])))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (short)7907)) ? (arr_10 [i_0] [i_0] [i_0] [17ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10705))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4080))))))), (min((var_11), (((/* implicit */unsigned long long int) arr_12 [i_0]))))));
                    arr_15 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((15556945093434349244ULL), (((/* implicit */unsigned long long int) (unsigned short)35834))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                {
                    arr_21 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (-2147483647 - 1));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        for (int i_8 = 4; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_8 [i_6]))));
                                arr_26 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-13364)), ((unsigned short)56011)))) ? (max((((((/* implicit */_Bool) var_11)) ? (6755399441055744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55704))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) != (arr_13 [18ULL] [18ULL])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1613484330U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29701))) : (4294967295U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    for (signed char i_12 = 3; i_12 < 12; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            {
                                arr_41 [i_11] [i_10] [(short)9] [i_11] [i_10] [i_12 + 1] [12] = ((/* implicit */unsigned char) ((((arr_37 [i_11] [i_11] [i_12] [i_12 - 2] [i_12 - 1]) >> (((((/* implicit */int) var_1)) + (76))))) != (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2620085691U)) ? (((/* implicit */int) (short)8176)) : (((/* implicit */int) (signed char)127))))) | (arr_37 [i_9] [i_11] [i_12] [i_12] [i_10])))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((min((((/* implicit */int) (short)-10687)), (-495705168))), (max((((/* implicit */int) (short)7882)), (max((((/* implicit */int) (unsigned short)16961)), (-1215176273))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_10] [(short)8] [i_10] [i_10])) < (((/* implicit */int) var_5))))), (((arr_35 [i_9] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_17 [i_9] [i_10]))))), (((/* implicit */unsigned long long int) max((arr_22 [i_9] [i_10] [i_10] [i_10]), (((/* implicit */short) arr_12 [i_10]))))));
                arr_42 [i_10] [7U] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_7 [i_14] [i_14] [i_14]))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) var_3)))))));
    }
    for (int i_15 = 0; i_15 < 20; i_15 += 3) 
    {
        arr_47 [i_15] = ((/* implicit */signed char) min((((/* implicit */int) max(((short)28305), ((short)28304)))), (((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned char)84))))))));
        arr_48 [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 15006998092945901390ULL)) ? (((/* implicit */int) (unsigned short)30720)) : (((/* implicit */int) (unsigned short)5191)))))), (min((arr_16 [i_15] [i_15] [i_15]), ((-(((/* implicit */int) var_9))))))));
        /* LoopSeq 1 */
        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_59 [i_16] [10] [i_18] &= ((((((/* implicit */unsigned long long int) arr_51 [(unsigned char)16])) - (arr_17 [i_15] [i_15]))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_15] [i_16]))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_45 [(short)12]), (arr_45 [(unsigned short)14])))))))));
                        arr_60 [i_16] [i_15] = ((/* implicit */unsigned short) min((arr_55 [i_15] [i_16] [i_17]), (min((arr_55 [i_15] [i_15] [i_15]), (arr_55 [i_15] [i_16] [i_17])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_65 [i_19] [i_15] [i_15] [i_16] [i_15] = (-(((/* implicit */int) var_2)));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) != (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 95947590U)))) : (arr_57 [i_15] [i_16] [i_17] [i_19])));
                        }
                        for (unsigned short i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            arr_68 [i_15] [i_15] [i_17] [i_18] [i_20] = ((/* implicit */signed char) min(((~(max((((/* implicit */int) (_Bool)1)), (arr_16 [i_17] [i_15] [(short)14]))))), (((((/* implicit */int) (short)10720)) ^ (((/* implicit */int) (short)-1))))));
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_57 [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44312)) | (((/* implicit */int) var_10))))))))));
                            arr_69 [i_15] [i_16] [i_16] [i_17] [(_Bool)1] [i_15] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)1020), ((short)-620))))) + (((((/* implicit */_Bool) (unsigned char)29)) ? (11316780882242936533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10700))))))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned short) (signed char)19)))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_21 = 0; i_21 < 20; i_21 += 3) 
            {
                arr_72 [(signed char)7] [i_16] [i_15] [i_21] = ((/* implicit */short) arr_49 [(unsigned short)11] [i_16]);
                arr_73 [i_15] = ((max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) arr_23 [(short)18])))) < (((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_4)))))));
            }
            for (unsigned short i_22 = 4; i_22 < 19; i_22 += 2) 
            {
                arr_77 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (var_10)))) ^ (((/* implicit */int) ((unsigned char) (unsigned short)5191)))));
                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16293))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-94)))))))));
                arr_78 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */int) (short)1020)) : (((/* implicit */int) (signed char)12))));
                arr_79 [i_15] [(short)3] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)44)) && (((/* implicit */_Bool) (unsigned char)254))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_23 = 0; i_23 < 20; i_23 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_24 = 1; i_24 < 16; i_24 += 3) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */signed char) min((((int) max((var_4), (((/* implicit */unsigned short) (short)6755))))), (((/* implicit */int) (signed char)127))));
                            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_16 [i_15] [(_Bool)1] [i_25])), (14792564821394984172ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-6)))))))) ? (((((/* implicit */int) (unsigned char)7)) * (((/* implicit */int) arr_74 [i_24 + 1] [(unsigned char)18] [(unsigned char)18] [i_15])))) : (((/* implicit */int) (unsigned char)184))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((1655678175U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))))))));
                        }
                    } 
                } 
                arr_91 [i_15] [i_16] [10] [i_15] = ((/* implicit */unsigned int) var_4);
                arr_92 [i_15] [(_Bool)1] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_16] [i_16])))))) * (max((arr_17 [i_15] [i_23]), (((/* implicit */unsigned long long int) var_6)))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)16]))));
            }
            for (unsigned short i_26 = 0; i_26 < 20; i_26 += 3) /* same iter space */
            {
                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (short)6755)), (6380649358663386480ULL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-10706)))))) * (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((int) (short)-28304))))))));
                arr_96 [17U] [i_15] [18ULL] = (!(((/* implicit */_Bool) min((arr_93 [i_15] [i_15] [i_16] [i_26]), (arr_93 [i_15] [i_16] [i_16] [i_26])))));
                arr_97 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((unsigned long long int) (short)48)) > (((/* implicit */unsigned long long int) -1088895801))));
                /* LoopSeq 2 */
                for (signed char i_27 = 4; i_27 < 19; i_27 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_28 = 0; i_28 < 20; i_28 += 1) 
                    {
                        arr_102 [i_27] [i_16] [i_26] [i_27] |= ((/* implicit */short) arr_74 [i_28] [i_27] [i_27] [i_15]);
                        arr_103 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_99 [i_15] [i_16] [i_15] [i_26] [i_27 - 2] [(_Bool)1])), (arr_86 [i_16] [i_16] [i_15] [i_28])))) ? ((+(((((/* implicit */int) arr_22 [i_15] [i_27] [i_26] [i_15])) / (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_9))));
                        arr_104 [i_27] [i_16] [i_27 - 4] &= ((/* implicit */unsigned int) ((_Bool) 2147483647));
                        arr_105 [i_15] [i_16] [i_16] [i_15] [i_27] [i_28] = ((/* implicit */signed char) (+(((unsigned int) (short)32757))));
                    }
                    arr_106 [i_15] [i_16] [i_26] [i_15] [i_27 - 1] [i_27] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_74 [(signed char)11] [i_15] [i_15] [i_15]))))));
                    /* LoopSeq 2 */
                    for (signed char i_29 = 0; i_29 < 20; i_29 += 1) 
                    {
                        arr_109 [(unsigned char)8] [i_16] [i_15] [i_29] = ((/* implicit */unsigned char) ((unsigned short) 4026531840U));
                        arr_110 [i_15] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (short)10705)))), (1285328483)));
                    }
                    /* vectorizable */
                    for (short i_30 = 0; i_30 < 20; i_30 += 1) 
                    {
                        arr_115 [i_15] [i_15] [i_16] [i_26] [i_15] [i_27 + 1] [i_30] = ((int) (signed char)-109);
                        var_29 = ((/* implicit */int) ((unsigned short) (signed char)-41));
                        arr_116 [18ULL] [18ULL] [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) (!(((_Bool) (short)32767))));
                        var_30 = (((-(((/* implicit */int) var_9)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)72))))));
                    }
                }
                for (signed char i_31 = 4; i_31 < 19; i_31 += 4) /* same iter space */
                {
                    var_31 ^= ((/* implicit */signed char) 4083032175U);
                    arr_120 [9ULL] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) < (((/* implicit */int) (unsigned short)53687))));
                }
            }
        }
    }
    for (signed char i_32 = 0; i_32 < 17; i_32 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_33 = 1; i_33 < 13; i_33 += 3) 
        {
            for (signed char i_34 = 0; i_34 < 17; i_34 += 3) 
            {
                for (unsigned char i_35 = 0; i_35 < 17; i_35 += 1) 
                {
                    {
                        arr_133 [(unsigned short)16] [i_33] [i_34] [i_34] [(unsigned short)2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)23238))) - (11626981412798409497ULL)))) && (((/* implicit */_Bool) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned short)14997)))))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)243)))))));
                    }
                } 
            } 
        } 
        arr_134 [i_32] = (+(((unsigned int) min((((/* implicit */unsigned int) (unsigned short)127)), (2051951213U)))));
    }
    var_33 &= ((/* implicit */long long int) var_3);
}
