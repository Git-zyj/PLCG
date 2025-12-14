/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89579
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
    for (long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((var_2) * (((/* implicit */int) max((arr_2 [i_0]), (var_6))))))) % (((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) max((1032059494), (1032059494)))))))))));
                var_21 = ((/* implicit */signed char) (!(((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
    var_22 &= ((/* implicit */short) ((unsigned int) (short)-18708));
}
