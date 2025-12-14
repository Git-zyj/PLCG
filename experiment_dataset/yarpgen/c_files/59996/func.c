/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59996
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [(short)4] [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_10 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_0)) + (((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_2]))))));
                    var_11 |= ((/* implicit */int) arr_0 [i_0] [i_0]);
                }
                for (short i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_12 = ((/* implicit */short) ((arr_6 [i_4] [i_3 - 1] [i_1]) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_4 + 1])) : (((/* implicit */int) var_6)))))));
                        var_13 |= var_0;
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_5] [i_0] [(signed char)15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_5 - 2])))))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_3 - 3] [i_3 - 1] [i_5 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_3 - 3] [i_5])))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_1] [i_3 - 1] [i_5] [i_6]))))) : (((unsigned int) -2147483640)))))))));
                                var_15 = ((/* implicit */short) arr_18 [(signed char)11] [i_5] [i_3] [i_3 - 2] [(unsigned short)1] [i_6]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))))) : ((-(var_1)))));
    var_17 = var_8;
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))));
}
