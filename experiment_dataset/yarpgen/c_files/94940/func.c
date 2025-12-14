/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94940
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
    var_14 = ((/* implicit */unsigned int) 1550579265);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_0 + 1])), (1225533128U)));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (-(((unsigned long long int) arr_8 [i_0 + 1] [i_0 + 2]))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? ((~(arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0 + 1]))) : (((/* implicit */long long int) (-(3236999351U)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */signed char) min((((((((/* implicit */int) (short)-15282)) + (2147483647))) >> (((((/* implicit */int) (short)15293)) - (15283))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5 + 1])) && (((/* implicit */_Bool) arr_2 [i_5 - 1])))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 2] [i_0] [i_0])) || (((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_16 [i_0 - 1] [i_0] [8ULL] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), ((~(((/* implicit */int) var_0))))));
                            var_22 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_10]))) > (444576546U))) ? (((((/* implicit */_Bool) arr_19 [(unsigned short)3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [10U])))) : ((~(((/* implicit */int) var_4))))))), (((unsigned int) var_5))));
                            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [12U])) ? (((/* implicit */unsigned int) arr_24 [i_8] [i_9] [i_10])) : (arr_19 [i_7])))) ? ((-(((/* implicit */int) (signed char)-98)))) : ((-(((/* implicit */int) (unsigned char)46)))))), (((((((/* implicit */int) ((signed char) (unsigned char)218))) + (2147483647))) << (((((/* implicit */int) ((short) (unsigned char)218))) - (218)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7] [i_7]);
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)98)), ((short)-2950))))) - (((((/* implicit */_Bool) (+(-1)))) ? (min((((/* implicit */long long int) arr_20 [(signed char)0])), (arr_23 [i_7]))) : (((/* implicit */long long int) arr_19 [i_7])))))))));
                            var_26 = ((/* implicit */signed char) max((arr_19 [i_7]), (((/* implicit */unsigned int) arr_26 [i_7] [i_8] [i_7] [9]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    for (long long int i_14 = 1; i_14 < 16; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_26 [i_7] [i_13] [(signed char)12] [(signed char)12]))));
                                var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))), (((((/* implicit */unsigned long long int) 1775397466U)) + (min((var_13), (((/* implicit */unsigned long long int) arr_24 [i_15] [i_14] [i_7]))))))));
                                arr_40 [i_7] [i_7] [i_7] [i_7] [i_15] = ((/* implicit */unsigned char) ((((arr_21 [i_14 + 2]) == (arr_21 [i_14 + 2]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)37))))) : (((((/* implicit */_Bool) arr_21 [i_14 + 1])) ? (arr_21 [i_14 - 1]) : (arr_21 [i_14 + 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 *= ((/* implicit */unsigned short) var_2);
}
