/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78026
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3071710012U)) ? (-5805330081555626196LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(arr_2 [i_0])));
        var_21 = ((signed char) arr_2 [i_0]);
        var_22 = ((/* implicit */signed char) 5805330081555626195LL);
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            arr_7 [i_0] [i_1 - 1] |= ((/* implicit */signed char) max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])), (min((arr_0 [i_0]), (((/* implicit */long long int) var_14))))));
            arr_8 [i_0] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 5805330081555626195LL))) && (((/* implicit */_Bool) ((long long int) 2255243570U)))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_2])) <= (((/* implicit */int) arr_10 [i_2]))));
        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_2]))));
    }
}
