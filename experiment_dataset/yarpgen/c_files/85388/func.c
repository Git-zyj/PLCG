/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85388
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
    var_13 = ((/* implicit */long long int) var_3);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_12))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (-(arr_1 [i_0 + 1])));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 524287U)) < (var_12)))) : (((/* implicit */int) ((4294443013U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) max((((/* implicit */long long int) ((short) 4294443008U))), (((long long int) ((int) arr_1 [i_1])))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [(short)7] [i_2] [i_3 - 2] [i_0] = ((var_2) % (((/* implicit */long long int) ((/* implicit */int) ((short) arr_7 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54959)) ? (var_7) : (((/* implicit */long long int) 524287U))))) <= (arr_5 [i_2] [i_3])));
                            var_18 = var_4;
                        }
                    } 
                } 
            } 
        }
        var_19 = ((/* implicit */unsigned long long int) var_8);
    }
    var_20 = var_2;
}
