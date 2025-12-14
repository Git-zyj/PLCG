/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92384
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) - (var_6)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
        var_17 = ((/* implicit */unsigned short) (-(var_8)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (3383369442U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_6 [i_2] |= ((/* implicit */signed char) (~((-(5969122836124213814LL)))));
            arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) var_7))));
        }
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (~(3383369442U)));
    }
}
