/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63513
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 6; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)22895)) : (arr_10 [(unsigned char)7]))));
                                arr_11 [i_0] [i_1] [(signed char)4] [i_3] [3ULL] [i_4] [6] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_3)))), (max((((/* implicit */unsigned long long int) (short)-22895)), (10317877893243375330ULL)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */signed char) var_6);
}
