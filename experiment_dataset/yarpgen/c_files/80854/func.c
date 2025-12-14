/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80854
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */unsigned int) 1054909911)) < (var_8))))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39910))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            var_13 ^= ((/* implicit */_Bool) ((arr_3 [i_1] [i_1 + 2] [i_1 + 2]) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_1 - 1] [i_0]))));
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))))))));
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) var_4);
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(unsigned char)7] [i_0])) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) 1054909911)) || (((/* implicit */_Bool) arr_2 [i_1] [i_1])))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)8])))));
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                arr_13 [i_3] [i_3] [i_0] [1U] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_0] [i_2] [(unsigned char)9]))))));
                var_17 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (var_2))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                var_18 = ((/* implicit */int) var_4);
                var_19 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
            }
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) var_10))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_0 [2])) : (arr_16 [i_0] [i_0] [i_2] [i_2])))));
        }
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_8 [i_5]))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (var_8))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */long long int) var_8)) : (var_6)))))))));
        var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_5] [i_5] [i_5] [i_5]) - (arr_9 [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) ((short) arr_2 [i_5] [i_5]))) : (((/* implicit */int) min((arr_2 [i_5] [i_5]), (var_5))))));
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (long long int i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                {
                    var_23 += ((/* implicit */_Bool) ((max(((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) arr_20 [i_7 + 1])))), (arr_8 [i_6]))) | (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_9)))))));
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_19 [4LL] [11]))))), (((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [(short)12] [i_7 - 2]))))))), (((arr_21 [i_6] [i_6]) + (min((var_0), (((/* implicit */long long int) arr_16 [i_6] [i_7] [i_8] [i_9]))))))));
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [6])) ? (((/* implicit */long long int) ((int) arr_0 [i_7 - 1]))) : ((((!(arr_3 [i_6] [i_6] [i_6]))) ? (var_1) : (((/* implicit */long long int) arr_28 [i_6] [i_7 - 2] [i_9]))))));
                        arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) 250526945);
                    }
                    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((int) 0LL))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)242))))) / (((((/* implicit */_Bool) arr_22 [i_6])) ? (var_1) : (((/* implicit */long long int) var_2))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_7])))) : (((int) (unsigned char)99))))) : ((-(arr_21 [i_6] [i_7])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            arr_38 [(signed char)4] [i_6] [4U] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_7] [i_7 - 2] [i_7 - 2] [i_6]))))) ? (((int) arr_33 [i_7] [i_7 - 2] [i_8] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_6] [i_7 - 2] [i_10] [i_6])))))));
                            var_27 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_4)) ? (arr_32 [i_7 - 2] [i_7 + 2] [10] [i_7] [i_7 + 1] [i_7]) : (((/* implicit */int) arr_29 [i_6] [i_7 + 2] [i_8])))), (((arr_9 [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 + 1]) >> (((arr_1 [i_7 + 1] [i_7 - 1]) - (5113032757793605571LL)))))));
                            arr_39 [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_6] [i_7])) ? (var_0) : (((/* implicit */long long int) min((((/* implicit */int) var_3)), (arr_34 [i_6] [i_6] [i_7] [i_8] [i_6] [i_11]))))))) ? (((/* implicit */unsigned int) ((arr_12 [i_7 - 1]) | (arr_28 [i_6] [i_7 + 1] [(short)2])))) : (((unsigned int) var_2))));
                            var_28 = (!(((/* implicit */_Bool) min(((+(arr_34 [i_11] [i_7] [i_8] [i_10] [3U] [i_8]))), (((/* implicit */int) ((signed char) var_3)))))));
                        }
                        var_29 = ((/* implicit */unsigned int) ((_Bool) var_10));
                    }
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_42 [i_6] [i_6] [i_6] [(signed char)6] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_6] [i_6])) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)147)), (var_3)))))));
                        arr_43 [i_6] [i_6] [i_6] [i_8] [i_12] [i_12] = ((/* implicit */_Bool) var_0);
                        var_30 = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) ((((((((((/* implicit */_Bool) var_8)) ? (-1054909911) : (arr_34 [i_7] [i_7 - 2] [i_7] [i_6] [i_8] [i_8]))) + (2147483647))) << (((arr_17 [i_6]) - (1867957258U))))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_7 + 1] [i_8] [i_12]))) + (var_10))) + (2841744859107977309LL)))))) : (((/* implicit */unsigned char) ((((((((((/* implicit */_Bool) var_8)) ? (-1054909911) : (arr_34 [i_7] [i_7 - 2] [i_7] [i_6] [i_8] [i_8]))) + (2147483647))) << (((arr_17 [i_6]) - (1867957258U))))) >> (((((((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_7 + 1] [i_8] [i_12]))) + (var_10))) + (2841744859107977309LL))) + (28LL))))));
                        arr_44 [(unsigned short)4] [i_7] [i_6] [i_7] = ((/* implicit */unsigned int) var_10);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_0 [i_6])) >> (((arr_23 [i_7] [i_8]) + (7962118755826374689LL))))) << (((((/* implicit */int) ((unsigned char) var_6))) - (55))))) <= (((((((/* implicit */_Bool) (unsigned short)33008)) && (((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_6] [i_13])))) ? (((/* implicit */int) (unsigned short)4195)) : (((arr_9 [i_6] [i_7 - 2] [i_8] [i_8]) ^ (((/* implicit */int) (short)-4))))))));
                        var_32 = ((((/* implicit */_Bool) arr_20 [i_13])) ? (((var_6) - (((/* implicit */long long int) min((arr_24 [i_6] [3ULL] [3ULL] [i_13]), (((/* implicit */unsigned int) var_4))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_6] [i_7 - 1] [(unsigned short)5])) >> (((/* implicit */int) arr_11 [(unsigned short)4] [i_7 - 2] [i_13]))))));
                        arr_48 [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (arr_32 [i_8] [i_13] [i_7] [i_13] [i_7] [i_13]) : (((/* implicit */int) (short)-4))))))));
                        arr_49 [i_6] [i_6] [i_7 + 2] [i_6] [i_13] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_9))))));
                    }
                }
            } 
        } 
    } 
}
