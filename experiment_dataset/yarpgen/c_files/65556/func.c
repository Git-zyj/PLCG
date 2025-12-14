/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65556
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), ((-(((/* implicit */int) var_4))))))), (min((var_2), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-32749)), (1864044790))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [1] |= ((/* implicit */long long int) arr_2 [i_0] [0ULL]);
                var_17 = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) ((_Bool) (short)32749))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32749)) ? (-1191112338388819247LL) : (((/* implicit */long long int) ((((((/* implicit */int) min(((short)-32752), ((short)32755)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1813553287586560013LL))))))))));
            }
        } 
    } 
}
