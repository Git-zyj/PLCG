/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58698
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = (~(18446744073709551611ULL));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_18 = min((((/* implicit */unsigned long long int) ((131071ULL) != (6683926517059699642ULL)))), (((((unsigned long long int) 18446744073709551603ULL)) >> ((((~(var_13))) - (6773561038816945733ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (min((arr_3 [i_0]), (0ULL))) : (((((/* implicit */_Bool) 4951991715593517314ULL)) ? (18346263709964996679ULL) : (arr_5 [8ULL] [i_1] [12ULL]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_9 [4ULL] [i_1] [i_1]))))), (((unsigned long long int) 6683926517059699642ULL)))));
                        arr_14 [i_0] [i_1] = 131071ULL;
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    var_20 = ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 2])) ? (9ULL) : (arr_0 [i_0 - 1]));
                    var_21 *= ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_4 - 1]) : (arr_10 [i_4 - 1]));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2]))));
                        var_23 = ((((/* implicit */_Bool) arr_3 [i_4 + 1])) ? (arr_11 [i_0] [15ULL] [i_0] [i_0 - 1] [i_1] [i_4 - 1]) : (arr_3 [i_4 - 2]));
                        arr_20 [i_0] [i_0] [i_0] [i_5] [i_0] [i_4] = ((((/* implicit */_Bool) (+(6683926517059699653ULL)))) ? (arr_18 [i_0] [i_0 + 1] [i_4]) : (arr_5 [i_0] [i_0] [3ULL]));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        var_24 = ((unsigned long long int) arr_4 [i_0]);
                        var_25 -= ((((/* implicit */_Bool) arr_4 [i_4 - 1])) ? (arr_19 [i_0] [i_0] [i_0 + 1]) : (arr_19 [i_1] [i_4] [i_0 - 1]));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_25 [10ULL] [10ULL] [i_4 + 1] [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (var_7) : (arr_0 [i_0]))) != (((unsigned long long int) arr_7 [i_0] [i_1] [i_4] [i_7]))));
                        arr_26 [i_0 - 1] [i_0 - 1] [i_4] [i_4] [i_7] = ((((/* implicit */_Bool) arr_21 [i_0] [i_4] [i_4] [i_0 - 1] [i_4 - 1])) ? (18446744073709551607ULL) : (0ULL));
                        var_26 -= var_5;
                        arr_27 [i_4] = ((arr_21 [i_0] [i_4] [i_4] [i_7] [i_4 - 2]) - (arr_21 [i_0] [i_4] [i_7] [i_4] [i_4 + 1]));
                        var_27 = 24ULL;
                    }
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) (~(arr_7 [i_0 + 1] [i_0 + 1] [i_0] [5ULL])))) ? (((unsigned long long int) 9ULL)) : (6668499179770626054ULL)))));
                    arr_31 [i_8] [i_1] [i_0 - 2] [i_8] = min((((((/* implicit */_Bool) ((arr_2 [i_8]) / (14740573427014475024ULL)))) ? ((-(arr_4 [i_8]))) : (((((/* implicit */_Bool) arr_21 [5ULL] [i_8] [i_1] [i_8] [i_8])) ? (10673049888628599669ULL) : (arr_23 [i_8]))))), (18446744073709551615ULL));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        arr_34 [10ULL] [i_1] [i_8] [i_8] = min((max((arr_18 [i_0] [i_0 + 1] [i_8]), (arr_18 [i_0] [i_0 - 1] [i_8]))), ((+(arr_9 [i_1] [i_0 - 1] [i_0]))));
                        arr_35 [i_8] [i_1] [0ULL] [i_8] [0ULL] [i_8] = ((((/* implicit */_Bool) (~(((unsigned long long int) 18446744073709551615ULL))))) ? (18446744073709551615ULL) : (18446744073709551597ULL));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        arr_38 [i_0] [6ULL] [i_8] [i_0] [i_8] [i_10] = ((unsigned long long int) ((((var_13) * (9709290839044039240ULL))) * (var_12)));
                        var_29 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_21 [i_0 + 1] [i_0] [i_8] [i_0 + 1] [i_10]) >= (arr_21 [i_0 - 1] [i_1] [i_8] [i_0 - 1] [i_8]))))) * (max((var_2), (562949953421304ULL))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) arr_19 [i_11] [i_0] [i_11 + 1])) ? (arr_16 [8ULL] [i_11 - 1] [i_1] [i_0 - 1]) : (arr_18 [i_11] [i_11 + 2] [i_1])))));
                    arr_43 [i_0 - 2] = ((((arr_28 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) | (var_12))) * (100480363744554937ULL));
                }
            }
        } 
    } 
    var_31 = (-(min((8ULL), (14740573427014475024ULL))));
    var_32 = (~(var_6));
}
