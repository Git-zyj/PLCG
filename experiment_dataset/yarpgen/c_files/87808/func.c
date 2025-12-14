/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87808
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = max((((/* implicit */int) ((unsigned char) arr_0 [i_0]))), (min((arr_0 [i_0]), (((/* implicit */int) (_Bool)0)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (2568821592U)))) / (((unsigned long long int) 2568821592U)))))));
        arr_3 [i_0] &= ((/* implicit */int) ((((_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((arr_0 [i_0]) == (((/* implicit */int) var_15)))))))) : (max((((((/* implicit */unsigned int) arr_1 [i_0])) ^ (1726145704U))), (((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0])))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) : (2568821591U)))) | (((((/* implicit */_Bool) (+(arr_0 [(signed char)1])))) ? ((~(7647801575139621738ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_1 [i_0]) : (((/* implicit */int) var_0)))))))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 4; i_2 < 17; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_2 + 2] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))), (var_11)))) ? (((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (arr_15 [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 2]) : (arr_15 [i_2 - 3] [i_2 - 1] [i_2] [i_2 + 1]))) : (((int) ((9223372036854775807LL) != (((/* implicit */long long int) -1029570439)))))));
                                var_21 -= ((/* implicit */signed char) ((2568821585U) | (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)43334)))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) var_10)) : (2305843009213693951ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 3])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((-9074322714888532068LL), (((/* implicit */long long int) (-2147483647 - 1)))))) ? (max((804102840U), (((/* implicit */unsigned int) (unsigned short)22201)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1935338101)))))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_2))));
                    var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)43326)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (unsigned short)59767))))), (((/* implicit */int) arr_9 [i_2]))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            {
                                arr_29 [i_1] [i_3] [i_6] [i_6] = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1))), (((/* implicit */long long int) ((unsigned char) var_2))))));
                                arr_30 [i_1] [(_Bool)1] [i_1] [i_3] [4ULL] [i_7] = ((/* implicit */unsigned short) arr_23 [(unsigned short)17] [i_2 - 4] [i_2 + 1] [i_3] [i_6] [i_7]);
                                arr_31 [i_1] [(signed char)16] [i_3] [i_3] [(_Bool)0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))) % (16140901064495857665ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))));
        var_25 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (unsigned short)43326)), (2568821592U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [(_Bool)1])))));
        var_26 *= ((/* implicit */signed char) max((var_1), (((/* implicit */long long int) (signed char)92))));
    }
    var_27 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned char) var_13)), ((unsigned char)251))), (((/* implicit */unsigned char) (!(((_Bool) var_5)))))));
}
