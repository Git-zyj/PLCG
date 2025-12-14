/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61428
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
    var_10 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((arr_4 [(unsigned short)2] [i_1]), (((/* implicit */unsigned short) var_4))))))))));
                arr_7 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((arr_2 [i_0 + 4] [i_0 + 2]), (((/* implicit */long long int) (+(var_8))))))), (max((arr_5 [i_0 + 3] [i_0 + 2]), (((/* implicit */unsigned long long int) var_0))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */short) arr_9 [i_0] [i_3 + 1] [i_0]);
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                                arr_18 [i_1] [i_1] [(unsigned char)21] [19] [i_1] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_4])));
                                arr_19 [i_0 + 3] [i_1] [i_2] [i_3] [(signed char)2] = ((/* implicit */unsigned short) arr_8 [i_2] [i_3 - 1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0 + 1]))))), (arr_13 [i_0]))))));
                            arr_24 [i_0] [i_5] [i_0] [i_6] = ((/* implicit */signed char) var_2);
                            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            arr_25 [i_0] [i_5] [i_5] [i_6] = arr_12 [i_0 + 2] [i_0 + 2] [i_5] [i_6 - 2];
                        }
                    } 
                } 
            }
        } 
    } 
}
