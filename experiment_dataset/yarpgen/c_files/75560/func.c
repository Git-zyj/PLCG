/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75560
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 -= (~(((((arr_3 [i_1 - 2] [i_1 + 2] [i_1 - 2]) + (2147483647))) >> (((3000295702425092313ULL) - (3000295702425092304ULL))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_1 - 3] [i_0])))) ? (((((/* implicit */_Bool) min((2LL), (((/* implicit */long long int) 4051666666U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)13535))))) : (((((/* implicit */int) arr_2 [(_Bool)1] [i_0] [i_0])) + (((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8739698011590657508ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 3]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((((4051666669U) >> (((((/* implicit */int) (short)32763)) - (32746))))) >> (((min((3396928503U), (((/* implicit */unsigned int) (unsigned char)135)))) - (123U))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_19 |= ((/* implicit */long long int) var_7);
}
