/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86570
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
    var_10 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [i_1 - 1] [i_0] [i_0] |= ((/* implicit */unsigned short) var_7);
                    var_11 += ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned int) 1957011169)), (arr_6 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_2]))));
                    arr_11 [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) & (0ULL))), (((/* implicit */unsigned long long int) ((short) -1073734656)))));
                    arr_12 [i_0] [(unsigned char)8] [i_0] [i_2] = ((/* implicit */_Bool) var_9);
                }
            } 
        } 
    } 
}
