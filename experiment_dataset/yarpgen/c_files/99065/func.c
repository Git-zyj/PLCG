/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99065
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
    var_16 = ((/* implicit */signed char) (~(min((((/* implicit */int) (short)-14349)), (300355005)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((short) ((unsigned long long int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)101)))));
                    var_18 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (300355005)))), (arr_6 [i_0] [i_0] [i_2] [i_1 + 1])))));
                }
            } 
        } 
    } 
}
