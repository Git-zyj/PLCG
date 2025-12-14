/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75387
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                var_11 = var_9;
                                var_12 = ((/* implicit */long long int) var_3);
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((((((/* implicit */int) var_3)) - (((/* implicit */int) var_6)))) - (var_8))) >> ((((~(((((/* implicit */int) var_1)) | (((/* implicit */int) var_9)))))) + (206))))))));
                            }
                            arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) (+((+((+(((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
                arr_15 [i_0] |= ((/* implicit */unsigned int) var_9);
                var_14 += ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) - (var_2))) >= (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_4)))))));
            }
        } 
    } 
}
