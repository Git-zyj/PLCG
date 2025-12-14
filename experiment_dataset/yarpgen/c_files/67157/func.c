/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67157
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = var_4;
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (var_12)))))), ((~(((/* implicit */int) (unsigned short)496))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */long long int) min((max(((~(1376531957U))), (((/* implicit */unsigned int) ((short) var_7))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_1))))))));
}
