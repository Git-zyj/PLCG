/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76089
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) var_10)) : (min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_12)))), ((+(((/* implicit */int) var_2))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(8388607U)))), (max((var_9), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52204))) == ((-(arr_9 [i_2] [i_1] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
                }
                for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_1 - 4] [i_1] [i_1 - 4] = (-(arr_3 [i_0] [i_3 - 2] [i_3 - 2]));
                        arr_19 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((arr_14 [i_1 + 1] [i_1 - 4] [i_3 - 3]) / (arr_14 [i_1 - 3] [i_1 - 4] [i_3 + 3])));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5] [i_3] [i_3])) ? (arr_16 [i_5] [i_4 - 3] [i_1 - 3] [i_0]) : (((/* implicit */unsigned long long int) -8778789479805853366LL))));
                            arr_23 [i_4] [i_4] [i_4] [i_0] [i_4] = ((/* implicit */int) arr_7 [i_4 - 3] [i_0] [i_4 - 2] [i_0]);
                        }
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_6) ? (((((/* implicit */_Bool) min(((unsigned short)37158), (((/* implicit */unsigned short) arr_7 [i_3 - 4] [i_1 - 1] [i_1] [i_0]))))) ? (((/* implicit */int) arr_8 [i_3 - 4] [i_0] [i_0] [i_1 - 3])) : ((~(((/* implicit */int) (unsigned short)28348)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned char)255))))))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    arr_28 [i_0] [i_6] = (!(arr_7 [i_0] [i_0] [i_6] [i_1]));
                    arr_29 [i_0] = ((/* implicit */unsigned long long int) var_10);
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_32 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)3))));
                    arr_33 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) 1073676288)))));
                }
                arr_34 [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)28367)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)28378)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((long long int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_6)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        arr_39 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_8] [i_8])) && (((/* implicit */_Bool) arr_35 [i_8] [i_8]))));
        arr_40 [i_8] = ((/* implicit */short) ((_Bool) arr_38 [i_8] [i_8]));
        arr_41 [i_8] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_8] [i_8])) - (((/* implicit */int) (unsigned short)16383))))));
        arr_42 [i_8] = ((/* implicit */long long int) arr_38 [i_8] [i_8]);
        arr_43 [i_8] = ((/* implicit */long long int) ((unsigned long long int) arr_36 [i_8]));
    }
}
