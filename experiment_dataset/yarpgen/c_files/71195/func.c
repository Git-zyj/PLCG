/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71195
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_15) + ((-(arr_1 [i_1] [i_1]))))))));
                var_16 = ((/* implicit */unsigned char) (-((+((~(6911637275456544889ULL)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) (-(arr_7 [i_1] [i_3] [i_0] [i_3 - 2])));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 - 3] [i_3] [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 1)) || (((/* implicit */_Bool) -7)))))));
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
                                var_19 = ((var_7) % (((/* implicit */unsigned long long int) ((arr_1 [i_1] [i_1]) - (((/* implicit */int) arr_0 [i_3 - 1]))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (unsigned char)111)) : (-2)));
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_2]))));
                    var_21 -= ((/* implicit */unsigned long long int) (+(var_11)));
                }
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_6] [i_7]))) : (arr_7 [i_0] [i_1] [i_1] [i_7]))))));
                            arr_23 [i_0] [(signed char)2] [i_7] [i_7] [i_1] [i_7] [i_1] = ((/* implicit */int) arr_5 [i_0] [i_0]);
                        }
                        var_23 += ((/* implicit */unsigned char) arr_14 [i_0] [i_1]);
                        arr_24 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */long long int) arr_0 [i_0]);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        arr_27 [i_1] [i_1] [i_5] [i_0] = ((/* implicit */signed char) min((65024), (((/* implicit */int) (short)5123))));
                        arr_28 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */long long int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)149))))))), (((/* implicit */int) (short)12348))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_24 -= ((/* implicit */_Bool) min((((unsigned long long int) arr_15 [i_1] [i_5] [i_9])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_5] [i_9])) ? (((/* implicit */int) arr_15 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_15 [i_9] [i_5] [i_1])))))));
                        var_25 ^= ((/* implicit */short) (-(((/* implicit */int) min((arr_20 [i_0] [(signed char)12] [i_0] [i_9]), (arr_20 [i_0] [i_1] [14LL] [i_9]))))));
                        var_26 = ((/* implicit */_Bool) min(((+(arr_2 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_5] [(signed char)1] [i_9]))))) ? (((/* implicit */int) arr_14 [i_5] [i_5])) : (((/* implicit */int) arr_21 [i_0] [i_1] [i_5] [i_5] [i_9])))))));
                    }
                    var_27 = ((/* implicit */short) (((+(arr_5 [i_0] [i_1]))) + ((-(arr_5 [i_0] [i_1])))));
                }
                for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    var_28 -= ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_4)))))))), (max((((/* implicit */short) var_14)), (min((var_3), (var_13)))))));
                    arr_33 [(short)1] [2] [i_1] [i_10] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0]);
                    arr_34 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 17217904961041377184ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (2334219078889552231ULL)))));
                    arr_35 [8ULL] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_1] [i_1] [i_10])))), ((_Bool)1)))) << (((((/* implicit */int) (short)32767)) - (32741)))));
                }
                for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    arr_39 [i_1] [i_1] [i_1] = ((/* implicit */short) min((min((arr_38 [i_11 - 1] [i_11 + 1] [i_11]), (arr_38 [i_1] [i_11 + 2] [i_11]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_15 [i_0] [i_1] [i_11 + 3])), (var_11))))));
                    var_29 *= 1;
                    var_30 = ((/* implicit */long long int) ((281474909601792LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    arr_40 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_11]))))) == (((/* implicit */int) ((unsigned short) (signed char)23)))));
                }
            }
        } 
    } 
    var_31 -= ((/* implicit */long long int) var_9);
    var_32 = ((/* implicit */int) var_14);
}
