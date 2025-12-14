/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8750
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        arr_11 [i_3] = ((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)45))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-(arr_9 [(short)1] [i_1] [i_1] [i_1]))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        arr_16 [3U] [(short)4] [(unsigned char)2] [9LL] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65519))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [4U] [(short)1] [8ULL])) | (((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)0] [i_4]))));
                            var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */int) arr_0 [i_5 + 1] [i_1])) | (((/* implicit */int) arr_0 [i_5 - 1] [2U]))))));
                            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [1LL] [i_5 - 1]))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_6 + 2]))));
                            var_23 = ((/* implicit */long long int) (~(0ULL)));
                        }
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) (-((+(1403641600)))));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)16))));
                            var_26 |= (-(arr_19 [i_0] [(short)8] [i_2] [6U] [i_7] [(signed char)4] [i_7]));
                        }
                        var_27 = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)0))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 9; i_8 += 4) 
                        {
                            arr_28 [i_8] [(signed char)7] [i_2] [0] [i_8] = ((/* implicit */signed char) ((((arr_8 [9] [4] [i_4] [(short)6]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65519))))) | ((~(arr_7 [(unsigned short)9] [1LL] [i_4] [(short)3])))));
                            var_28 = ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (arr_8 [4ULL] [i_1] [i_4] [i_8 - 1]));
                            var_29 = ((/* implicit */short) (-(arr_13 [i_8] [i_8 + 2] [i_8 + 1] [i_8] [(unsigned short)10])));
                        }
                        var_30 = ((/* implicit */signed char) (unsigned short)0);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 0ULL)) ? ((-(((/* implicit */int) (short)22791)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)30552)))))))));
                                var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6286914415664868216LL)) ? (875034055U) : (875034055U))))));
                                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_19 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10] [10LL] [i_9] [8ULL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [1ULL] [(unsigned char)5] [9LL] [6U] [(_Bool)1] [i_0])) ? (((/* implicit */int) (short)30552)) : (((/* implicit */int) arr_20 [6] [i_1] [(_Bool)1] [i_2] [i_10] [i_1]))))) : (((((/* implicit */_Bool) (+(588914578U)))) ? (((((/* implicit */_Bool) arr_7 [6ULL] [6ULL] [i_2] [0LL])) ? (((/* implicit */unsigned long long int) 3943145652421259929LL)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_33 [9U] [i_10 - 1] [i_9 - 1] [7U] [i_9 - 1] [0LL] [2ULL]))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned long long int) arr_14 [8U] [4U]);
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_2 [5ULL]))));
                            arr_38 [i_12] [9ULL] [i_11] [i_12] [i_11] = ((/* implicit */signed char) arr_23 [i_0] [i_1] [(short)3] [i_12] [(unsigned char)7]);
                            arr_39 [i_0] [(_Bool)1] [(short)0] [i_12] = ((/* implicit */unsigned char) arr_7 [5U] [i_12] [i_12] [i_12]);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned short) arr_20 [9ULL] [i_0] [i_0] [i_0] [(short)0] [(unsigned char)2]);
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            arr_46 [2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(875034055U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(arr_33 [4U] [i_14] [0U] [i_0] [i_0] [i_0] [i_0])))));
                            var_37 |= ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) 238719710))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) var_16);
}
