/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85162
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_18))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 2])) ? (arr_1 [i_0 - 2] [i_0 - 3]) : (arr_1 [i_0 - 2] [i_0 - 2]))) : (((arr_1 [i_0 - 1] [i_0 + 2]) | (arr_1 [i_0 - 1] [i_0 + 2])))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((arr_1 [i_0 - 2] [i_0 - 3]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) var_18)))))));
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) var_17)))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (arr_5 [i_0 - 3] [i_0 + 1]))))));
                            arr_13 [i_0 - 2] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) max((var_6), (min((((/* implicit */long long int) max((var_16), (var_2)))), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_0] [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 1] [i_0 - 3]))) : (15U)))) ? (((/* implicit */int) max((((/* implicit */short) var_18)), (arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5])))) : (((/* implicit */int) ((4294967277U) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_19 [i_0 + 1] [i_1] [i_6] [i_2] [i_6] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_4 [i_0 + 2]))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_1 [i_0 + 1] [i_0 - 2])))) && (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 2])) : (var_13))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_3] [i_2])))) : (max((arr_5 [i_1] [i_1]), (arr_5 [i_7] [i_7 + 3])))));
                            var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967277U)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */int) ((((var_13) % (((/* implicit */unsigned long long int) arr_22 [i_8] [i_1] [i_2] [i_3] [i_1])))) - (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_0)))), (var_7))))));
                            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */long long int) (-(((/* implicit */int) ((arr_0 [i_1]) >= (var_1))))));
                            arr_27 [i_9] [i_1] [i_2] [i_2] [i_9 + 3] [i_9 - 1] [i_2] = ((/* implicit */unsigned int) (+(arr_7 [i_1] [i_1] [i_2] [i_3])));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 16; i_10 += 2) 
                        {
                            arr_31 [i_0 + 1] [i_1] [i_10 + 1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_3);
                            arr_32 [i_0] [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3523393567380627489LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9223372036854775790LL))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 4673426198697281520ULL)) ? (((/* implicit */int) arr_3 [i_10 + 1] [i_2])) : (((/* implicit */int) var_10)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_41 [i_11] [i_11] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_11] [i_0] [i_0 - 2] [i_0 - 2]))) ? ((+(((/* implicit */int) var_12)))) : (var_7)));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (unsigned char)129))));
                        arr_42 [i_0 - 2] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (arr_29 [i_0 - 3]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (arr_11 [i_0] [i_11] [i_12] [i_11] [i_12] [i_0] [i_13])))))), (((/* implicit */unsigned long long int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0 + 1] [i_12] [i_13]))))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_4)))) - (((/* implicit */int) var_0)))) * (((((((/* implicit */_Bool) (unsigned short)21248)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)129)))) - (((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
    var_32 = ((/* implicit */_Bool) (unsigned char)129);
}
