/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69566
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (~((-((-(arr_0 [i_0])))))));
                var_17 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
                var_18 = ((/* implicit */long long int) arr_3 [(short)8]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 4; i_2 < 21; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_2]))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) arr_6 [i_5]);
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_2]))));
                        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2]))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_6 [i_2 - 3]))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_3]))));
                        var_25 = ((/* implicit */unsigned char) arr_15 [i_2] [i_6] [i_4] [i_6]);
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_2 - 4] [i_3] [i_4] [i_6]))));
                        var_27 += (-(((/* implicit */int) arr_13 [i_4] [i_4] [i_3] [i_2])));
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_14 [i_2] [i_3] [i_4]);
                        var_29 = ((/* implicit */unsigned short) arr_13 [i_2] [i_3] [i_4] [i_4]);
                    }
                    var_30 = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) arr_5 [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 3) 
    {
        for (unsigned short i_9 = 1; i_9 < 7; i_9 += 3) 
        {
            {
                var_31 = ((/* implicit */long long int) arr_12 [i_8 - 2] [i_8] [i_8]);
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_9 [i_8 - 1] [i_9 + 4] [i_9]))));
                var_33 = ((/* implicit */long long int) arr_20 [i_9] [i_9] [i_8] [i_8]);
                var_34 = ((/* implicit */unsigned int) arr_22 [i_8]);
            }
        } 
    } 
    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+(var_11))))));
    var_36 = ((/* implicit */short) (+(-2431211477892754569LL)));
}
