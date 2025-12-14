/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90824
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
    var_15 ^= ((/* implicit */int) (unsigned short)11222);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((long long int) arr_1 [i_0]))));
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (-9223372036854775807LL))), (((/* implicit */long long int) var_9))))) ? (min((((arr_1 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)1]))))), (max((arr_1 [i_0]), (var_3))))) : (min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - ((-9223372036854775807LL - 1LL))))))));
    }
    var_17 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_4)) : (var_7))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_4 [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
                            {
                                var_19 = arr_5 [i_1] [i_1];
                                var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)35))));
                                arr_18 [i_1] [i_1] [i_1] [i_3] [i_1] [i_4] [i_5] = ((/* implicit */long long int) max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */int) ((arr_15 [i_2] [i_1] [i_3] [i_2] [i_1]) == (437587612U)))) > (((/* implicit */int) ((unsigned short) arr_11 [i_1] [i_1] [i_4] [i_1]))))))));
                                var_21 ^= var_7;
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_22 ^= ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_4))))));
                                arr_22 [i_1] [i_2] [i_1] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_1 + 3] [i_1] [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_1 - 2] [i_1] [i_1] [i_1])))) : (arr_17 [i_1] [i_1 - 1] [i_1 + 2] [15] [i_1])));
                                var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1570389122709362093LL))))), (max((min((((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])), (var_5))), (min((((/* implicit */unsigned long long int) arr_15 [12LL] [i_6] [i_6] [i_4] [i_6])), (3184761246051066456ULL)))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned int) var_1);
                                var_25 -= ((/* implicit */signed char) -4982261212743207377LL);
                            }
                            for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
                            {
                                arr_29 [i_1] [i_1] = ((/* implicit */unsigned char) var_9);
                                var_26 = (-9223372036854775807LL - 1LL);
                                var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) arr_21 [i_1 + 1] [i_1] [i_1])) : (((((/* implicit */_Bool) 3170810193921519099LL)) ? (var_2) : (((/* implicit */int) arr_16 [i_1 - 2] [i_2] [i_3] [12LL])))))) & (((/* implicit */int) arr_9 [i_1 + 2] [i_2] [i_3] [i_1]))));
                                var_28 = ((((/* implicit */_Bool) min((min((6629324591489552831LL), (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1] [(short)14])) ? (-1538965658) : (((/* implicit */int) arr_7 [i_3] [i_4])))))))) ? (((((((((/* implicit */_Bool) arr_3 [i_1])) ? (-9210250653478836731LL) : (((/* implicit */long long int) 4294967295U)))) + (9223372036854775807LL))) >> (((((var_2) & (((/* implicit */int) (unsigned short)62216)))) - (16596))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_26 [i_1] [i_2] [i_3] [i_4] [i_3])), ((unsigned char)255))))));
                                arr_30 [i_1] = ((/* implicit */signed char) var_14);
                            }
                            var_29 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
}
