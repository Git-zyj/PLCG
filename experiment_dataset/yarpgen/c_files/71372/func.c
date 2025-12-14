/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71372
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
    var_17 = var_11;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((((((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [16ULL] [i_0] [i_1]))))) >= ((+(var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_11));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((_Bool) (unsigned short)45770)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) var_1)), (var_12))))))));
                var_19 = ((/* implicit */unsigned short) var_11);
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((unsigned int) var_15));
            }
        } 
    } 
}
