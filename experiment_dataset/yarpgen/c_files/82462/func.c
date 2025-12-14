/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82462
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
    var_15 = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (var_1)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : ((-((-(arr_0 [(unsigned short)11])))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))))))))));
        var_17 = arr_0 [i_0 - 1];
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) arr_4 [i_1]);
                    var_19 = ((/* implicit */unsigned char) (+((+(764910743U)))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1] [i_1]))))));
                        var_21 = ((/* implicit */unsigned int) arr_7 [i_1]);
                        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    }
                    for (unsigned int i_5 = 4; i_5 < 16; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_2] [6U] [i_3] [(unsigned short)10]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3])))))));
                        var_24 -= ((/* implicit */unsigned short) var_10);
                        var_25 -= ((/* implicit */unsigned char) (-((+(arr_10 [i_1] [i_2] [i_3 + 1] [i_3] [i_5 - 2])))));
                    }
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_8))))));
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1])))));
        arr_16 [i_1] [(unsigned short)11] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    }
    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_17 [i_6] [i_6]))))));
        var_28 = ((/* implicit */long long int) arr_17 [i_6] [i_6]);
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            arr_23 [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) arr_17 [i_7] [i_7]);
            arr_24 [i_7] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_18 [i_7])))))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                arr_27 [i_6] [i_7] = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) arr_17 [i_7] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_7])))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_21 [i_6] [i_7])) : (var_1)))))));
                /* LoopNest 2 */
                for (signed char i_9 = 1; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            arr_33 [18U] [i_7] [18U] [i_7] [i_7] [i_9 - 1] [18U] |= ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [(unsigned char)8] [(unsigned char)8]))))))));
                            var_29 |= ((/* implicit */unsigned char) var_13);
                            arr_34 [i_6] [i_6] [i_6] [24U] |= ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                arr_35 [i_7] [i_6] = ((/* implicit */unsigned char) arr_26 [i_6] [i_7] [i_6]);
                var_30 = ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] [15LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : (arr_21 [i_6] [i_8])))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_6] [i_7] [i_8] [i_12]))))) : (((/* implicit */long long int) (+(var_3))))))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 900660248U)) ? (3042971842U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169)))));
                            arr_40 [i_6] [i_7] [i_8] [i_11] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7])) ? ((~((+(((/* implicit */int) arr_32 [i_6] [i_7] [i_8] [20U] [i_11] [i_11] [i_12])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        }
                    } 
                } 
            }
            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (arr_21 [i_6] [9LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6] [i_7])))))))))));
        }
        var_34 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_25 [i_6] [12U]))))) ? ((-(var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_7)))) ? ((~(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) (unsigned char)91))))))));
        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(2680707619U)))))))));
    }
    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (~((+(var_5))))))));
}
