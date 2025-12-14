/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8374
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
    var_20 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_2 - 2] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1]))))) << (((((/* implicit */int) var_15)) - (42406)))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_4 - 3])) ? (((/* implicit */int) arr_8 [i_4 - 1] [i_1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_4 + 1] [i_3] [i_1] [i_0 + 1])))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_7 [i_0 + 2] [i_1] [i_0 + 2]))));
                            }
                        } 
                    } 
                    var_23 = arr_3 [i_0 - 1] [i_0 + 1] [i_0];
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_5] [i_5] [i_1] [(unsigned char)2])) / (((/* implicit */int) arr_8 [i_5] [i_0 - 1] [i_0 - 1] [i_0]))))) || (((/* implicit */_Bool) min((arr_8 [i_5] [i_1] [i_0 + 2] [i_0 + 2]), (arr_8 [i_5] [i_1] [i_1] [i_0]))))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_1 [i_0 + 1]))));
                    var_25 = ((/* implicit */unsigned char) (+(max((arr_7 [i_0 + 2] [i_0 - 1] [i_0 - 1]), (arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1])))));
                }
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_0 + 2] [i_0 + 1]), (max((((/* implicit */long long int) arr_11 [i_1] [i_1] [i_0 - 1] [i_0])), (var_3)))))) ? (((/* implicit */int) arr_19 [i_0] [15LL] [i_6])) : (((/* implicit */int) arr_8 [i_6] [2] [i_1] [i_0 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                        var_27 = (short)14717;
                        var_28 = ((/* implicit */long long int) (unsigned char)145);
                    }
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_6] [i_1] [i_0])))))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_15 [i_0] [i_8] [i_8] [i_6] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_12 [i_8] [i_6] [i_1])) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_2 [i_6] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_27 [i_8] [i_6] [i_1] [i_0 - 1])))))));
                        var_30 = ((/* implicit */short) max((((/* implicit */long long int) var_19)), ((((-(arr_14 [i_1] [i_6] [i_6] [i_1] [(unsigned char)15]))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    }
                }
                arr_32 [i_1] [i_1] = arr_19 [i_0] [i_1] [i_0 + 2];
            }
        } 
    } 
}
