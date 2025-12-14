/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76589
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) && (((/* implicit */_Bool) -829195239))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(arr_2 [i_0] [i_0] [i_0])));
                arr_4 [i_1] [i_1] = ((/* implicit */short) ((min(((+(9223372036854775807LL))), ((~(arr_1 [(_Bool)1]))))) & (((/* implicit */long long int) var_10))));
            }
        } 
    } 
}
