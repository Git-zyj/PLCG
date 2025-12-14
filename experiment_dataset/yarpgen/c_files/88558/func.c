/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88558
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
    var_11 = ((/* implicit */short) (~(var_4)));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(15671350594817971993ULL)))))))) : (((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (447576816594799372ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_6))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_3]))));
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((((/* implicit */int) arr_10 [i_2 - 1] [4U] [4U])) + (((/* implicit */int) arr_10 [i_2 + 1] [(unsigned char)2] [i_0])))))))));
                        var_15 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1]))))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((arr_3 [i_0]), (arr_8 [i_0] [i_0] [i_0])))) & (((/* implicit */int) arr_11 [i_2 + 1]))))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_18 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_0] [(signed char)5] [i_0] [i_5]))));
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))));
                        var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)6]))) : (arr_6 [i_2 - 1] [i_2] [i_2 + 1])));
                        arr_19 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [(_Bool)1] [i_1] [i_1] [i_2 - 1])) + (((/* implicit */int) arr_17 [i_0] [9LL] [(short)3] [i_2 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_2 + 1] [i_6]))) : (arr_0 [i_0])))))) * (min((min((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0])), (arr_7 [i_1] [3U] [i_2]))), (((((/* implicit */_Bool) arr_10 [i_6] [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_2 + 1] [i_6] [i_6]))) : (arr_2 [i_1] [i_0])))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_0 [i_6]))));
                                arr_25 [i_0] [i_1] [i_2] [i_6] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)9710)) ? (((/* implicit */int) (short)-9728)) : (((/* implicit */int) (unsigned char)207))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_5 [i_1] [i_2])) >> (((((/* implicit */int) arr_1 [i_0])) + (113)))))))) ? ((-(max((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_2] [(signed char)2])), (arr_7 [i_1] [i_1] [i_7]))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [9LL] [i_1])) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) arr_21 [i_7] [i_1] [i_6 - 1] [i_6 - 1])))) | (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_6 + 1])))))));
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_2 [i_7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) arr_21 [i_6 + 1] [i_7] [i_6 + 1] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
