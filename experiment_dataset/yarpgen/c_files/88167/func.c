/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88167
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0 + 3] = ((/* implicit */short) max((arr_1 [i_1] [1LL]), (((/* implicit */long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                var_13 *= ((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1]);
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((min((((unsigned long long int) 8855719140740363214ULL)), (min((8855719140740363194ULL), (var_3))))) * (var_5))))));
    var_15 = ((/* implicit */unsigned int) var_11);
}
