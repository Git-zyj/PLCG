/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78013
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) max((((186422522U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (signed char)75))))) / (min((((/* implicit */long long int) var_12)), (((var_11) / (var_14)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_8 [i_2]);
                    var_16 -= ((/* implicit */unsigned int) (short)24576);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        arr_13 [i_1] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1])))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_2 [i_2])), ((unsigned char)13)))), (max((arr_7 [4U] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) (short)24547))))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 10; i_4 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_13), ((~(((/* implicit */int) arr_17 [i_2]))))))) ? (max((arr_6 [i_0]), (((/* implicit */long long int) arr_16 [i_2] [i_3 + 1] [i_3] [i_2] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_18 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(arr_4 [i_0]))), (max((var_5), (arr_15 [i_2] [i_2] [i_2] [3])))))) ? ((~(max((8190625517850844931LL), (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2])))));
                            var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-24594)) * (((/* implicit */int) (_Bool)1))))), (arr_15 [i_2] [i_4] [i_4 - 1] [i_4 - 1]))));
                        }
                        for (short i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            arr_21 [i_2] [i_3 + 1] [i_2] [i_1] [i_2] = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_0 [i_0])), (max((((/* implicit */unsigned int) (signed char)58)), (var_5))))) > (max((arr_4 [i_0]), (((/* implicit */unsigned int) var_9))))));
                            arr_22 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((min((min((((/* implicit */long long int) arr_16 [6LL] [i_1] [i_2] [i_2] [i_2])), (var_14))), (((/* implicit */long long int) var_7)))) + (9223372036854775807LL))) >> (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-24562)) || (((/* implicit */_Bool) arr_8 [i_0]))))), (2135592147U))) - (2135592085U)))));
                            arr_23 [i_2] = ((/* implicit */unsigned int) max((arr_6 [i_5]), (((/* implicit */long long int) (signed char)43))));
                            arr_24 [i_0] [i_1] [i_2] [(signed char)4] [i_5 + 1] = var_5;
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            arr_27 [i_2] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(arr_8 [3ULL])));
                            arr_28 [i_2] [i_2] = ((/* implicit */unsigned char) (short)24576);
                            var_19 *= ((/* implicit */unsigned short) arr_8 [(short)6]);
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_20 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0]))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (max((1600547279U), (2764047585U)))));
                        arr_32 [i_2] [(_Bool)1] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)0)), (arr_10 [i_0] [i_1] [i_2] [i_7])));
                    }
                }
            } 
        } 
    } 
}
