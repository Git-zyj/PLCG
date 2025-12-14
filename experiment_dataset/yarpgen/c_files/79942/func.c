/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79942
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1 + 1]))));
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned char)4), (((/* implicit */unsigned char) (_Bool)1))))), (max((18446744073709551607ULL), (14ULL))))))));
                }
            } 
        } 
    } 
    var_21 = var_19;
    var_22 = ((/* implicit */unsigned char) ((max((min((var_10), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_16))))))) % (max((((/* implicit */unsigned int) var_6)), (((var_10) << (((var_8) - (14048063040525145452ULL)))))))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 15882677370480941500ULL))));
}
