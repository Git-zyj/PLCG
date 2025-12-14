/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58791
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((((/* implicit */_Bool) 9493398423313397648ULL)) ? (((/* implicit */int) max((arr_2 [i_2 - 3]), ((_Bool)0)))) : (((/* implicit */int) (signed char)98)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max((((max((((/* implicit */unsigned long long int) var_0)), (9493398423313397648ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-1661991970)))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned short)7418)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) var_0))))))))))));
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) - (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))))))));
                                var_13 = ((/* implicit */_Bool) min((var_13), ((_Bool)0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3557727833U)))) ? (((/* implicit */unsigned long long int) ((((_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)123))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)103))))) : (((unsigned long long int) var_3))))));
    var_15 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) (unsigned short)63488)), (6434472578532543021ULL)))))));
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
}
