/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88474
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = arr_1 [i_0] [i_0];
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25953))) == (9956675299473012771ULL))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_9 [i_0] = ((short) min(((short)-9073), ((short)9060)));
                        var_21 = ((/* implicit */long long int) arr_5 [i_0 + 2]);
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                        {
                            var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) arr_10 [i_0 + 4] [i_0 + 4] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? ((+(arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_3] [i_0])))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((long long int) max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1] [i_1])))))))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                            var_25 ^= var_8;
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_0] [(short)3] = ((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_0 + 2] [i_0] [i_0])) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0]) : (arr_8 [i_0 + 4] [9LL] [i_0] [i_0]));
                            var_26 = ((/* implicit */unsigned long long int) ((short) var_8));
                            var_27 ^= var_3;
                        }
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [(short)4] [(short)4] [10ULL] [(short)4] [i_6] [i_0] = arr_0 [i_0] [i_3];
                            var_28 &= var_8;
                            var_29 = var_17;
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(var_14)));
                        var_30 = ((/* implicit */short) 7980141334961569521LL);
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            var_31 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)9047)))) % (((/* implicit */int) var_17))))), ((~(min((arr_0 [i_0] [i_7]), (((/* implicit */unsigned long long int) var_12))))))));
                            var_32 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_16 [i_8 - 1] [i_1] [0ULL] [i_1] [i_0 + 3]), (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_2] [i_7] [i_1]))))) < (var_10)))) != (((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) & (((/* implicit */int) arr_12 [i_8] [i_7] [i_1] [i_1] [(short)0]))))));
                            var_33 = ((/* implicit */long long int) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9094))) + (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 + 3] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (short)9067)))))));
                        }
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 2) 
                    {
                        var_34 = ((/* implicit */short) ((((-4960119990511322207LL) < (((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_7))))))) ? (arr_24 [i_0] [(short)6] [i_0] [i_0] [i_9] [(short)9] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                        var_35 += ((/* implicit */short) ((6491402802436574452ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9068)))));
                        arr_27 [i_9] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (var_10)));
                        var_36 *= ((/* implicit */short) arr_8 [i_1] [i_2] [i_1] [i_1]);
                    }
                    for (short i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        arr_30 [i_10] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_0])))))));
                        var_37 = ((/* implicit */short) arr_21 [i_0] [8ULL] [i_2] [i_0]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                        {
                            var_38 &= var_15;
                            var_39 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7918))) == (arr_11 [i_0] [i_0]))))) % (-7508155561377279960LL));
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (short)13984)) ? (arr_4 [i_0] [i_0 + 4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0 + 3] [i_0] [(short)10] [i_0 + 4] [i_0 + 3])))));
                        }
                        arr_33 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_5), (var_2)))) / (((((/* implicit */int) var_7)) * (((/* implicit */int) var_7))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_10]))) / (((((/* implicit */_Bool) (short)-7918)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21960))) : (5260292919733627617ULL)))))));
                        var_41 = ((/* implicit */short) max((var_41), ((short)-5026)));
                    }
                    var_42 &= ((/* implicit */long long int) var_18);
                }
            } 
        } 
        var_43 = (short)-7918;
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (long long int i_14 = 3; i_14 < 11; i_14 += 3) 
                {
                    {
                        arr_44 [i_12] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (+((-(((/* implicit */int) var_17))))))), ((+(8411640638117584803LL)))));
                        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_17), (var_1)))), ((~(((/* implicit */int) (short)-5028))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_1))))), (min((7297121821063264317ULL), (arr_24 [i_0] [i_0 + 4] [12LL] [12LL] [i_0] [12ULL] [i_0])))))));
                        arr_45 [i_0] [(short)9] = min((min((((/* implicit */long long int) (short)-32137)), (min((arr_4 [i_0] [i_12] [i_0]), (((/* implicit */long long int) (short)9073)))))), (((/* implicit */long long int) ((arr_13 [i_0] [i_0 + 4] [i_13] [i_0] [i_13]) != (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_14 - 2] [i_0])))))));
                        arr_46 [i_0] [i_0] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */short) max(((~(13ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_15)), ((-(7524723647212018456LL))))))));
                        var_45 ^= (short)7926;
                    }
                } 
            } 
        } 
        var_46 = ((/* implicit */short) min((((var_13) - (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0 + 4] [i_0] [i_0 + 1] [i_0 + 4])))))));
        var_47 = ((/* implicit */unsigned long long int) min(((short)19184), ((short)-22786)));
    }
    for (long long int i_15 = 1; i_15 < 10; i_15 += 2) /* same iter space */
    {
        arr_51 [4ULL] [i_15] = ((/* implicit */long long int) min((min((arr_42 [i_15] [i_15] [i_15 + 1] [i_15 + 3]), (arr_42 [i_15 - 1] [i_15 + 4] [i_15] [i_15 + 2]))), (((short) arr_42 [i_15 - 1] [i_15] [i_15 - 1] [i_15 + 1]))));
        arr_52 [i_15] [i_15] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
    }
    var_48 = -9002912222987140734LL;
    var_49 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (var_3)));
    var_50 = max((min((((/* implicit */unsigned long long int) var_6)), ((-(var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_8), ((short)-28221)))) : (((/* implicit */int) var_8))))));
}
