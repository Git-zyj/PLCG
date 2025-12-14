/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87345
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-14598)), (var_13)));
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-14579))))) << ((((~(((/* implicit */int) (short)14614)))) + (14616)))));
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */short) (~(max((((/* implicit */int) (short)14598)), (arr_3 [i_0] [i_1] [4LL])))));
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_3);
}
