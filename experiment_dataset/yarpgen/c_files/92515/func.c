/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92515
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_4] = ((/* implicit */_Bool) ((arr_2 [5]) % (var_3)));
                                arr_13 [i_4] [12] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((short) ((((/* implicit */_Bool) arr_2 [(short)10])) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */short) ((((((/* implicit */_Bool) var_18)) ? (arr_6 [(short)0] [(short)10] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_4]))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32757))))))))));
                                var_20 |= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 3]))))));
                                arr_14 [i_0] [i_1] [i_3] [i_4] |= ((/* implicit */int) (!(max(((_Bool)0), ((_Bool)1)))));
                                arr_15 [i_0] [i_0] [(_Bool)1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */int) 605507204095117059ULL);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_7] [(short)6] [i_6 + 1] [i_7] |= ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_7])), (min(((~(var_14))), (((/* implicit */int) (_Bool)0))))));
                                arr_23 [i_0] [i_1] [i_0] [(_Bool)1] [(_Bool)1] [i_7] = ((/* implicit */_Bool) (-2147483647 - 1));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_1 - 2]), ((-(((/* implicit */int) (_Bool)1))))))), (((((unsigned long long int) (_Bool)1)) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (605507204095117059ULL)))))));
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
            }
        } 
    } 
    var_22 = var_16;
    var_23 -= ((/* implicit */_Bool) var_19);
    /* LoopSeq 4 */
    for (short i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            arr_29 [i_8] = (_Bool)0;
            arr_30 [i_8] [i_8] [i_9] |= ((/* implicit */int) 11992955606374603248ULL);
        }
        for (short i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
        {
            arr_35 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_8] [i_8] [i_8])) ? ((~(arr_31 [i_8] [i_10]))) : (max((((/* implicit */unsigned long long int) -1531745472)), (576458553280167936ULL)))));
            /* LoopNest 2 */
            for (short i_11 = 3; i_11 < 24; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned long long int) var_9);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 1; i_13 < 24; i_13 += 2) 
                        {
                            arr_44 [i_8] [(_Bool)1] [i_8] [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                            var_25 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) var_17)) : (arr_43 [i_8] [1] [(short)19] [i_12] [i_13] [i_13]))) >= ((+(var_16)))));
                            arr_45 [i_10] = ((/* implicit */unsigned long long int) ((short) ((arr_25 [i_8]) ? (1517568470) : (-1))));
                            arr_46 [i_8] [(_Bool)0] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */int) (short)-31710)) : (((((/* implicit */_Bool) 1531745465)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))));
                        }
                        arr_47 [i_8] [i_10] [i_11 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (min((arr_28 [i_8] [i_10]), (arr_28 [i_8] [i_8])))));
                    }
                } 
            } 
            arr_48 [(_Bool)1] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_25 [i_10]);
        }
        for (short i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    {
                        arr_56 [i_8] [14] [i_15] [i_8] = ((/* implicit */_Bool) (((~(arr_54 [i_15 - 1] [i_15] [i_16] [i_16]))) << (((var_12) - (557117978)))));
                        arr_57 [i_16] [i_16] [i_14] [i_8] [i_14] [i_8] = ((short) ((((/* implicit */_Bool) 15841795128764975006ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            arr_58 [i_8] [i_14] [i_8] = ((/* implicit */short) (-((-(((/* implicit */int) var_15))))));
        }
        for (short i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
        {
            arr_62 [i_17] |= ((((/* implicit */_Bool) arr_59 [i_8] [i_8] [(_Bool)1])) ? (min((min((2147483647), (((/* implicit */int) var_5)))), (((/* implicit */int) arr_36 [i_8] [i_17])))) : (((/* implicit */int) min((((1999672146) != (arr_40 [23] [7] [7] [23]))), (min(((_Bool)1), ((_Bool)1)))))));
            arr_63 [i_8] [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_59 [i_8] [i_17] [i_8]), (((/* implicit */short) arr_25 [i_8]))))) - (min((33554431), (arr_53 [i_17] [i_17] [i_8] [13ULL] [5]))))))));
        }
        arr_64 [i_8] = ((/* implicit */short) var_12);
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_8] [i_8] [i_8])) && (((_Bool) arr_59 [i_8] [i_8] [i_8]))));
    }
    /* vectorizable */
    for (short i_18 = 2; i_18 < 17; i_18 += 1) 
    {
        arr_69 [i_18] [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) 1166909162)))));
        arr_70 [(short)2] [i_18] = arr_55 [i_18] [i_18] [(_Bool)1] [i_18] [i_18];
        arr_71 [i_18] |= ((arr_52 [i_18] [i_18] [i_18 - 1]) && (arr_52 [i_18] [i_18 - 2] [i_18 - 1]));
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_74 [i_19] [(short)5] = ((/* implicit */int) (~(((unsigned long long int) (short)0))));
        arr_75 [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_15))) / (((/* implicit */int) (short)209))));
    }
    for (short i_20 = 0; i_20 < 23; i_20 += 3) 
    {
        arr_78 [i_20] [i_20] = ((/* implicit */short) ((unsigned long long int) max((((int) arr_43 [10ULL] [10ULL] [i_20] [i_20] [i_20] [9ULL])), ((-(((/* implicit */int) arr_26 [i_20] [i_20])))))));
        arr_79 [i_20] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_20] [i_20] [i_20]))) : (var_4)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (var_12))) : (((/* implicit */int) arr_37 [i_20] [i_20] [i_20] [i_20])))), (((/* implicit */int) (!(((((/* implicit */int) arr_49 [11] [11])) < (arr_55 [i_20] [(short)2] [i_20] [i_20] [i_20]))))))));
        arr_80 [i_20] = ((/* implicit */int) arr_41 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
}
