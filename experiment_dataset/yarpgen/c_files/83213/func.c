/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83213
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
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) var_10))))), (var_14)));
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_17))))) ^ (((/* implicit */int) var_2))));
    var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) && (((/* implicit */_Bool) var_17))))), (arr_2 [i_1 + 2])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 2] [i_1 - 2])))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [(signed char)7] [i_1 + 3] [i_3])) ? ((+(((/* implicit */int) arr_1 [i_1] [i_2])))) : ((+(((/* implicit */int) (short)(-32767 - 1)))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1223177197U)) ? (var_14) : (((/* implicit */unsigned long long int) 4116765727U)))))))));
                        var_25 = (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 + 1] [(unsigned short)2] [i_1] [(unsigned short)2]))) & (arr_4 [i_1 - 2]))));
                    }
                    arr_15 [i_2] [0] [0] = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2]))))) / (((unsigned int) (short)32)));
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */short) arr_19 [i_5] [i_5] [i_5] [i_5]);
                    var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 3])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_3))))), (((((((/* implicit */_Bool) 16660358156210911395ULL)) ? (5892068386945283895ULL) : (((/* implicit */unsigned long long int) var_6)))) & (((arr_6 [i_5] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3719)))))))));
                    arr_20 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_18 [i_1 + 3] [i_1 + 3] [i_5] [i_5])))));
                    var_28 -= ((long long int) min((((/* implicit */int) (unsigned short)62479)), ((~(((/* implicit */int) (unsigned char)176))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    var_29 = (unsigned char)38;
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 3; i_8 < 9; i_8 += 2) 
                        {
                            {
                                arr_29 [i_0] [i_8] = ((/* implicit */short) ((_Bool) arr_19 [i_8] [i_1] [i_1 - 2] [i_6]));
                                var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) arr_17 [i_1 + 2]))))));
                            }
                        } 
                    } 
                    var_31 *= ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_25 [i_6] [i_1] [i_0] [i_1] [i_0])) << (((var_7) - (5984106326785929888ULL)))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 7; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */short) ((_Bool) ((short) 92664272U)));
                                var_33 -= ((/* implicit */unsigned short) ((unsigned int) ((var_15) | (((/* implicit */long long int) ((/* implicit */int) (short)-16070))))));
                                var_34 = ((/* implicit */unsigned long long int) ((short) ((178201557U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                                arr_37 [i_11] &= 4116765739U;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 7; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            {
                                var_35 ^= ((/* implicit */unsigned int) (unsigned char)255);
                                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))));
                                var_37 = ((/* implicit */signed char) (~(arr_30 [i_1 - 2] [i_1 - 2])));
                            }
                        } 
                    } 
                    arr_45 [i_0] [i_1] [3U] = ((/* implicit */unsigned short) var_10);
                    arr_46 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (((unsigned int) (signed char)69))));
                }
                arr_47 [i_0] [7ULL] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 171656172U)) ? (max((((/* implicit */long long int) arr_33 [i_0] [(unsigned short)6] [9ULL])), (arr_43 [i_0] [i_0] [i_0] [6ULL]))) : (((/* implicit */long long int) arr_33 [i_0] [i_0] [7U]))))));
                var_38 = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) arr_9 [(short)6] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1]))), ((+(((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 3]))))));
                var_39 -= ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38970))) == (arr_16 [i_0] [i_0] [i_0] [i_1])))), (253238416))) % (arr_17 [i_0])));
            }
        } 
    } 
}
