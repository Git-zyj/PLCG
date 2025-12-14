/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98413
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 + 2]))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (~(arr_4 [i_1] [i_2] [i_2 + 1])));
                            arr_12 [i_2] = ((/* implicit */_Bool) (-(((var_11) & (666220680U)))));
                            var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 2] [i_2 + 1])) ? (arr_4 [i_0] [i_2 + 1] [i_2 + 2]) : (arr_4 [i_1] [i_2] [i_2 + 3])));
                            arr_13 [i_4] [i_3] [i_2] [i_2 - 2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_3]))))))) : (((((/* implicit */_Bool) arr_4 [(short)9] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2)))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) var_12);
                        arr_15 [i_0] [i_1] [i_2 + 3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((979753406) ^ (((/* implicit */int) arr_10 [i_0] [(unsigned short)3] [i_1 + 1] [i_2] [i_1 + 1] [i_2]))))) ? (((/* implicit */unsigned int) var_4)) : (arr_5 [i_0] [i_2 - 2])));
                    }
                    for (short i_5 = 3; i_5 < 8; i_5 += 4) 
                    {
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 2] [i_5 - 3] [i_2 + 1] [i_1 + 1]))) <= (arr_5 [i_2 - 2] [i_5 - 3])));
                        var_20 -= ((/* implicit */unsigned char) var_6);
                    }
                    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_19 [i_2]) < (3668368427U))))));
                        var_22 *= arr_9 [i_0] [i_1 - 1] [i_2 + 2] [(unsigned char)1] [i_1 - 2];
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) (signed char)-82);
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        arr_22 [i_7] &= ((/* implicit */unsigned long long int) var_4);
        arr_23 [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_7] [i_7]))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 4) 
        {
            {
                arr_29 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_27 [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_8] [i_9])) != (((/* implicit */int) (unsigned short)0)))))))) && (((/* implicit */_Bool) max((5625622534961776329LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_24 [i_8])) != (arr_25 [(unsigned short)2])))))))));
                arr_30 [i_8] [i_8] = ((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned short)65532)))), (979753410)));
                /* LoopNest 3 */
                for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        for (short i_12 = 3; i_12 < 10; i_12 += 3) 
                        {
                            {
                                arr_38 [i_12] [i_9] [i_10] [i_11] [i_12] [i_8] = ((/* implicit */signed char) max((arr_36 [i_9 - 4] [i_9 - 4] [i_10] [i_10] [i_11] [i_12 + 1]), (((/* implicit */unsigned long long int) (unsigned short)65527))));
                                arr_39 [(short)2] [i_9 - 4] [i_10] [i_11] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_8] [i_8] [(short)3] [i_12])) / (var_4)))) ? (((/* implicit */int) min((arr_33 [i_9] [i_10] [(unsigned char)5] [i_9]), (((/* implicit */unsigned short) arr_21 [i_8] [i_10]))))) : (((/* implicit */int) max(((unsigned short)3), (var_5)))))), (((/* implicit */int) arr_37 [i_8] [i_9 - 3] [i_9 - 3] [i_9] [i_8]))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)53243)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_8)) : (var_14)));
}
