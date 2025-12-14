/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65802
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
    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_15))))) & (((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3584))) + (32767ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (+(var_3)));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)115)) || (((/* implicit */_Bool) 0LL))))))))));
                var_20 = ((/* implicit */signed char) ((var_4) / (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_3] [i_1 + 2] [i_0])) != (max((((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (short)29488)) : (((/* implicit */int) (unsigned char)254)))), ((+(((/* implicit */int) var_2))))))));
                            var_21 ^= var_2;
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((var_15) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_0 [i_1]))))))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3])));
                            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
