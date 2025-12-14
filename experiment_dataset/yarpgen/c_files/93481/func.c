/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93481
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((var_13), (((long long int) max((((((/* implicit */_Bool) -7804417806543155792LL)) ? (var_8) : (7804417806543155791LL))), (max((var_6), (var_10))))))));
                                var_14 = ((long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_4]), (7804417806543155779LL)))) ? (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_4] [i_1] [i_1] [i_1] [i_0] [i_0]) : (arr_5 [i_1]))) : (((((/* implicit */_Bool) 2305843009213685760LL)) ? (3294865486036111421LL) : (arr_1 [i_1] [i_2])))));
                                arr_14 [i_3] [i_3] [i_0] [i_3] [i_3] [i_3] &= max((((long long int) max((7804417806543155781LL), (7804417806543155820LL)))), (max((((long long int) var_6)), (((((/* implicit */_Bool) arr_10 [i_2] [i_0])) ? (-3294865486036111412LL) : (arr_6 [i_0] [i_0] [i_0]))))));
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_0] [15LL]) : (17LL)))) ? (min((arr_2 [i_1] [i_1]), (arr_0 [i_0] [i_4]))) : (max((-6434921707327527076LL), (arr_6 [i_1] [i_1] [i_1])))))) ? (max((((long long int) arr_1 [i_1 + 1] [i_1 + 1])), (max((7936LL), (arr_8 [i_0] [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (-7804417806543155775LL) : (-5534907768694425615LL)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_2) : (arr_13 [i_0] [i_0] [i_2 + 2] [i_3] [i_0]))) : (((((/* implicit */_Bool) var_11)) ? (3294865486036111421LL) : (var_11))))));
                            }
                        } 
                    } 
                } 
                arr_15 [6LL] [i_0] = max((((((/* implicit */_Bool) ((long long int) var_10))) ? (((long long int) 2674569567033710879LL)) : (((long long int) -7804417806543155792LL)))), (max((((((/* implicit */_Bool) 2674569567033710879LL)) ? (-7932LL) : (var_4))), (((long long int) 6434921707327527061LL)))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 5534907768694425614LL)) ? (9223372036854775807LL) : (-9223372036854775804LL))))) ? (((((/* implicit */_Bool) max((9223372036854775800LL), (5534907768694425614LL)))) ? (((long long int) 65535LL)) : (((((/* implicit */_Bool) var_12)) ? (9223372036854775807LL) : (-8877995674543783322LL))))) : (((((/* implicit */_Bool) ((long long int) var_6))) ? (((long long int) var_10)) : (((long long int) -1LL)))));
    var_17 = ((/* implicit */long long int) min((var_17), (max((max((((long long int) var_8)), (((long long int) var_5)))), (max((((long long int) var_11)), (((((/* implicit */_Bool) 5534907768694425630LL)) ? (-1062178595500459130LL) : (6434921707327527076LL)))))))));
    var_18 &= ((long long int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((long long int) -7127742372776197840LL)) : (max((var_12), (var_8)))));
}
