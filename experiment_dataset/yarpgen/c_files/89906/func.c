/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89906
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
    var_10 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [6U] [6U] &= ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_0)) ? (-7096427908651787724LL) : (7096427908651787719LL))))), (((/* implicit */long long int) arr_0 [(short)16]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((((/* implicit */unsigned int) (!(((((/* implicit */int) var_8)) > (560531409)))))), (arr_5 [i_0]))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) max((6470440738757291748ULL), (((/* implicit */unsigned long long int) -8748059593770803103LL))));
                }
            } 
        } 
        var_13 *= ((/* implicit */_Bool) arr_4 [2U] [(signed char)2]);
        var_14 += (-(((/* implicit */int) arr_7 [i_0] [i_0])));
        arr_9 [i_0] = ((/* implicit */long long int) (signed char)127);
    }
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        arr_14 [i_3] [12] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_0 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6470440738757291738ULL)) ? (((/* implicit */unsigned int) var_2)) : (arr_0 [i_3])))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) arr_5 [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        var_15 = ((/* implicit */signed char) arr_11 [i_3]);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_18 [i_3] [i_4] [i_4] = ((/* implicit */int) (((~(((var_0) ^ (((/* implicit */unsigned long long int) arr_4 [i_3] [i_4])))))) <= (((((/* implicit */_Bool) arr_7 [i_3] [i_4])) ? (((((/* implicit */_Bool) -1687604335)) ? (((/* implicit */unsigned long long int) 560531409)) : (11976303334952259868ULL))) : (((/* implicit */unsigned long long int) (~(var_4))))))));
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) arr_0 [i_4]);
                var_17 ^= ((/* implicit */long long int) max(((-(6470440738757291748ULL))), (((/* implicit */unsigned long long int) (~(arr_5 [i_5]))))));
                arr_21 [i_5] [i_4] [0ULL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) & (max((6289765944105865444LL), (((/* implicit */long long int) (unsigned short)64975))))));
            }
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                arr_24 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned char) var_5);
                var_18 += ((/* implicit */unsigned int) var_5);
            }
            for (signed char i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                arr_29 [i_3] [i_4] [i_7] = ((/* implicit */int) max((((/* implicit */long long int) var_9)), (arr_6 [i_3] [i_4] [i_7 + 3])));
                arr_30 [i_3] [i_3] [i_7] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) 6470440738757291734ULL)) ? (11976303334952259868ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_6 [i_7] [i_7 + 2] [i_7 + 1])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_13 [i_4]), (((/* implicit */unsigned char) var_6))))))))));
                var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (var_0)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2239140031782917678ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1])) ? (arr_26 [i_7 - 1] [i_7 + 3] [i_7 + 3] [i_7 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_33 [(short)4] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_3] [i_4] [i_4] [i_8])) && (((/* implicit */_Bool) max((((-6289765944105865444LL) | (arr_28 [i_3] [i_4] [i_8] [i_4]))), (((/* implicit */long long int) min(((signed char)127), (arr_27 [i_3] [i_3])))))))));
                arr_34 [i_8] [i_4] [i_8] = ((/* implicit */signed char) arr_19 [6] [i_4] [i_4] [6]);
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        {
                            arr_39 [i_3] [i_8] [i_8] [i_8] [i_3] = ((/* implicit */int) arr_38 [i_8] [1U] [(unsigned char)3] [(unsigned char)3] [i_10]);
                            var_21 = ((/* implicit */unsigned int) arr_27 [i_8] [i_9]);
                            var_22 *= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_22 [i_4] [i_9])))) / (9223372036854775807LL)))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned int i_11 = 1; i_11 < 11; i_11 += 1) 
            {
                var_23 += ((/* implicit */unsigned char) arr_36 [13LL] [i_3] [i_3] [i_11 - 1] [i_11]);
                var_24 |= ((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)81)) % (((/* implicit */int) arr_23 [i_11 + 1] [i_11 + 1] [i_11 + 1]))))));
                var_25 = ((/* implicit */unsigned long long int) (signed char)-81);
            }
        }
        /* LoopSeq 1 */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            var_26 = ((/* implicit */int) max((((/* implicit */long long int) (short)15934)), (arr_11 [i_3])));
            arr_46 [i_3] [i_3] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((arr_42 [i_12]) / (arr_42 [i_3]))) : (max((((/* implicit */long long int) (-(arr_5 [(short)10])))), ((+(arr_6 [2U] [2U] [i_12])))))));
            var_27 *= ((/* implicit */unsigned long long int) (unsigned char)236);
        }
        var_28 = ((/* implicit */unsigned long long int) arr_44 [5ULL] [i_3] [5ULL]);
    }
}
