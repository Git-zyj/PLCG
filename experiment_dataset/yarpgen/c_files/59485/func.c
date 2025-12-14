/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59485
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) var_3);
                    var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? ((+(arr_5 [i_2]))) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_9))));
                    var_13 = ((/* implicit */short) var_2);
                    arr_8 [i_0] [i_0] [(short)11] [i_2] = ((/* implicit */int) min(((+(13399040725311725276ULL))), (((/* implicit */unsigned long long int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) arr_3 [i_2 + 1] [i_2 - 1] [i_1 + 1]))), (var_0)));
                                arr_15 [i_0] [i_1 + 3] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16168))) > (9ULL))), (((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)-16168))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_8)), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((long long int) min((6ULL), (((/* implicit */unsigned long long int) var_9))))))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((long long int) var_9)), (((/* implicit */long long int) (-((+(((/* implicit */int) var_8))))))))))));
}
