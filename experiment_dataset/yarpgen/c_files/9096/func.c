/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9096
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) * (((long long int) ((long long int) var_5)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_10);
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) var_8);
                    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)45)), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) arr_2 [6ULL] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_12))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) arr_1 [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_8);
}
