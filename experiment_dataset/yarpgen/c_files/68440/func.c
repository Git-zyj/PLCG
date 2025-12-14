/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68440
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
    var_15 = ((/* implicit */long long int) (+(var_8)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 |= ((((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0]))) | (((((/* implicit */_Bool) ((long long int) 0U))) ? (min((var_0), (arr_2 [7U] [i_0]))) : (((((/* implicit */_Bool) -18LL)) ? (var_7) : (22991533237635217LL))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) min((min((min((((/* implicit */long long int) var_6)), (var_0))), (8830778699368419237LL))), (8830778699368419237LL)));
                    arr_10 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (max((arr_8 [i_1]), (0LL))) : (max((arr_3 [12U] [12U]), (arr_4 [2LL])))))) ? (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) 482747110U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((4294967295U), (arr_6 [i_0] [3LL] [i_2])))) == (arr_3 [i_1] [i_1]))))));
                    var_17 = (+(((((/* implicit */_Bool) (-(var_14)))) ? (arr_0 [i_1]) : (arr_2 [i_0] [i_1]))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1943917939952623180LL)) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0]))), (((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_0]) - (900624126U))))))) ? (8850422924673489141LL) : (((((/* implicit */_Bool) -1LL)) ? (-8830778699368419244LL) : (((/* implicit */long long int) 137129189U))))));
    }
}
