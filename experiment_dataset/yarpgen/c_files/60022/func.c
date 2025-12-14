/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60022
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) var_3)) : (var_4)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (3) : (var_10)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (9221120237041090560LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (-1) : (-4)))) ? (((((/* implicit */_Bool) (unsigned char)15)) ? (25) : (((/* implicit */int) (unsigned char)126)))) : (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_16))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) : (((((/* implicit */_Bool) 1040384)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-9223372036854775807LL - 1LL)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) ? (var_11) : (((/* implicit */int) var_13))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    arr_9 [i_3] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (-9223372036854775804LL) : (arr_3 [i_1] [i_2 - 1] [i_3]));
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (arr_6 [i_1] [i_2] [i_2 + 1]) : (arr_1 [i_3 - 2])));
                }
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 64512LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1]))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 - 1] [i_1])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_15)))))));
                var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_2 + 1] [i_2 + 1] [i_1]) : (var_10)));
                var_26 = ((/* implicit */long long int) min((var_26), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_7 [i_1] [i_2 - 1] [i_2])))));
            }
            for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_3) : (arr_6 [i_4] [i_1] [14LL])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (((((/* implicit */_Bool) var_10)) ? (288195191779622912LL) : (((/* implicit */long long int) arr_4 [i_4] [i_1] [i_4])))))))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (4503599627369472LL) : (var_4))))));
            }
            for (int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                var_29 = ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (arr_4 [i_5 + 2] [i_5 + 1] [i_5]) : (arr_4 [i_0] [i_5 + 2] [i_5]));
                var_30 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 288195191779622926LL)) ? (288195191779622925LL) : (-288195191779622943LL)))) ? (((((/* implicit */_Bool) 63488)) ? (((/* implicit */long long int) arr_6 [i_5] [i_0] [i_0])) : (arr_3 [i_0] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5 - 1] [i_5 + 1] [i_5] [i_5]))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483626)) ? (var_10) : (((/* implicit */int) (unsigned char)4))));
                arr_17 [i_0] [i_0] [9LL] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (arr_5 [i_5] [i_1] [i_1] [i_0])))) ? (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_5])) : (arr_8 [i_0] [i_5 + 1] [i_5] [i_1]));
                var_32 = ((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_0] [i_5 + 2] [i_5 + 2])) ? (arr_5 [i_5 + 2] [i_0] [i_5 - 1] [i_5 + 1]) : (((/* implicit */int) (unsigned char)0)));
            }
            var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_1])))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_6] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [2LL] [i_6] [i_6])) : (var_0)));
            var_35 |= ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))));
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_0])) : (arr_12 [i_6] [i_0] [i_0])));
        }
        for (long long int i_7 = 3; i_7 < 12; i_7 += 4) 
        {
            var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7 - 2])) ? (var_11) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) (unsigned char)236)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_9)) : (arr_1 [i_7 + 1])))));
            var_37 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3)) ? (arr_14 [i_0] [i_7] [i_7 + 1] [i_7 - 3]) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) arr_8 [i_7 - 2] [i_7] [i_7 + 2] [i_7])) ? (9223372036854775807LL) : (var_18))) : (((((/* implicit */_Bool) (unsigned char)11)) ? (-9223372036854775796LL) : (((/* implicit */long long int) 63482))))));
            var_38 = ((/* implicit */long long int) min((var_38), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-9223372036854775804LL) : (arr_8 [i_7 - 2] [i_7] [i_7] [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7 - 2] [i_7 - 1] [i_7])) ? (var_5) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (arr_20 [7]) : (((((/* implicit */_Bool) arr_6 [i_7] [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_7])))))))))));
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_20 [i_7 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) arr_20 [i_7 - 1])) ? (arr_20 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))) : (((((/* implicit */_Bool) arr_20 [i_7 - 1])) ? (((/* implicit */long long int) var_3)) : (arr_20 [i_0]))))))));
        }
        var_40 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? ((-9223372036854775807LL - 1LL)) : (arr_20 [i_0])))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_0])) : (arr_12 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) -2147483632)) ? (2147483647) : (arr_1 [i_0])))));
    }
    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_41 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(unsigned char)20])) ? (((((/* implicit */_Bool) 9007199254740480LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (arr_25 [(unsigned char)6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [14LL])) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : (var_0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 268369920LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255))))) : (arr_25 [0LL])))));
        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : (var_11)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8] [i_8]))) : (-1LL))) : (arr_25 [22LL])))) ? (((((/* implicit */_Bool) (unsigned char)14)) ? (arr_25 [16LL]) : (arr_25 [8]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (arr_25 [8LL]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8] [i_8])) ? (((/* implicit */int) var_2)) : (63492)))) : (((((/* implicit */_Bool) var_9)) ? (0LL) : (arr_25 [20]))))))))));
        arr_26 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : (((/* implicit */int) arr_24 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (var_6))) : (((((/* implicit */_Bool) var_0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_24 [i_8] [i_8])) : (var_8)))))));
        arr_27 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_25 [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)249)))))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_25 [i_8]) : (arr_25 [i_8]))) : (((((/* implicit */_Bool) var_14)) ? (arr_25 [i_8]) : (-16LL)))));
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            arr_32 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (var_10) : (((/* implicit */int) arr_24 [i_8] [i_9]))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (1152921503533105152LL) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [i_8] [i_9])) : (((/* implicit */int) arr_24 [i_8] [6LL])))))));
            arr_33 [i_9] [2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9])) ? (arr_31 [i_9]) : (arr_31 [i_9])))) ? (((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) var_2)) : (arr_31 [i_9]))) : (((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */int) (unsigned char)254)) : (arr_31 [i_9]))));
            var_43 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9])) ? (var_8) : (((/* implicit */int) arr_29 [i_9] [i_8] [i_9]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_30 [i_9]) : (arr_28 [i_9])))) ? (((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) arr_24 [i_8] [(unsigned char)15])) : (arr_28 [i_8]))) : (((/* implicit */int) arr_29 [i_9] [i_8] [i_9])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 21; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_11 = 2; i_11 < 21; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    {
                        var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_10 - 1] [i_11])) ? (((/* implicit */int) arr_29 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_29 [i_12] [i_11] [i_12]))));
                        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) ? (var_6) : (-9LL)));
                        var_46 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_35 [i_11] [i_10] [i_11]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_12])) ? (63497) : (((/* implicit */int) arr_34 [i_8] [(unsigned char)18]))))) : (-1LL)));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (536870848) : (((/* implicit */int) var_16))))) ? (var_14) : (var_0)));
                    }
                } 
            } 
            var_48 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (2097151)));
        }
    }
}
