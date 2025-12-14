/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74655
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
    var_12 = ((/* implicit */unsigned char) var_4);
    var_13 = ((/* implicit */unsigned short) (~(((((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (28)))))));
    var_14 = ((/* implicit */long long int) var_5);
    var_15 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (((-(((((/* implicit */int) var_10)) + (var_2))))) | ((-(((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) var_3);
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */int) var_7);
                            arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_5);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
                            {
                                arr_17 [(signed char)7] [i_1] [i_4] [i_3 + 2] [i_3] [i_4 + 3] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_18 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1080378984))));
                                arr_19 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_11)));
                            }
                            for (unsigned long long int i_5 = 4; i_5 < 8; i_5 += 4) 
                            {
                                arr_23 [i_0] &= ((/* implicit */unsigned char) ((unsigned int) (signed char)-73));
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_5 + 4] &= var_9;
                                var_17 = ((/* implicit */unsigned int) var_3);
                            }
                        }
                    } 
                } 
                arr_25 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) -9056313009718651726LL);
                var_18 &= ((/* implicit */_Bool) var_3);
            }
        } 
    } 
}
