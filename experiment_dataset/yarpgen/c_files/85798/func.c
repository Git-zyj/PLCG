/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85798
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (short)-30858))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) min((var_16), (var_11)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (2130303778816ULL))) : (arr_9 [i_0] [i_0] [i_0])))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_18)))))) ? ((+(max((((/* implicit */int) (_Bool)1)), (arr_3 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (var_12)))))))));
                                var_22 ^= ((/* implicit */short) (+((-(6502777366344237018ULL)))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -672861333)) ^ (17151347495042739085ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_2)))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_7 [i_0] [i_1] [i_0] [i_1 - 1]))))) < ((~(12322661061183025902ULL)))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_8);
    var_26 &= ((/* implicit */short) (~(min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) 4140698467U)) ? (154268829U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
}
