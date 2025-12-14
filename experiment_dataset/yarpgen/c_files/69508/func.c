/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69508
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) ((2353663380U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-26472)))));
        var_13 = ((/* implicit */int) max((var_13), ((+(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (2147483647)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (short)-8))))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0] [i_0])))))) ? (min((min((2594207034U), (((/* implicit */unsigned int) -2044502473)))), (3343272934U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (short)20009)) : (-2147483647)))));
            arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */short) ((min(((-(1152921504606846848ULL))), (((/* implicit */unsigned long long int) max((275540168U), (((/* implicit */unsigned int) (_Bool)1))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525)))));
        }
    }
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((-2147483647), (((/* implicit */int) var_8)))) : (((/* implicit */int) var_0))))) ? (((min((-2147483647), ((-2147483647 - 1)))) - (((((/* implicit */int) (unsigned short)52878)) - (2147483640))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) 3457024801U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 21U))))) : (min((((/* implicit */int) (_Bool)1)), (2147483647))))));
}
