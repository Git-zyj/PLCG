/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70335
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
    var_20 = var_19;
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 534773760U)), (0ULL)));
    var_22 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) min((var_14), (var_14)))) ? (var_11) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) > (534773760U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_23 = arr_4 [i_0];
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3 + 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_5 [i_1] [(unsigned char)2] [i_1]);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_2 [(unsigned short)19] [i_1])))) ? (((/* implicit */long long int) ((32256U) / (((/* implicit */unsigned int) 2147483647))))) : (var_8)))) ? (((/* implicit */unsigned long long int) var_17)) : (min((arr_0 [i_1 + 2] [i_2 + 1]), (((/* implicit */unsigned long long int) (unsigned char)235))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */long long int) min((1018385248575904730ULL), (((/* implicit */unsigned long long int) (unsigned char)10))));
                var_25 = ((/* implicit */int) var_8);
                var_26 ^= ((/* implicit */int) var_10);
            }
        } 
    } 
}
