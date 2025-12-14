/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59234
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_5 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_7 [(short)6] [4ULL] [i_2] [i_3])))) << (((((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) arr_9 [i_3] [i_1] [i_1] [i_0]))))) - (216)))))), (((arr_8 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1]) << (((arr_8 [(unsigned char)13] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2]) - (620771041U))))))))));
                                arr_12 [(_Bool)1] [i_1] [0U] [(_Bool)1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_2 - 1] [i_3] [i_2 - 1] [i_2 - 1]) || (((/* implicit */_Bool) arr_9 [i_1] [i_1] [10ULL] [(short)6])))))) != (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_4])))), (((((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_2] [i_2 - 1])) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [(_Bool)1] [i_1] [i_1] [i_2] [(_Bool)1] [i_4])), (arr_2 [i_0] [i_1] [i_4])))) - (6199)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) || (((/* implicit */_Bool) arr_3 [i_0]))))) >= (((/* implicit */int) min((arr_9 [i_1] [i_2 - 1] [i_2 - 1] [(unsigned char)7]), (arr_10 [i_1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                    var_20 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_10 [i_1] [i_1] [(_Bool)1] [i_2 - 1] [i_1])), (arr_8 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_2 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [(unsigned char)13])) << (((max((((/* implicit */unsigned int) arr_10 [i_1] [(unsigned char)1] [(short)2] [i_0] [i_1])), (arr_8 [(unsigned short)1] [i_1] [i_1] [i_2] [i_2] [i_2]))) - (620771049U))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_8))))), (min((((/* implicit */long long int) var_0)), (var_4))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_16))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_0))));
}
