/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99990
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
    for (int i_0 = 2; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) var_2);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = var_16;
                    var_19 = ((/* implicit */int) (+(arr_4 [i_0] [i_1] [(unsigned char)12])));
                }
            } 
        } 
        arr_10 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (+(2538039107U)));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
                        {
                            arr_22 [(unsigned char)13] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) var_10)) > (arr_2 [i_0])))), (arr_14 [i_0 - 2] [i_0 - 2] [i_0]))))));
                            var_20 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_0 - 2] [(_Bool)1] [i_3] [i_4])) ? (arr_20 [i_3] [i_0 - 2] [(short)20] [i_6 - 1] [i_0 - 2]) : (arr_20 [i_3] [i_0 - 2] [i_6] [i_6] [i_6 - 1])))) ? (((/* implicit */unsigned int) var_10)) : (((unsigned int) 2702124112U)));
                            var_21 -= ((/* implicit */short) arr_5 [i_5] [(signed char)7] [i_5]);
                        }
                        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) == (var_17)));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_7 + 2] [i_0] [i_0])) + (((/* implicit */int) arr_13 [i_7 + 1] [i_0] [5]))))) ? (((/* implicit */int) arr_13 [i_7 + 2] [i_0] [(_Bool)1])) : ((+(((/* implicit */int) arr_13 [i_7 + 2] [i_0] [i_0]))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((~(((/* implicit */int) arr_11 [i_3] [i_0 - 1] [i_0 - 2])))) % (((((/* implicit */int) arr_23 [i_3] [i_7 + 2] [i_4] [16ULL] [i_3])) - (((/* implicit */int) (signed char)127)))))))));
                            var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (var_5)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((/* implicit */int) arr_26 [i_4] [i_4] [(_Bool)1] [i_4] [i_4])))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0 - 2] [i_0 - 2] [5U]) + (var_0)))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0]))) : ((-(((/* implicit */int) arr_11 [i_0] [i_3] [i_3]))))));
                            arr_27 [i_0] [i_5] [i_4] [i_4] [i_3] [i_0] = ((/* implicit */unsigned int) ((arr_20 [i_0] [i_3] [i_3] [i_5] [i_0 + 1]) | (((/* implicit */int) arr_26 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_4 [i_0] [i_4] [5U]))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_4 [15] [(_Bool)1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_3] [i_3] [i_0])))))) && (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) != (arr_4 [i_9] [i_3] [i_0 + 1])))));
                        }
                        arr_31 [i_0] [i_3] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), ((~(max((13194024433882449231ULL), (((/* implicit */unsigned long long int) 1481454253))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 21; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                arr_38 [i_0] [5U] = ((/* implicit */short) (~(min((((/* implicit */unsigned int) arr_19 [i_0 - 2] [i_3] [i_4])), (arr_33 [i_3] [i_0] [13U] [i_0] [15])))));
                                arr_39 [i_0 - 1] [i_0 - 1] [i_4] [i_0] [i_11] = ((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]);
                                arr_40 [(_Bool)1] [i_3] [i_4] [i_10] [i_3] |= (~((~(((/* implicit */int) var_16)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) arr_1 [(signed char)16]))));
    }
    for (int i_12 = 2; i_12 < 21; i_12 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (4013742487U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) max((arr_3 [i_12 + 1]), (var_16)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_12 - 1])) > (((/* implicit */int) (signed char)-71)))))));
        arr_43 [(short)6] &= ((/* implicit */int) min((((arr_35 [i_12] [i_12 - 1] [i_12 - 2] [i_12] [(signed char)10] [i_12 - 2] [i_12]) - (arr_35 [(short)8] [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12] [19U] [i_12 + 1]))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (arr_28 [i_12 - 2] [16U] [i_12] [(unsigned char)13] [i_12] [i_12] [i_12]) : (arr_32 [i_12] [(signed char)2] [i_12 - 2] [i_12 - 2] [(signed char)2] [i_12 - 1])))), (arr_16 [i_12 - 1] [i_12 - 1] [i_12] [(unsigned char)6])))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) (+(min((arr_4 [(_Bool)1] [i_12 + 1] [i_14]), (((/* implicit */unsigned int) 2147483647))))));
                        arr_55 [i_15] &= ((/* implicit */_Bool) arr_33 [i_12] [16] [i_12] [i_12] [i_12]);
                    }
                    var_34 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_2 [i_14])), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_8 [15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (var_0))))) : (((((/* implicit */_Bool) arr_28 [i_12] [i_13] [i_14] [i_14] [12] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) 8U)) : (arr_30 [i_14])))))));
                    var_35 = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)78)), (1481454253)));
                }
            } 
        } 
    }
    var_36 &= ((/* implicit */unsigned char) var_16);
}
