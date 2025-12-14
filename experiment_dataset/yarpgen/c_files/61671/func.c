/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61671
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((_Bool) arr_1 [i_0])) ? (max((max((((/* implicit */unsigned long long int) arr_0 [1ULL] [i_0])), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) || (((/* implicit */_Bool) (short)32767))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (short)32767)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) -6045105436782589703LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)(-32767 - 1))))));
        arr_4 [i_0] = (~(((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (short)(-32767 - 1));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_13 [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_12 [i_1] [i_1] [4])) == (((((/* implicit */_Bool) arr_8 [(short)4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))), (((arr_12 [i_3] [i_2] [i_1]) || (((/* implicit */_Bool) (unsigned short)56277))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 1; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1] [(unsigned short)10] [i_2] [i_3] [i_3] [i_2] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5])) || (((((((/* implicit */int) (unsigned short)4088)) == (((/* implicit */int) (_Bool)0)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)21899)))))))));
                                arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                    var_11 *= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_12 [1LL] [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (long long int i_7 = 3; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) (~(2305280059260272640ULL)));
                                var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (short)32755)) : (386104825))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_27 [i_8]))));
        /* LoopNest 2 */
        for (long long int i_9 = 3; i_9 < 19; i_9 += 1) 
        {
            for (short i_10 = 2; i_10 < 21; i_10 += 2) 
            {
                {
                    arr_33 [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_9]))));
                    var_15 *= ((/* implicit */unsigned long long int) (-(var_6)));
                    var_16 &= ((/* implicit */long long int) ((unsigned char) ((arr_25 [i_9 - 3]) == (arr_25 [i_9 - 1]))));
                    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((short)32755), (((/* implicit */short) arr_32 [i_9])))))))), ((-(arr_25 [i_9 + 4])))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_8]))))) || (((/* implicit */_Bool) (short)7567)))), ((!(((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_8]))) == (arr_27 [i_8])))))));
    }
    for (int i_11 = 2; i_11 < 14; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 13; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_44 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_18 [i_11] [i_13 + 1] [i_13] [i_12 - 2] [i_11 - 1])))) || (((/* implicit */_Bool) arr_6 [i_11]))));
                        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                        var_20 = ((/* implicit */unsigned long long int) arr_24 [i_12]);
                        var_21 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_11] [i_11] [i_11])))))))), (arr_41 [10ULL] [i_11] [i_12 - 2])));
                    }
                    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_22 = ((/* implicit */short) arr_24 [i_11]);
                        arr_47 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) arr_39 [i_13 - 1]);
                        arr_48 [i_11] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_16 [i_11 + 1] [i_11] [i_11 - 2] [i_11] [i_11]))))));
                    }
                    for (short i_16 = 2; i_16 < 14; i_16 += 4) 
                    {
                        var_23 = ((/* implicit */int) arr_5 [i_11 - 1]);
                        arr_53 [i_11 + 1] [i_12 - 2] [i_11 + 1] [i_13] [i_16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_13 - 1] [i_16 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22389))) : (min(((+(var_5))), (((/* implicit */unsigned int) -283224520))))));
                        var_24 = (+((~(arr_11 [(unsigned char)16] [i_12] [i_13] [(unsigned char)16]))));
                        var_25 = ((/* implicit */_Bool) (unsigned char)255);
                        var_26 = (((!(((/* implicit */_Bool) arr_49 [i_11])))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_25 [i_11]))))))) : ((-(((/* implicit */int) arr_49 [i_11 + 1])))));
                    }
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            var_27 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_9)))));
                            var_28 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)253))))));
                            arr_59 [i_11] [i_17] [i_17] [6ULL] [i_12] [i_12] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_12 - 2] [i_12] [i_12] [i_12 - 2])) || (((/* implicit */_Bool) (unsigned char)248))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
                        {
                            arr_63 [i_11] = (((!(((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_11] [i_11 - 1] [i_11] [i_12 + 1])))) || (((/* implicit */_Bool) min((arr_46 [i_11 - 2] [i_11] [i_11 - 2] [i_11 - 1] [i_11] [i_12 + 1]), (arr_46 [i_11] [i_11] [i_11] [i_11 - 1] [i_11] [i_12 + 1])))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_35 [i_11])))) || (((/* implicit */_Bool) min((arr_37 [(unsigned short)4] [i_12] [i_12]), (((/* implicit */unsigned short) var_7)))))))))))));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_26 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 7972040360620534172LL)) || (((/* implicit */_Bool) -1637451437)))))) : (min((((/* implicit */unsigned int) arr_45 [i_11] [i_17] [i_12 + 1] [i_12 + 1] [i_17] [(unsigned char)12])), (3999283572U))))))))));
                        }
                        for (unsigned char i_20 = 2; i_20 < 13; i_20 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */int) arr_30 [i_11] [(short)7] [i_11])), (arr_64 [i_11] [i_11] [i_11 - 2] [i_11] [i_11])))))) || (((/* implicit */_Bool) ((unsigned short) min((arr_24 [i_12 - 1]), (((/* implicit */unsigned char) (_Bool)0)))))))))));
                            var_32 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_18 [i_20] [i_20 - 1] [i_20 + 2] [i_20] [i_20])))));
                            var_33 ^= ((/* implicit */int) ((unsigned int) arr_56 [i_11] [i_12] [9ULL] [i_17] [i_20]));
                            arr_67 [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11] [4ULL] [i_11] = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) min((arr_36 [i_11] [i_11]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_68 [i_11] [i_11] [i_11] [(unsigned char)11] [i_11])) || (((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_11] [i_11] [i_13]))))))));
                            var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                        var_36 = ((/* implicit */unsigned int) arr_30 [i_11] [i_11] [i_11]);
                    }
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (var_4)));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)225)), ((~(((/* implicit */int) (short)2))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)244))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(2090609184)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 15; i_22 += 4) 
        {
            for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_35 [i_11 + 1]), (arr_35 [i_11 - 1]))))));
                        arr_79 [i_11] [i_22] [i_22] [i_22] = ((/* implicit */unsigned char) arr_76 [(short)7] [i_11 - 1] [i_11]);
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_40 [(unsigned char)6] [(unsigned char)6] [i_23] [i_24]), (((/* implicit */int) arr_62 [i_11] [i_23] [i_23] [(unsigned short)10] [i_24]))))) ? ((-(arr_6 [17]))) : (((/* implicit */int) ((unsigned short) arr_42 [i_11] [i_22] [i_23] [i_24] [i_11] [i_22]))))), (min(((-(((/* implicit */int) arr_77 [i_11] [i_22] [i_23] [i_24])))), ((-(((/* implicit */int) (short)-32767)))))))))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), ((+(((/* implicit */int) arr_71 [i_11] [i_22]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_77 [i_11] [i_22] [i_23] [i_11])), (arr_50 [i_22] [i_22] [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_69 [i_11] [i_22] [i_23] [i_23] [i_23] [i_25] [i_25]) || (arr_23 [i_25] [(unsigned char)0]))))) : (arr_27 [i_25]))))));
                        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) arr_76 [i_22] [i_23] [i_22]))));
                    }
                    /* vectorizable */
                    for (int i_26 = 2; i_26 < 13; i_26 += 2) 
                    {
                        arr_84 [i_11] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) arr_45 [i_11] [i_11] [4] [4] [i_22] [4]))));
                        arr_85 [i_11] [i_11] [i_11] [i_11] [i_11] = (-(((/* implicit */int) var_0)));
                        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_11] [i_11] [i_11]))));
                        var_44 += ((/* implicit */int) arr_49 [i_11]);
                    }
                    for (unsigned char i_27 = 0; i_27 < 15; i_27 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_28 = 1; i_28 < 13; i_28 += 2) 
                        {
                            arr_91 [i_11] [i_22] [(unsigned short)8] [i_27] [i_28 + 1] [i_11] = ((/* implicit */_Bool) arr_21 [i_11 + 1] [i_27] [i_22] [i_11 + 1]);
                            arr_92 [i_11] [9LL] [i_22] [i_22] [i_11] [i_27] [i_28 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 34359734272ULL))));
                        }
                        arr_93 [i_23] [8ULL] [i_11] [i_27] [i_23] = ((/* implicit */_Bool) 2090609184);
                        var_45 |= ((/* implicit */int) 123603573469546465ULL);
                    }
                    arr_94 [i_11] [i_11 + 1] [i_11] = ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) 2872017933U)), (arr_81 [i_11] [i_11] [6ULL])))))) ? (((((/* implicit */_Bool) arr_46 [1] [i_11] [i_11] [i_11 - 2] [i_11 + 1] [i_11])) ? (arr_46 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 - 2] [i_23]) : (arr_46 [i_11] [i_11] [(unsigned short)8] [i_11 + 1] [i_11 - 1] [i_11]))) : (((/* implicit */int) var_0)));
                }
            } 
        } 
    }
    var_46 = ((/* implicit */unsigned long long int) (-(var_6)));
    var_47 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))), (max((min((((/* implicit */long long int) var_3)), (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))));
}
