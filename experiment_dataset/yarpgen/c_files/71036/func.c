/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71036
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
    var_10 -= (unsigned char)196;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [(signed char)8] [i_4] [i_0] [i_0] = var_2;
                                arr_13 [i_0] [(unsigned char)9] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_9)))) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) min(((short)2752), ((short)-2754))))));
                                var_11 = ((/* implicit */int) ((var_4) * (((/* implicit */long long int) ((unsigned int) var_0)))));
                                var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((short)2754), (((/* implicit */short) var_0)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) var_8)), (524032))) : (((((/* implicit */_Bool) (short)2761)) ? (1763289880) : (((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (signed char i_6 = 4; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] = ((/* implicit */signed char) var_1);
                                arr_20 [0LL] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */signed char) max((1103876265), (((/* implicit */int) (short)-2759))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_6)))));
                }
            } 
        } 
    } 
}
