/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73092
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((4294967295U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (4294967295U) : (1U)))) ? (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (max((((/* implicit */unsigned int) var_4)), (1U)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 1U);
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((4294967279U) / (min((((/* implicit */unsigned int) arr_1 [i_1 + 1])), (30U))))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 6; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_1] = ((/* implicit */long long int) 4294967279U);
                        var_21 = ((/* implicit */unsigned short) 4294967266U);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967248U)) ? (0U) : (((/* implicit */unsigned int) arr_12 [i_3 - 1] [i_3 + 4] [i_3 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((4294967233U), (62U))) == (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (min((((((/* implicit */_Bool) 11U)) ? (arr_17 [i_1 - 1] [i_2] [i_3 + 4] [i_4] [i_5]) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) 17U))))));
                            var_23 -= ((/* implicit */long long int) arr_15 [i_1] [5ULL] [6ULL] [6ULL] [i_3 - 2] [5ULL] [5ULL]);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_1] [i_4] [i_5]), (((/* implicit */unsigned long long int) var_7))))) || (((/* implicit */_Bool) arr_5 [i_1])))))) : (max((17U), (4294967279U)))));
                        }
                    }
                } 
            } 
        } 
        arr_18 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 + 1])) ? (arr_7 [i_1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) 11U)))) & (max((arr_7 [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) 62U))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((((((/* implicit */_Bool) var_11)) ? (4294967279U) : (((/* implicit */unsigned int) arr_19 [i_6])))) ^ (((((/* implicit */_Bool) 36U)) ? (0U) : (0U))));
        var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [i_6])) ? (((((/* implicit */_Bool) var_0)) ? (4294967295U) : (4294967234U))) : (((/* implicit */unsigned int) ((int) arr_20 [i_6]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (62U) : (4294967232U)))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_16))) & (arr_20 [i_6]))), (arr_20 [i_6]))) : (((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */long long int) arr_19 [i_6])) : (arr_20 [i_6])))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (1U))))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7])) ? (arr_19 [i_7]) : (((/* implicit */int) arr_23 [i_7] [i_7]))))) ? (((unsigned int) var_17)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_24 [(unsigned char)0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) arr_19 [i_7])) : (4294967295U))) : (((30U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) 4294967267U)), (arr_24 [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */long long int) 63U)) : (var_12))) > (((/* implicit */long long int) ((int) var_18))))))))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) arr_20 [(unsigned short)6]))));
            arr_27 [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((4294967267U) + (63U))) - (58U)))) + ((-(var_9)))));
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 1])) + (2147483647))) >> (((var_2) - (7669663316870833988ULL)))))) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [0])) ? (4294967233U) : (63U)))) <= (max((arr_24 [(unsigned short)22]), (((/* implicit */unsigned long long int) 4294967227U))))))))))));
        }
    }
    var_31 = ((/* implicit */unsigned int) max((var_31), (0U)));
}
