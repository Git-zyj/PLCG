/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60825
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
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 2]) - (arr_3 [i_0 - 1] [i_1 - 2] [i_1 - 1]))))));
                var_13 = ((/* implicit */unsigned char) (short)-5238);
                var_14 = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1])))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((var_3) / (((((/* implicit */long long int) var_6)) / (max((((/* implicit */long long int) var_1)), (var_3))))))))));
}
