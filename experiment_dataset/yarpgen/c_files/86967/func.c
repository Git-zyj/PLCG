/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86967
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */long long int) 4294967291U)) : (4014251559479285401LL))), (((/* implicit */long long int) var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned short) ((((unsigned int) min((var_6), (((/* implicit */unsigned int) (unsigned short)65512))))) <= ((+(9U)))));
                                var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 14U)) || ((_Bool)1)))), ((unsigned short)65535))))));
                                var_13 = ((/* implicit */unsigned int) max((((var_1) / (var_1))), (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_10 [i_1 - 2]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [(short)0] &= ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65500)))), (var_6)))));
                }
            } 
        } 
    } 
}
