/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74205
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
    var_13 = ((/* implicit */long long int) ((short) 21742920U));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) (short)-722);
                    var_14 = ((/* implicit */long long int) min((max((((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((4641484563382612862LL) < (((/* implicit */long long int) var_9))))))), (((/* implicit */unsigned int) (~(((int) 4641484563382612883LL)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((unsigned int) (+(((((/* implicit */unsigned long long int) var_5)) + (var_3))))));
}
