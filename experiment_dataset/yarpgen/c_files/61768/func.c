/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61768
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (unsigned short)1);
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_6))));
                    var_20 = ((/* implicit */unsigned char) ((-1697179511) | (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    var_21 = ((/* implicit */int) (((((~(arr_5 [i_1]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))));
                    arr_8 [i_1] [i_0] [i_2] = ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || (((/* implicit */_Bool) ((short) 8370063752109111715ULL))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((((/* implicit */signed char) min((((((/* implicit */int) var_13)) < (((/* implicit */int) (short)-7356)))), (((var_15) > (((/* implicit */int) var_8))))))), (((signed char) var_16))));
}
