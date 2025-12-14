/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80400
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
    var_19 = ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_17)));
    var_20 = ((/* implicit */unsigned long long int) var_14);
    var_21 = ((/* implicit */int) (short)5032);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1835311569653678457ULL)) ? (((/* implicit */unsigned long long int) ((int) var_14))) : (max((arr_6 [i_0]), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8343183467990820750ULL)))))) : (((unsigned long long int) (unsigned short)51970))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-5033)))))));
                    var_23 ^= ((/* implicit */unsigned int) ((unsigned long long int) max((arr_5 [i_0 + 2] [i_0 + 2] [i_2 + 1]), (arr_5 [i_0 - 2] [i_1] [i_2 - 1]))));
                    var_24 = ((/* implicit */unsigned char) (short)-5029);
                }
            } 
        } 
    } 
}
