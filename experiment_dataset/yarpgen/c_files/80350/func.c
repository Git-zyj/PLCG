/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80350
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
    var_11 = var_7;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) min((max((max((var_1), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) ((signed char) var_6))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [(signed char)12]))))))));
                    var_13 *= ((/* implicit */long long int) var_2);
                    var_14 |= ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (signed char)78)))));
                    var_15 = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((/* implicit */_Bool) var_7);
}
