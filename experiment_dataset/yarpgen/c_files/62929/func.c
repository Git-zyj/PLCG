/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62929
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0)));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_0 [(_Bool)1]))))))) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(var_8))))));
    /* LoopSeq 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 -= ((/* implicit */unsigned long long int) arr_3 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    var_20 = var_4;
                    var_21 = ((/* implicit */_Bool) max((var_21), (var_0)));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (144115188075823104ULL) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 2] [i_3])) ? (6751171992458308393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                }
                var_23 = var_7;
                var_24 = ((/* implicit */short) arr_2 [i_1 - 1]);
            }
            for (short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_7] [i_6] [i_5] [i_2] [i_1 - 1])) << (((/* implicit */int) (_Bool)1))));
                        var_26 -= (_Bool)1;
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        var_27 ^= ((/* implicit */short) (~((((_Bool)0) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                        var_28 = ((/* implicit */short) var_0);
                    }
                    var_29 = ((/* implicit */_Bool) (short)-2094);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */short) ((arr_6 [i_5] [i_2 + 1] [i_1]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_1]))))) : (var_8)));
                        var_31 = ((/* implicit */short) ((((/* implicit */int) (short)11)) + (((/* implicit */int) ((_Bool) var_1)))));
                        var_32 = (!(((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_9] [i_9])));
                        var_33 = ((/* implicit */_Bool) max((var_33), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-5727)) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        var_34 |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (_Bool)0))))));
                        var_35 -= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                    }
                }
                var_36 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_37 = var_8;
                    var_38 = arr_5 [i_1] [i_2];
                    var_39 |= ((/* implicit */short) (_Bool)0);
                    var_40 = ((/* implicit */_Bool) ((arr_30 [i_1] [i_2] [i_2] [i_1 - 1] [i_2 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20629))) : ((-(6296097466833267496ULL)))));
                    /* LoopSeq 1 */
                    for (short i_13 = 2; i_13 < 24; i_13 += 4) 
                    {
                        var_41 = ((/* implicit */short) arr_15 [i_1 - 1] [i_2] [i_12] [i_13 - 1]);
                        var_42 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((/* implicit */int) (short)3090)) <= (((/* implicit */int) (short)2434)))))));
                    }
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned long long int) var_11);
                    var_44 = ((/* implicit */_Bool) (((_Bool)1) ? (arr_14 [i_2 + 1] [i_11] [i_2 + 1]) : (var_5)));
                    var_45 = ((/* implicit */unsigned long long int) var_10);
                    var_46 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (9007199254478848ULL)))) ? (68451041280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                }
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_1])) + (((/* implicit */int) var_0)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        var_48 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_2] [i_11] [i_15] [i_16]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (var_5)));
                        var_49 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_1 - 1] [i_2 + 4] [i_11]))));
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) var_0))));
                        var_51 += ((/* implicit */short) (~((+(((/* implicit */int) var_2))))));
                        var_52 = ((/* implicit */short) arr_18 [i_1] [i_2 + 2] [i_2 + 2]);
                    }
                    var_53 += ((/* implicit */short) (_Bool)1);
                }
                /* LoopSeq 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_54 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_28 [i_1] [i_1] [i_11] [i_17]))))));
                    var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_13 [i_11 - 2] [i_2 + 4] [(_Bool)1]) : (arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                }
                for (short i_18 = 2; i_18 < 24; i_18 += 4) 
                {
                    var_56 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                    var_57 = ((/* implicit */short) (_Bool)1);
                    var_58 = ((/* implicit */_Bool) arr_41 [i_1 - 1] [i_1 - 1] [i_11 + 1] [i_18 - 2]);
                    var_59 = ((/* implicit */_Bool) max((var_59), ((!(((/* implicit */_Bool) ((arr_2 [i_1 - 1]) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (short)-15153)))))))));
                }
                for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    var_60 -= arr_29 [i_1] [i_11] [i_1 - 1] [i_1] [i_1 - 1];
                    var_61 |= ((/* implicit */short) ((((/* implicit */_Bool) 68451041289ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10853550675858219875ULL)));
                }
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (short i_22 = 0; i_22 < 25; i_22 += 4) 
                    {
                        {
                            var_62 -= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_10))));
                            var_63 = ((/* implicit */short) 3637615829419491396ULL);
                        }
                    } 
                } 
                var_64 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_0) ? (arr_14 [i_1] [i_1] [i_20]) : (arr_59 [i_1] [i_1] [i_20] [i_20] [i_1]))))));
                var_65 ^= ((((/* implicit */_Bool) arr_18 [i_2 + 4] [i_2 + 1] [i_2 - 1])) || ((_Bool)1));
                var_66 = ((/* implicit */_Bool) (short)18367);
            }
        }
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_67 = (((_Bool)1) ? (arr_32 [i_23] [i_23] [i_23] [i_23]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))));
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 19; i_24 += 3) 
        {
            for (unsigned long long int i_25 = 1; i_25 < 16; i_25 += 4) 
            {
                {
                    var_68 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22499))) : (var_8)));
                    var_69 = ((/* implicit */_Bool) ((((var_4) << (((arr_67 [i_23] [i_25]) - (9635191886680146651ULL))))) << (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18355))))));
                }
            } 
        } 
        var_70 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */int) arr_5 [i_23] [i_23])) : (((/* implicit */int) var_2))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 2) 
    {
        var_71 = ((/* implicit */short) 2147210025567689472ULL);
        var_72 -= ((_Bool) ((arr_30 [i_26] [i_26] [i_26] [i_26] [i_26]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        var_73 -= ((/* implicit */short) (+(((/* implicit */int) (short)-18368))));
        var_74 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_37 [i_26] [i_26] [i_26] [i_26]));
        var_75 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_71 [i_26])) : (((/* implicit */int) var_11))));
    }
    for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 1) 
    {
        var_76 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-6))));
        var_77 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_24 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-22518))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))));
    }
}
