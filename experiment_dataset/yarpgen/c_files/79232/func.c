/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79232
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
    var_10 = ((/* implicit */unsigned char) var_5);
    var_11 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) 1166089510U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) > (((/* implicit */int) ((((/* implicit */int) max((var_9), ((unsigned short)4)))) <= ((~(((/* implicit */int) var_9)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((arr_7 [i_2 + 2] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((arr_7 [i_0] [i_1] [i_2 - 1]) / (arr_7 [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] = ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [9U])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (2388520994538839960ULL)))));
                                var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11))));
                                var_14 = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
}
