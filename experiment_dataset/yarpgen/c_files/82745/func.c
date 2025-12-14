/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82745
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
    var_10 = ((/* implicit */_Bool) var_5);
    var_11 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                var_13 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_9))) ? (min((((/* implicit */int) (unsigned short)53971)), (arr_3 [i_0] [i_0 - 1]))) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1] [i_0 + 1]))))) ? (max(((~(((/* implicit */int) (unsigned char)35)))), ((-(((/* implicit */int) var_6)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (unsigned char)35)))))))))))));
                var_15 ^= var_3;
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) 4227423330U)))))));
                                arr_10 [i_0] [i_3] [i_0] [15ULL] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                                var_17 += ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_1 [i_0])), (((arr_3 [i_0 + 1] [i_0]) >> (((67543966U) - (67543960U)))))))));
                                arr_11 [i_3] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                                var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 4227423329U)) ? (67543965U) : (((/* implicit */unsigned int) 854744857))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
