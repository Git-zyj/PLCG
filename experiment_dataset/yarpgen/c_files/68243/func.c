/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68243
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((676146437U), (((/* implicit */unsigned int) (signed char)-76))))) ? (((/* implicit */unsigned long long int) ((((_Bool) (short)31608)) ? ((-(((/* implicit */int) (short)24355)))) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) ((short) var_5)))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)21827)))))) : (((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_18 = (+(((/* implicit */int) arr_0 [i_1])));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1447514579)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 240LL)) : (1904032751230265586ULL)))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_2])))) && ((_Bool)1)));
                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */short) ((int) 2239521942U));
            }
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])))) : (((unsigned long long int) arr_15 [i_1] [i_1] [i_1] [i_3]))));
                    var_20 = ((/* implicit */unsigned char) (-(var_5)));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)1))));
                        var_22 = ((/* implicit */signed char) ((((-1351904017) + (2147483647))) >> (((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5]))));
                        arr_21 [i_5] [i_5] = ((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_4] [i_5]);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_4 + 1] [i_1] [i_4])) % (((/* implicit */int) arr_10 [i_5] [i_4 - 1] [i_4 + 1] [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_24 ^= ((/* implicit */unsigned char) ((long long int) var_15));
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) (unsigned char)31);
                        arr_28 [i_4] [i_1] [i_0] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((1351904017) > (-1351904027)));
                        arr_29 [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(-1351904044)));
                    }
                    arr_30 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_4 + 1] [i_4 - 1] [i_4 - 1]))));
                }
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_8])) && (((/* implicit */_Bool) arr_20 [i_7] [i_1] [i_0])))))));
                        var_26 = ((/* implicit */unsigned int) ((unsigned char) (((_Bool)1) ? (15393529218530606204ULL) : (((/* implicit */unsigned long long int) 3893786324235723646LL)))));
                        var_27 -= ((/* implicit */unsigned char) arr_36 [i_7 + 1] [i_7 - 1] [i_0] [i_0]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_41 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) arr_35 [i_7] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1]);
                        arr_42 [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) ^ (arr_4 [i_0] [i_7 - 1])));
                        var_28 ^= ((/* implicit */unsigned char) ((_Bool) ((arr_34 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_1] [i_0] [i_7] [i_7]))))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 20; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 1]))));
                        arr_46 [i_10] [i_7] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1798970605)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)2))));
                        arr_47 [i_7] [i_1] [i_0] [i_7] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -3893786324235723646LL)) ? (15817342069299275921ULL) : (((/* implicit */unsigned long long int) -1529719591587863597LL))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (signed char)4)) : ((-(((/* implicit */int) (unsigned char)203)))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_7])))))));
                        arr_50 [i_0] [i_0] [i_1] [i_3] [i_7] [i_11] = ((/* implicit */_Bool) (+(((long long int) arr_43 [i_7] [i_1] [i_1] [i_7] [i_11]))));
                        var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [i_3] [i_3])) ? (arr_39 [i_1] [i_3] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_7] [i_1] [i_3] [i_3])))))) ? (((arr_19 [i_0] [i_1] [i_3] [i_7] [i_11]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_11] [i_3] [i_0])))))));
                        var_33 = ((/* implicit */short) ((arr_9 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                    }
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (signed char)-21))));
                    /* LoopSeq 3 */
                    for (int i_12 = 1; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        arr_54 [i_7] [i_7] [i_3] [i_1] [i_7] = (unsigned char)161;
                        arr_55 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_3])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_5)))) ? (arr_31 [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12 + 1]) : ((-(0LL)))));
                    }
                    for (int i_13 = 1; i_13 < 20; i_13 += 1) /* same iter space */
                    {
                        arr_58 [i_1] [i_1] [i_7] [i_7] [i_13] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                        arr_59 [i_0] [i_7] [i_3] [i_7] [i_7] [i_13] = ((/* implicit */long long int) (-(arr_44 [i_7] [i_1] [i_13 - 1])));
                        var_35 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_37 [i_14] [i_7] [i_7] [i_7] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                        arr_62 [i_7] [i_1] [i_1] = ((/* implicit */long long int) (!(arr_33 [i_7 - 1] [i_7] [i_3] [i_3] [i_3])));
                        arr_63 [i_0] [i_1] [i_7] [i_3] [i_14] [i_14] = ((/* implicit */int) ((5119036006902695248LL) - (arr_9 [i_0] [i_7 + 1] [i_3] [i_1])));
                        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                }
                for (short i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((((/* implicit */_Bool) -5119036006902695254LL)) ? (-2147483647) : (((/* implicit */int) (short)32747)))) / (((/* implicit */int) arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                    var_39 |= ((/* implicit */unsigned long long int) arr_53 [i_0] [i_1] [i_3] [i_15] [i_3]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        var_40 = (short)18951;
                        var_41 = ((/* implicit */int) (-(((long long int) var_15))));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned char i_17 = 4; i_17 < 19; i_17 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)208))))) ? (12944954366412484454ULL) : (((/* implicit */unsigned long long int) (+(-1351904017))))));
                        var_44 = ((/* implicit */_Bool) ((unsigned char) 17179869183LL));
                        var_45 = ((/* implicit */unsigned long long int) arr_10 [i_1] [i_3] [i_15] [i_17]);
                        arr_72 [i_0] [i_17] [i_15] [i_3] [i_1] [i_17] = ((/* implicit */long long int) arr_2 [i_17 + 1]);
                    }
                    var_46 = ((/* implicit */unsigned char) ((long long int) (short)-1));
                }
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((arr_52 [i_0] [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        arr_79 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_9 [i_0] [i_1] [i_3] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_19] [i_1] [i_1] [i_18] [i_0])))));
                        var_48 = ((/* implicit */short) ((((arr_22 [i_19] [i_18] [i_3] [i_3] [i_1] [i_0]) && (((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0]))));
                    }
                    for (short i_20 = 4; i_20 < 20; i_20 += 3) 
                    {
                        arr_83 [i_20] [i_1] [i_1] = ((/* implicit */unsigned int) var_10);
                        var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1821653565759212113ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))))))));
                    }
                    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (~(-473413264464064130LL))))));
                    arr_84 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_8);
                }
            }
            for (signed char i_21 = 1; i_21 < 19; i_21 += 1) 
            {
                var_51 = ((/* implicit */signed char) (unsigned char)32);
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    arr_89 [i_21] [i_1] [i_1] [i_21] [i_22] = ((/* implicit */unsigned char) (+(-17179869200LL)));
                    var_52 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7678956809316756515LL))));
                }
            }
        }
        for (unsigned char i_23 = 3; i_23 < 20; i_23 += 2) 
        {
            var_53 = ((/* implicit */unsigned long long int) ((arr_86 [i_23 - 1]) / (((/* implicit */int) arr_71 [i_0] [i_23] [i_23]))));
            var_54 |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)205)) && (((/* implicit */_Bool) (unsigned char)28)))));
            arr_93 [i_0] = ((((/* implicit */_Bool) (short)6748)) ? (((-5594079728148873385LL) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_71 [i_23] [i_0] [i_0])))));
        }
        var_55 = ((/* implicit */unsigned long long int) ((int) arr_14 [i_0] [i_0] [i_0]));
        var_56 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_57 = ((/* implicit */short) ((((/* implicit */_Bool) arr_73 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_73 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (int i_24 = 0; i_24 < 20; i_24 += 2) 
    {
        var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) (unsigned char)32))));
        var_59 = ((((/* implicit */_Bool) ((-1LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_9 [i_24] [i_24] [i_24] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_24] [i_24] [i_24] [i_24] [i_24]))));
        var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)18)), (17179869176LL)))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_92 [i_24] [i_24])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_94 [i_24])) : (-1202861118)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_37 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])), (var_7)))) ? (((/* implicit */long long int) arr_7 [i_24] [i_24] [i_24] [i_24])) : (arr_35 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))));
    }
    var_61 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) 0ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1623737412)) ? (((/* implicit */int) (short)-1942)) : (((/* implicit */int) (_Bool)1)))))))));
}
