/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62680
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0]))))) >= (((/* implicit */int) min((arr_5 [i_0] [i_0] [i_2] [i_2]), (arr_5 [i_0] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 += min((arr_5 [i_4] [i_2] [i_1] [(_Bool)1]), (arr_5 [i_0] [i_0] [i_0] [i_4 + 1]));
                                arr_11 [i_2] = ((/* implicit */signed char) min((arr_7 [i_0] [i_0] [i_2] [i_3] [i_4]), (((/* implicit */unsigned long long int) ((arr_7 [i_4 - 3] [i_2] [i_3 - 1] [i_2] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_1)))))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) var_16)), (arr_1 [i_0])))) >= (arr_0 [(unsigned short)4]))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_9 [i_0] [(signed char)2] [i_2] [i_1] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) ((arr_7 [i_0] [i_1] [i_2] [i_1] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_16 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_13 [i_1] [i_2] [i_1] [i_1]))));
                        var_24 = ((/* implicit */_Bool) var_7);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_15))));
}
