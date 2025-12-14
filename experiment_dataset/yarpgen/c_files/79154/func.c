/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79154
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
    var_18 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_19 = ((18446744073709551615ULL) | (arr_10 [i_0] [i_0] [i_0] [i_0]));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1784118806U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27406)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25239))) : (2510848490U)))) : (4154767950527544965ULL)));
                            var_21 = ((/* implicit */unsigned long long int) (+(((arr_0 [(short)9]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))));
                            var_22 = ((/* implicit */unsigned int) var_12);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_23 += ((/* implicit */short) ((((arr_0 [i_0]) && (((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_2])))) ? (((/* implicit */unsigned int) 2147483647)) : (((arr_4 [i_2] [i_2]) >> (((-2147483642) + (2147483645)))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((long long int) (short)-27088)))));
                            arr_16 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */signed char) 2510848489U);
                        }
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (+(var_14)));
                            arr_19 [i_2] [i_1] [i_6] [i_3] [i_6] [i_2] [i_2] = 1784118806U;
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_6 + 1])) ? (arr_4 [i_6 + 1] [i_6 - 1]) : (2510848489U)));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((unsigned int) 8948250760986245495ULL)))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */short) var_14);
                            var_28 = ((/* implicit */int) var_10);
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_7])) ? (arr_10 [i_0] [i_3] [i_2] [i_2]) : (9763665080154034670ULL)));
                        }
                        for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_28 [i_2] [i_1] [i_2] [i_3] [i_8] = ((/* implicit */short) ((((/* implicit */int) (short)-3081)) != (((/* implicit */int) (short)16583))));
                            arr_29 [i_8] [i_1] [i_2] [i_2] [i_8] &= ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2510848492U)));
                            var_30 = ((/* implicit */int) 1784118808U);
                        }
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            arr_32 [i_2] = ((unsigned long long int) arr_15 [i_0] [i_2] [i_1] [i_2] [i_9]);
                            var_31 -= ((/* implicit */signed char) arr_0 [i_9]);
                        }
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */short) var_13);
        arr_33 [i_0] = ((arr_4 [i_0] [i_0]) & (var_14));
        var_33 = ((/* implicit */int) var_2);
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-17)))))));
    }
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 2) 
        {
            {
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) min((((/* implicit */int) (short)0)), (((((/* implicit */_Bool) (unsigned short)12403)) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) arr_22 [i_10] [i_10] [i_10] [i_11] [i_11])))))))));
                var_36 = ((/* implicit */unsigned short) (+((-2147483647 - 1))));
                arr_39 [i_10] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (arr_9 [i_10] [i_10] [i_10] [i_10] [i_11] [i_10]) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))));
                var_37 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)7)) << (((((/* implicit */int) (short)3084)) - (3066)))));
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) var_1);
}
