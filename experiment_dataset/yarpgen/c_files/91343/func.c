/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91343
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 5814797260222823383LL))))))) : (max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0]))))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_2] [i_0])), (arr_4 [i_0] [i_1] [i_2] [i_3]))))) / (max((((/* implicit */unsigned long long int) max((748698589), (((/* implicit */int) arr_9 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned short)4] [i_3])) ? (arr_11 [i_0] [i_4] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))))))));
                                var_17 &= ((/* implicit */unsigned int) arr_5 [(short)3] [i_1] [i_1]);
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_4])), ((-(((/* implicit */int) arr_4 [i_0] [i_3] [i_2] [i_0]))))))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24378)))))) : (min((arr_11 [i_0] [i_1] [i_2] [i_0] [(unsigned short)4]), (((/* implicit */unsigned long long int) arr_4 [i_4] [i_3] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) -748698612))))), (arr_3 [i_2]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) -748698608)) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))) > (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))), ((-((-(((/* implicit */int) var_13)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            {
                                arr_19 [i_2] [i_1] [i_5] [i_5] [i_1] [i_6] = ((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */int) max((arr_10 [i_0] [i_0] [i_2] [i_5 - 2] [i_6 + 1] [i_1]), (arr_10 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]))))));
                                var_20 = ((/* implicit */long long int) (+((-((+(748698612)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 4; i_7 < 18; i_7 += 2) 
    {
        for (int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (short i_9 = 1; i_9 < 17; i_9 += 3) 
            {
                {
                    arr_26 [i_8] [i_8] [i_8] [i_8] = min((((((/* implicit */_Bool) arr_25 [i_9] [i_9 - 1] [i_7 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9 - 1] [i_9 + 1] [i_7 + 1]))) : (var_3))), (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_7 - 1] [i_9 + 2] [i_7 - 1]))))));
                    arr_27 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (((((/* implicit */int) arr_23 [i_9 + 1] [i_7 - 3])) & (((/* implicit */int) arr_23 [i_9 - 1] [i_7 - 1])))) : ((-((-(((/* implicit */int) var_12))))))));
                    arr_28 [i_7] [i_7 - 3] [i_7] &= ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)149)) ? (arr_20 [i_9 + 1] [i_7 - 1]) : (arr_20 [i_9 + 2] [i_7 - 1]))), (min((arr_20 [i_9 - 1] [i_7 - 1]), (((/* implicit */unsigned int) 748698575))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) 
                    {
                        for (short i_11 = 3; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8] [i_9] [i_10])))))) - ((~((-(var_6)))))));
                                arr_33 [i_7 - 3] [i_8] [i_8] [i_9 + 2] [i_7 - 3] [i_8] [i_7] = ((/* implicit */_Bool) (-(759023537579542600LL)));
                                var_22 = ((/* implicit */int) (signed char)-112);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
