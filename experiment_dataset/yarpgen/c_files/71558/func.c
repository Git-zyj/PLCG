/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71558
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)3584)) / (((/* implicit */int) var_11)))) + (((var_2) - (((/* implicit */int) var_11))))))), (8226350865575598891ULL));
                arr_6 [i_0] [12ULL] [i_0] = ((/* implicit */unsigned int) (~(((((((/* implicit */int) (short)-3)) + (2147483647))) >> (((/* implicit */int) ((unsigned char) (short)3595)))))));
                arr_7 [i_0] [7] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_6);
}
