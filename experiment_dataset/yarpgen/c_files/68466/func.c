/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68466
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
    var_10 = ((/* implicit */long long int) max((var_6), (((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (var_5))))))));
    var_11 *= ((/* implicit */unsigned short) ((signed char) var_8));
    var_12 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = min((var_6), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)779)))));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)779)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_2 [i_1] [i_0]))))) : (min((((/* implicit */long long int) min(((short)767), (((/* implicit */short) (signed char)28))))), (0LL)))));
            }
        } 
    } 
}
