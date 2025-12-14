/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78557
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] = min((((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (arr_6 [i_3 - 1]) : (arr_6 [i_3 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_0])), (arr_6 [i_1 + 1]))))))));
                                arr_12 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_3 - 1] [i_0] = ((/* implicit */unsigned short) arr_8 [i_1]);
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) min((((unsigned int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-14280)))))));
                                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) min((arr_2 [i_0] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) arr_8 [i_0]);
                    arr_14 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)223))))) : (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_1 + 2] [i_0])))))))));
                    arr_15 [i_0] = ((/* implicit */signed char) min((-9210094964177043622LL), (((/* implicit */long long int) 3042390964U))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7384))))))))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+((+(min((var_17), (((/* implicit */long long int) var_5)))))))))));
}
