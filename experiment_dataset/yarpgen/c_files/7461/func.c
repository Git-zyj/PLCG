/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7461
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
    var_17 = ((/* implicit */_Bool) min((var_17), (var_15)));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    var_19 = ((/* implicit */_Bool) min((var_19), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [5LL] = ((/* implicit */signed char) ((3319050259U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 985285028U))))))));
                    var_20 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])) - (1)))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) var_6);
}
