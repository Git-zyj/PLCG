/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89368
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) (+((-(((/* implicit */int) var_3))))))) > (max((max((var_8), (((/* implicit */long long int) (unsigned char)36)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)110)) >= (((/* implicit */int) (unsigned char)110)))))))));
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) max((arr_5 [i_1 + 1] [i_1]), (var_2)))) : (((/* implicit */int) ((var_5) < (((/* implicit */int) arr_5 [i_1 + 1] [i_1])))))));
                    var_18 = (~((~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_19 = var_5;
}
