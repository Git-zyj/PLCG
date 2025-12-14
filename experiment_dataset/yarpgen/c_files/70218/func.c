/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70218
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_19))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_2] [i_2])), (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1] [(signed char)1] [i_0]))) : (58720256U)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_20 -= ((/* implicit */signed char) (-(max(((-(arr_10 [i_3] [0U]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-8)))))))));
        arr_13 [i_3] = var_14;
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (signed char)(-127 - 1))))))) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (short)26303))));
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_6 [i_4])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_4])))))))));
        var_22 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_6 [i_4])))) | (((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned short)37170))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 4; i_5 < 9; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        for (long long int i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            {
                                var_23 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5] [i_6] [i_5]))) : (2968034870U)))));
                                var_24 = ((/* implicit */signed char) ((unsigned short) var_3));
                            }
                        } 
                    } 
                    arr_32 [(signed char)5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7]))) + ((~(var_18)))));
                }
            } 
        } 
        arr_33 [i_5] = ((((/* implicit */_Bool) (unsigned short)27247)) ? ((~(4294967282U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_5]))));
        arr_34 [i_5] = ((/* implicit */signed char) (+(((var_18) & (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_5] [i_5 + 1] [i_5])))))));
        arr_35 [i_5 - 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_27 [i_5] [i_5 - 2] [i_5] [i_5])))) <= (((/* implicit */int) arr_11 [i_5 + 1]))));
        arr_36 [i_5 + 1] [i_5] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [6U] [i_5])))))));
    }
}
