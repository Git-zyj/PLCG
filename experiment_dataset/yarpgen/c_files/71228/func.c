/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71228
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
    var_17 *= ((/* implicit */unsigned long long int) ((min((max((((/* implicit */int) (short)1133)), (786887182))), (max((var_7), (var_10))))) / (var_7)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [15LL] [3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [5ULL] [i_0] [i_2] [i_3 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (max((arr_4 [i_0]), (arr_9 [(unsigned char)0])))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)29652))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(unsigned short)19] [i_0] [i_0] [i_0]))) : (arr_2 [(short)15])))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                            {
                                arr_17 [(short)3] &= ((/* implicit */int) (~(((((/* implicit */long long int) arr_7 [(signed char)17] [i_3])) | (var_6)))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_12))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_0), (min((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) var_16)) & (var_1)))))));
                                var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((var_2), (var_8)))) ? (((/* implicit */long long int) arr_9 [i_5])) : (((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_5] [6] [6])) ? (((/* implicit */long long int) var_16)) : (var_0)))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                            {
                                arr_24 [17] [3ULL] [i_2] [19LL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (var_4)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [(signed char)2] [14U] [i_1] [(short)14] [i_1] [i_3] [14U]) > (arr_4 [i_6])))))));
                                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */_Bool) arr_21 [(unsigned char)19] [i_0] [i_1] [i_2] [i_2] [i_3] [(unsigned short)3])) ? (arr_7 [i_0] [3]) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)55)) == (786887170))))))));
                            }
                            arr_25 [i_0] = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0]) : (((/* implicit */int) arr_23 [(unsigned char)7] [i_1] [i_1] [(unsigned char)12] [(unsigned char)0] [(short)20]))))) ? (((arr_11 [5U] [5U] [(short)16] [i_1] [5U] [(unsigned char)3]) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [14] [i_1] [(unsigned char)17] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [1U] [1U] [i_0] [0LL] [2U])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (min((((/* implicit */long long int) (unsigned short)62142)), (-8334893467392094252LL)))));
                arr_26 [i_1] [17] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-8334893467392094252LL) : (((/* implicit */long long int) -786887182))))) ? (((/* implicit */int) (unsigned short)65514)) : (-1462173760)))), (((max((((/* implicit */long long int) var_9)), (var_14))) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_24 = var_7;
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_0) > (var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) || (((/* implicit */_Bool) max((((var_1) % (var_1))), (((/* implicit */long long int) (-(var_4)))))))));
    /* LoopSeq 1 */
    for (long long int i_7 = 2; i_7 < 22; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) var_10);
        arr_31 [i_7] [i_7] = ((/* implicit */_Bool) max((arr_29 [(short)0]), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))) + (((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */int) arr_28 [i_7])) : (arr_30 [i_7 - 2] [i_7 + 1]))))))));
        arr_32 [(unsigned short)2] |= ((/* implicit */int) ((max((arr_29 [i_7]), (arr_29 [i_7]))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_30 [i_7 + 1] [i_7]) > (((/* implicit */int) var_2))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_7] [(short)22])))))))))));
        var_27 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) 786887177)), (-9223372036854775797LL)));
    }
}
