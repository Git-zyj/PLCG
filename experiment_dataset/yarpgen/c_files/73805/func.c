/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73805
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) max((var_8), (((/* implicit */unsigned char) var_7)))))) >> (((((3507557182U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) - (24701095U))))))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)57350))));
                }
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (short)3840);
                /* LoopNest 3 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (signed char i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            {
                                arr_17 [i_3] = ((/* implicit */unsigned short) (-((-((-(arr_13 [i_3] [i_3] [i_3] [i_5])))))));
                                var_22 = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                } 
                var_23 |= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_0] [i_1] [6U])))) - (((((/* implicit */int) arr_9 [i_0] [i_0] [i_1])) + (((/* implicit */int) arr_9 [(unsigned short)8] [(unsigned short)8] [i_0]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned char) ((short) var_14))))));
    var_25 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))));
}
