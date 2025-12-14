/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85195
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
    var_11 = ((/* implicit */long long int) ((unsigned long long int) var_2));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) 4475965134841923350ULL))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) ((long long int) 0LL)))));
            var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 5328939180406321137ULL)) ? (((/* implicit */unsigned long long int) 734008020390247580LL)) : (4523870639128328395ULL))), (18315890049256896102ULL)))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 4523870639128328395ULL)) ? (7510316679202571677ULL) : (arr_3 [7LL]))), (((((/* implicit */_Bool) arr_1 [12LL])) ? (4523870639128328384ULL) : (arr_2 [i_0]))))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (min((13922873434581223202ULL), (((/* implicit */unsigned long long int) 2305842940494217216LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_1]) > (arr_0 [i_1]))))))), (((/* implicit */unsigned long long int) arr_5 [i_0 + 2]))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-8575354380609762691LL) | (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) ((65535LL) / (arr_7 [i_2])))) : (((arr_3 [i_0]) / (8191ULL)))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = arr_9 [i_2];
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_11 [i_4] [i_2] [14LL] [i_0 - 1] [i_0 - 1]);
                    var_16 = ((((/* implicit */_Bool) arr_5 [1ULL])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_4]) : (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -65540LL)) ? (arr_5 [16LL]) : (arr_7 [i_0])))));
                }
                var_17 = ((/* implicit */long long int) arr_1 [i_0]);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 4; i_8 < 17; i_8 += 1) 
                        {
                            arr_28 [i_0 - 1] [14LL] [i_0] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_18 [3LL]) : (arr_18 [i_8])))) && (((/* implicit */_Bool) arr_10 [i_0]))));
                            var_18 = ((((((/* implicit */_Bool) arr_24 [i_0 + 1] [i_5 - 1] [i_0 + 1] [10ULL])) ? (((/* implicit */unsigned long long int) arr_27 [i_0 + 1] [i_5 - 1] [i_6] [i_7] [10LL] [i_5 + 2])) : (arr_0 [i_5]))) | (((unsigned long long int) 4611686018423193600LL)));
                            arr_29 [i_0] [i_0] [i_6] [i_7] [i_8] = ((/* implicit */long long int) arr_19 [i_0] [i_6]);
                        }
                        arr_30 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [13ULL] [i_0])) ? (9615721426375419423ULL) : (arr_21 [i_7] [11LL] [i_5])))) ? (((/* implicit */unsigned long long int) arr_15 [i_0 - 2] [i_5 + 2])) : (((((/* implicit */_Bool) arr_24 [i_0 + 3] [i_0 + 3] [i_6] [i_7])) ? (arr_11 [i_0 + 1] [19ULL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) -2670750666357602662LL))))));
                        arr_31 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = arr_10 [i_0];
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                arr_34 [i_0] [i_5] [i_5] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_7 [i_0])) : (7748420933131314743ULL))) | (((/* implicit */unsigned long long int) arr_10 [i_0])));
                var_19 = ((/* implicit */unsigned long long int) (+(-18LL)));
            }
        }
        arr_35 [i_0] = min((((((arr_4 [i_0 + 3] [5LL]) == (arr_7 [i_0]))) ? (((((/* implicit */_Bool) 1909000358591658529LL)) ? (arr_19 [15LL] [i_0 + 3]) : (((/* implicit */unsigned long long int) arr_23 [i_0 + 3] [0ULL] [i_0 + 2] [i_0])))) : (((((/* implicit */_Bool) -1586786330510012513LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3436552678327864685LL)))))), (((arr_22 [i_0 - 2] [i_0 + 2] [i_0 + 2]) << (((arr_22 [i_0 - 2] [i_0 + 2] [i_0 + 2]) - (1789748720927634118ULL))))));
    }
    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */unsigned long long int) arr_7 [i_10])) : (arr_19 [i_10] [i_10]))) ^ (7510316679202571687ULL)))) ? (((/* implicit */unsigned long long int) arr_38 [i_10] [i_10])) : (((((arr_20 [15LL] [i_10] [i_10]) + (arr_11 [i_10] [i_10] [i_10] [i_10] [i_10]))) * (arr_11 [i_10] [i_10] [i_10] [i_10] [i_10])))));
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_10]))) ? (((/* implicit */unsigned long long int) ((((arr_38 [i_10] [i_10]) + (9223372036854775807LL))) >> (((arr_9 [i_10]) - (8072099168020649682LL)))))) : (((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) -2782748284541175781LL)) : (6917529027641081856ULL))))) != (arr_19 [i_10] [i_10])));
        var_21 = ((((((/* implicit */_Bool) min((3338700608094724617LL), (734008020390247580LL)))) ? (((((/* implicit */_Bool) 6513582430418201322ULL)) ? (arr_22 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) arr_4 [i_10] [i_10])))) : (min((((/* implicit */unsigned long long int) arr_5 [i_10])), (18446744073709551615ULL))))) & (arr_3 [i_10]));
    }
    var_22 = ((((/* implicit */_Bool) var_6)) ? (var_8) : (((((var_8) - (((/* implicit */unsigned long long int) var_1)))) - (((var_4) + (((/* implicit */unsigned long long int) 5852726374950416249LL)))))));
}
