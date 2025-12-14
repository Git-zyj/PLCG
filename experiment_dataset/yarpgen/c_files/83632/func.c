/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83632
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((var_9) ^ ((+(4000015806U))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53865))))))));
                                var_16 &= ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((unsigned short) ((((/* implicit */int) ((unsigned short) var_9))) + (((/* implicit */int) (unsigned short)9432))));
                }
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((unsigned long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53865))) / (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_13))))))));
}
