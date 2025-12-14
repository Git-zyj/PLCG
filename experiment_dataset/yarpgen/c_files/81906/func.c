/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81906
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (6266291682872713835LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))))));
                arr_4 [i_1] &= ((/* implicit */signed char) 3442582216678489333ULL);
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) ((unsigned short) (((~(1564313505687514443LL))) & (((/* implicit */long long int) ((/* implicit */int) var_9))))));
    var_20 ^= ((/* implicit */int) var_5);
}
