/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63814
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
    for (signed char i_0 = 4; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_13 ^= ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) ((((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) && (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0 - 4])))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_1 - 1] [i_0]) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1]))))) ? (((arr_0 [i_1 + 1]) + (arr_0 [i_1 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) << (((((3661400834U) % (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (5476U))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_16 ^= ((/* implicit */_Bool) min((25ULL), (((/* implicit */unsigned long long int) (signed char)63))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) max((var_1), (arr_4 [i_3] [i_1] [i_2 - 3])))) % (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 2]))))) >= (var_11)));
                            arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (signed char)26)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_2 - 3] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))) : (var_3)));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77))) | (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 2]))) : (2810683384944446999ULL))))), (((/* implicit */unsigned long long int) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1]))))))));
                            var_19 = ((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1] [0U])), (((var_3) >> (((arr_8 [i_1] [i_2] [i_1]) - (18047645028862203990ULL))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((short) (_Bool)1))))));
                        }
                        var_20 = ((/* implicit */unsigned short) 8892887301767272632ULL);
                    }
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_21 ^= ((/* implicit */signed char) var_8);
                        var_22 = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1]))) / (((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)14] [(unsigned char)2] [i_0] [i_0]))))))));
                        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_1 + 1] [i_2 + 1] [i_6])) ? (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1 + 1] [i_6] [i_6])) : (arr_8 [i_0] [i_1 + 1] [i_2])))));
                    }
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_24 = (i_2 % 2 == zero) ? (((/* implicit */signed char) max((((var_0) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)96)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))))) ? (((arr_7 [i_0] [i_2]) >> (((/* implicit */int) (signed char)43)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))) : (((/* implicit */signed char) max((((var_0) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)96)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))))) ? (((((arr_7 [i_0] [i_2]) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)43)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_25 ^= (-(((/* implicit */int) var_4)));
                            var_26 &= ((/* implicit */short) min((3661400834U), (((/* implicit */unsigned int) (signed char)24))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (short)1392)), (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 1] [8ULL] [i_2] [i_1 - 1]))) : (1234094640U))))), (((((/* implicit */_Bool) (unsigned char)154)) ? (2385527772U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))))))))));
                            arr_23 [i_0] [i_1] [11] [i_2] [i_8] = ((/* implicit */unsigned char) var_7);
                            var_28 &= ((/* implicit */int) var_7);
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) (((+(((/* implicit */int) var_4)))) ^ ((+(((/* implicit */int) (short)-7841))))));
        arr_24 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) arr_19 [i_0 - 1]);
        var_30 = ((/* implicit */short) (-(((/* implicit */int) arr_18 [4ULL]))));
    }
    /* vectorizable */
    for (signed char i_9 = 4; i_9 < 13; i_9 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 365290510766265706LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-26))));
        var_32 = ((/* implicit */signed char) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9 + 1])))));
    }
    var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (var_5)))) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) var_6)), (var_3)))))));
}
