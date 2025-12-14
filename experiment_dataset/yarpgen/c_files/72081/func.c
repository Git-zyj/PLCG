/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72081
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
    var_19 = ((/* implicit */unsigned long long int) var_16);
    var_20 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)59054))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned short)6482)) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((2962497833U), (((/* implicit */unsigned int) (unsigned char)218))))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0] [i_1]))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
            {
                arr_11 [5U] [(signed char)8] [16] [i_0] = ((/* implicit */unsigned char) var_15);
                arr_12 [i_1] [i_0] = ((/* implicit */long long int) var_5);
                arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))));
            }
            for (signed char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                arr_18 [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_1 [i_0])));
                arr_19 [i_0] [10ULL] [i_0] = ((((unsigned int) arr_6 [i_0] [i_0] [i_3])) * (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (2962497835U) : (arr_6 [i_3] [4ULL] [4ULL]))));
                arr_20 [(unsigned short)8] [8U] [8ULL] [i_3] = ((/* implicit */_Bool) ((arr_1 [i_0]) ^ (arr_1 [i_0])));
            }
            arr_21 [i_0] [i_0] = ((/* implicit */signed char) (+(var_2)));
        }
        for (short i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            arr_24 [i_4] [i_0] [11U] = ((/* implicit */unsigned int) (-(max((max((var_18), (((/* implicit */unsigned long long int) (unsigned short)7)))), (((/* implicit */unsigned long long int) arr_6 [(short)8] [i_4] [i_4]))))));
            arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_0])), (var_18)))) ? (((/* implicit */int) ((_Bool) (unsigned short)3968))) : (((/* implicit */int) max((arr_16 [i_0] [i_4]), (((/* implicit */unsigned short) arr_0 [i_0] [(signed char)17])))))))) ? (((/* implicit */int) ((arr_1 [(_Bool)1]) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_23 [i_4 - 1] [i_4 - 1] [i_4 + 1])))))));
            arr_26 [4U] = ((/* implicit */_Bool) min((((/* implicit */int) ((short) arr_22 [i_4 + 2] [i_4 + 2]))), ((~(((/* implicit */int) (unsigned short)7))))));
        }
    }
    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_32 [i_5] = ((/* implicit */int) var_3);
            arr_33 [i_5] = ((/* implicit */unsigned short) ((unsigned int) (~(var_3))));
        }
        arr_34 [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_5)))))))), (max((((((/* implicit */_Bool) (unsigned short)3957)) ? (((/* implicit */long long int) var_13)) : (arr_30 [i_5] [i_5]))), (((/* implicit */long long int) arr_31 [i_5] [i_5]))))));
        arr_35 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5]))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
        arr_36 [i_5] = ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */int) arr_27 [i_5])) : (((/* implicit */int) arr_27 [i_5]))));
    }
}
