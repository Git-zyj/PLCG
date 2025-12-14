/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57125
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((arr_2 [i_0] [i_1]) | (((/* implicit */int) arr_0 [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_6)) : (arr_2 [i_0] [i_1])))))), (min((((/* implicit */unsigned long long int) arr_4 [i_0 - 3] [i_0 + 1])), (((var_9) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))))))));
            var_15 += ((/* implicit */short) arr_2 [i_0] [i_0]);
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 1])) ? (arr_2 [i_0 - 3] [i_0 - 2]) : (((/* implicit */int) var_7)))))))));
        }
        var_17 ^= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0 - 2])) & (((/* implicit */int) (signed char)98))));
        var_18 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 18446744073709551615ULL)))) / (((15ULL) + (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 2])))))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) -3401348487293641150LL)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 &= ((/* implicit */_Bool) (~(478055418U)));
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) <= (arr_6 [i_0 + 2])));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)18])) ? (var_0) : (((/* implicit */unsigned int) var_12))))) ? (2712117498U) : (arr_3 [i_0 - 1])));
        }
        arr_7 [i_0] [(signed char)0] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */short) ((((unsigned long long int) 255885009)) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (arr_10 [i_3])))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            var_22 = (~(2712117496U));
            arr_14 [i_4] [i_4] = var_6;
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((arr_10 [i_3]) - (((/* implicit */unsigned long long int) -1160091159)))))));
            arr_15 [i_4] = ((/* implicit */_Bool) var_12);
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */short) arr_10 [i_5]);
            var_25 = ((/* implicit */signed char) var_1);
        }
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_19 [i_3] [i_3] [i_6])), (var_2)))) ? (max((((/* implicit */long long int) var_1)), (arr_12 [i_3]))) : (((/* implicit */long long int) (+(var_0)))))) <= (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) arr_13 [i_3] [i_6]))))))));
            arr_20 [i_3] [i_6] = ((/* implicit */unsigned int) (+(18446744073709551607ULL)));
            var_27 = ((/* implicit */signed char) min(((~(arr_18 [i_6] [i_6]))), ((~(((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)127))))))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_9)), (4626295868497396328LL)))))) ? (((/* implicit */long long int) 720470398U)) : (max((((/* implicit */long long int) (signed char)15)), ((-9223372036854775807LL - 1LL))))));
                    var_29 = ((/* implicit */short) min((var_29), (arr_17 [i_7] [i_7] [i_8])));
                    var_30 = ((/* implicit */signed char) ((arr_21 [i_3] [i_3] [i_3]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [(signed char)3] [i_7] [24])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) != (arr_10 [i_7])))) : (((/* implicit */int) arr_19 [i_8] [i_7] [i_3]))))) : ((~(max((arr_10 [i_3]), (((/* implicit */unsigned long long int) 3574496898U))))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) 2305843009213693951LL);
                        arr_28 [i_3] [i_8] [i_3] = ((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_9])) || (((/* implicit */_Bool) var_7)))))) * (((((/* implicit */long long int) -1)) - (2935829612742446608LL))))) + (9223372036854775807LL))) << (((((unsigned long long int) var_2)) - (18446744072205913736ULL)))));
                    }
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -217409268)) ? (((((/* implicit */int) (unsigned short)16575)) * (((/* implicit */int) arr_21 [i_3] [i_3] [i_3])))) : (((int) var_0))))) >= ((((_Bool)1) ? (((720470386U) % (((/* implicit */unsigned int) -537676879)))) : (((/* implicit */unsigned int) var_11))))));
    }
    for (int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~((~(((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_10] [9] [(_Bool)1] [(_Bool)1] [i_10])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) var_10)) : ((~(arr_12 [i_10])))))));
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            var_33 += ((/* implicit */unsigned int) var_13);
            arr_36 [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_34 [i_10] [i_11] [i_10])) / (arr_35 [i_11] [i_10] [i_11])))) ? (max((((/* implicit */unsigned long long int) arr_30 [i_10])), (15ULL))) : (((/* implicit */unsigned long long int) min((arr_8 [i_11]), (((/* implicit */unsigned int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_33 [i_10])) / (arr_27 [i_10] [5U] [i_11])))) ? (((/* implicit */unsigned long long int) ((var_11) + (((/* implicit */int) arr_21 [18] [i_10] [i_10]))))) : (max((((/* implicit */unsigned long long int) var_4)), (10173874608842559523ULL)))))));
            var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_10] [i_10] [i_11]))))) || (((/* implicit */_Bool) ((((-4626295868497396327LL) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_35 [i_10] [(_Bool)1] [i_11])) ? (((/* implicit */long long int) 20U)) : (-4160858853072895798LL))) - (20LL))))))));
        }
        for (long long int i_12 = 4; i_12 < 22; i_12 += 3) 
        {
            var_35 = ((/* implicit */int) ((((((/* implicit */int) arr_13 [i_10] [i_10])) >= (((/* implicit */int) min((var_8), (var_5)))))) ? ((+(((((/* implicit */unsigned long long int) arr_35 [i_10] [i_12] [i_10])) ^ (arr_32 [(unsigned short)4]))))) : (((((/* implicit */_Bool) 18014398509481983ULL)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) arr_8 [i_12 - 1]))))));
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_10] [i_12 - 3] [(signed char)2])))))));
            arr_39 [i_12] [i_12] = var_12;
        }
        for (int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            var_37 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 307321539U)) ? (((/* implicit */unsigned long long int) 33554432U)) : (18446744073709551612ULL)))) && (((arr_42 [i_13] [i_10]) || (((/* implicit */_Bool) (unsigned short)48960))))));
            arr_43 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((720470403U) << (((/* implicit */int) (short)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_41 [(_Bool)1] [(_Bool)1] [i_13]) - (((/* implicit */int) (unsigned short)16562)))) < (((int) 4626295868497396328LL)))))) : ((+(4626295868497396318LL)))));
            arr_44 [(signed char)4] [(signed char)4] [11] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) ^ (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (~(720470427U))))));
        }
        var_38 = ((/* implicit */short) (+(max((arr_26 [i_10] [i_10] [(_Bool)1] [i_10] [(_Bool)1]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_38 [i_10] [i_10])))))))));
    }
    var_39 = ((/* implicit */signed char) min((18446744073709551603ULL), (((/* implicit */unsigned long long int) (short)8055))));
}
