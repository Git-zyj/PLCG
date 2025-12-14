/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78105
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 3] [i_0 + 2])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((int) ((((_Bool) var_4)) ? ((~(var_6))) : ((~(var_2))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                            }
                            for (int i_5 = 4; i_5 < 15; i_5 += 2) 
                            {
                                arr_21 [i_0] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_8 [i_0] [i_3] [i_5 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5 + 1] [i_1]))))) * (((/* implicit */unsigned int) var_7))))));
                                var_10 = (!(((/* implicit */_Bool) ((int) arr_12 [i_5 - 1] [i_1 + 1] [i_1 - 3] [i_0 - 1] [i_1 + 1]))));
                                arr_22 [i_0 + 1] [i_1] [15] [i_0] [(signed char)14] = ((/* implicit */long long int) var_7);
                            }
                            arr_23 [i_0] [i_1 + 2] [i_2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_3] [i_1] [i_1])), (var_7)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [(unsigned char)15] [i_3] [7] [i_3]))) * (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                        }
                    } 
                } 
                arr_24 [i_1] [i_1 - 3] [i_0] = ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_1])), (var_4))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_1))))))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_0 + 3] [i_1 - 1] [i_0] [i_1 + 2])))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_29 [i_1 - 1] [i_0] = ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned long long int) var_5))));
                            var_11 = ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
    var_13 = ((/* implicit */unsigned long long int) var_8);
    var_14 = ((/* implicit */unsigned char) var_8);
}
