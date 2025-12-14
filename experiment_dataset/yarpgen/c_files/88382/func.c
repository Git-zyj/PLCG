/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88382
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
    var_15 = ((/* implicit */long long int) (unsigned short)65518);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((unsigned int) min((17411857646053802391ULL), (((/* implicit */unsigned long long int) 1289358403)))));
                arr_6 [i_0] [i_1] [i_1 - 1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((unsigned int) 32767ULL))) : (6945386795974102953ULL))), (((/* implicit */unsigned long long int) ((2040205382371857638LL) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))))))));
                var_16 = ((/* implicit */unsigned int) ((long long int) 131071U));
            }
        } 
    } 
}
