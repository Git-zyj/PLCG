/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83432
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((var_5) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))) : (var_2))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_1))));
    var_18 ^= ((/* implicit */unsigned int) var_14);
    var_19 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((arr_2 [i_0 - 3]) >= (((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_0])))) || (((/* implicit */_Bool) arr_4 [i_0 - 3]))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18991))) : (6608645006020720689LL)))) ? (((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_1])))) >> (((arr_5 [i_0 - 1] [i_1]) - (1842529924126842095LL))))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
            }
        } 
    } 
}
