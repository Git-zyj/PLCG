/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91281
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 668319249445610561ULL)) || (((/* implicit */_Bool) arr_2 [i_0 - 1]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((arr_1 [i_0 - 3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_0)))) || (((/* implicit */_Bool) arr_5 [i_1] [i_2]))))), ((+((-(((/* implicit */int) var_10))))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_18 [i_5] [i_4] [i_4] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) ((arr_6 [i_5] [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [(_Bool)1])))) & (((((/* implicit */_Bool) var_13)) ? (var_2) : (1983383334))))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_5 [i_5] [i_4]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                var_20 = ((/* implicit */_Bool) (+(((int) arr_10 [i_1] [i_1]))));
                var_21 = ((/* implicit */signed char) var_1);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? ((~(5241150240676348635ULL))) : (max((max((((/* implicit */unsigned long long int) var_13)), (var_3))), ((+(0ULL))))))))));
            }
            for (short i_7 = 1; i_7 < 23; i_7 += 1) 
            {
                arr_25 [i_2] [i_2] [i_7] = ((/* implicit */_Bool) var_5);
                arr_26 [i_1] [i_1] [(short)0] |= ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            arr_32 [i_1] [23LL] [4] [4ULL] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_1] [i_2] [i_7] [i_8] [i_9])) ? (((/* implicit */int) arr_16 [(signed char)1] [i_2] [i_7] [i_8] [16LL] [(signed char)1] [i_7 - 1])) : (((/* implicit */int) arr_15 [i_1] [i_1] [(signed char)18] [i_8] [12U] [i_9] [i_7 - 1]))))) & ((+(arr_27 [i_1] [i_2] [i_2] [i_2])))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) (signed char)-30))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [(short)10] [17U] [8ULL] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]))))) : (82041691186789189ULL)));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))) ? ((+(max((var_6), (17778424824263941044ULL))))) : (((arr_23 [(short)21] [i_7 - 1] [i_7]) ? (var_15) : (((/* implicit */unsigned long long int) var_1))))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 12227840265321381309ULL))) ? (arr_31 [i_7 - 1] [i_7 + 1]) : (((/* implicit */long long int) var_1))));
                        }
                    } 
                } 
                arr_33 [i_2] [i_2] |= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_7)))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) (~((~(2147483647))))))));
            }
            /* vectorizable */
            for (short i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                arr_36 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1]))));
                var_26 = ((/* implicit */signed char) (~(arr_17 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
            }
            /* vectorizable */
            for (short i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_11]))));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : ((-(var_15)))))));
            }
        }
        for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
            {
                arr_45 [i_13] [i_13] = ((/* implicit */int) arr_38 [i_12 - 1] [i_12] [i_12 + 1]);
                arr_46 [i_1] [i_12] = ((/* implicit */signed char) var_14);
            }
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
            {
                arr_49 [i_1] [i_1] [2ULL] [2ULL] = ((/* implicit */int) max((((((/* implicit */_Bool) var_12)) ? (4609199993063451701LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_14] [i_1] [i_1])))))))), ((~(-7342663483407531540LL)))));
                var_29 = ((/* implicit */int) ((((unsigned long long int) arr_24 [i_12 - 1] [i_1])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_12 + 1] [i_14] [i_14] [i_14])))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 2; i_16 < 21; i_16 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((_Bool) var_3));
                        arr_56 [i_16] [9LL] [i_15] [9LL] = ((/* implicit */signed char) min((((int) (signed char)87)), (((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */int) var_13)) + (((/* implicit */int) arr_21 [6ULL])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) >= (var_6))))))));
                    }
                } 
            } 
        }
        for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
        {
            var_31 = ((/* implicit */long long int) var_6);
            var_32 = ((/* implicit */short) arr_35 [i_17] [i_1] [i_1]);
            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)8))))) ? (((/* implicit */unsigned int) arr_35 [i_1] [i_1] [i_1])) : (arr_11 [i_17])))))));
            var_34 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) max((var_8), ((signed char)-1)))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_19 = 2; i_19 < 22; i_19 += 3) 
                {
                    var_35 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((unsigned int) var_9))), (min((((/* implicit */unsigned long long int) arr_28 [(signed char)10] [(_Bool)1])), (var_14))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_17] [i_17] [i_18] [(_Bool)1])))));
                    arr_65 [i_1] [i_1] = ((/* implicit */int) arr_52 [i_1] [i_1] [(short)7] [i_1]);
                }
                for (long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    arr_69 [i_20] [15LL] [i_20] [15LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((2369197743306674240ULL), (((/* implicit */unsigned long long int) arr_16 [i_20] [i_20] [(short)11] [18] [(short)11] [(short)11] [i_1]))))) ? (17778424824263941054ULL) : (((/* implicit */unsigned long long int) ((3448182806U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_17] [i_17]))))))));
                    arr_70 [i_1] [i_17] [i_20] = (~(arr_8 [i_1]));
                    arr_71 [i_20] = ((/* implicit */short) min((((unsigned int) (-(3550522135325303587LL)))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) >= (arr_27 [3] [3] [3U] [i_20])))) & (var_1))))));
                    arr_72 [i_20] [i_18] = ((/* implicit */unsigned int) var_1);
                }
                var_36 = (~(((/* implicit */int) var_10)));
                var_37 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_17] [i_18]))) & (((long long int) arr_37 [i_1] [i_18]))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 2) /* same iter space */
            {
                arr_76 [i_1] [i_17] [i_21] = 18446744073709551605ULL;
                /* LoopNest 2 */
                for (signed char i_22 = 1; i_22 < 22; i_22 += 3) 
                {
                    for (int i_23 = 1; i_23 < 20; i_23 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((short) (signed char)0)))));
                            var_39 *= ((/* implicit */short) arr_8 [i_17]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 2) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 3) 
                    {
                        {
                            arr_86 [4LL] [i_21] [i_21] = ((/* implicit */short) max((((/* implicit */long long int) ((_Bool) arr_30 [5ULL] [5ULL] [i_17] [19ULL] [(signed char)1]))), (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_21] [i_17]))) + (arr_31 [17ULL] [i_21])))));
                            arr_87 [14] [14] [i_25] [14] [i_25] [14] [17ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_39 [i_21] [i_1]), (arr_39 [i_21] [i_21])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_39 [i_1] [i_17]), (arr_39 [i_17] [i_17]))))) : (-7281961463857700906LL)));
                            arr_88 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [0ULL] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [15LL] [i_25]))) : (var_14))), (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-11)), (arr_53 [i_1] [i_1] [i_1] [i_1])))))))) : ((+(((arr_38 [i_1] [i_1] [i_1]) + (((/* implicit */unsigned int) var_1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_26 = 1; i_26 < 23; i_26 += 3) 
                {
                    for (short i_27 = 3; i_27 < 23; i_27 += 4) 
                    {
                        {
                            var_40 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_1])) ? (max((var_14), (((/* implicit */unsigned long long int) arr_50 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_82 [i_26] [i_1] [i_21] [i_26] [i_27 + 1])), (arr_50 [i_21])))))));
                            var_41 = (~(-6165153530257586874LL));
                        }
                    } 
                } 
            }
            for (int i_28 = 0; i_28 < 24; i_28 += 4) 
            {
                var_42 = ((/* implicit */short) arr_77 [i_1] [i_1] [(short)20] [8LL] [i_1] [i_1]);
                arr_95 [i_28] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (((((/* implicit */_Bool) ((unsigned short) 16121332512449033428ULL))) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [5])) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) arr_24 [i_17] [i_1]))))))));
            }
        }
        arr_96 [i_1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [6ULL] [6ULL] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) >= (arr_58 [i_1])))) : (((/* implicit */int) var_12)))))));
    }
    /* LoopNest 2 */
    for (long long int i_29 = 0; i_29 < 13; i_29 += 4) 
    {
        for (short i_30 = 0; i_30 < 13; i_30 += 3) 
        {
            {
                arr_102 [i_30] [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(var_2))) - (((/* implicit */int) arr_22 [i_29] [i_29]))))) || (arr_79 [23ULL] [(short)15] [(short)15] [i_30] [19])));
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_17 [i_29] [i_30] [i_30] [i_30] [i_30]), (arr_17 [18ULL] [i_29] [i_29] [8ULL] [i_29])))) || (((/* implicit */_Bool) max((arr_17 [13ULL] [19LL] [i_29] [19LL] [i_29]), (arr_17 [i_29] [i_29] [i_30] [i_30] [(signed char)14])))))))));
                var_44 = ((/* implicit */unsigned long long int) ((short) var_11));
            }
        } 
    } 
}
