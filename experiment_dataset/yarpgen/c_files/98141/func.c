/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98141
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 1299090268)) ? (-4553038165445557331LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)75)), (-1466025510)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-32753)) && (((/* implicit */_Bool) -285678654))))) : (((/* implicit */int) (unsigned char)243)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_3 + 1] |= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)65524)) >> (((((/* implicit */int) (unsigned short)61669)) - (61666))))) == (((/* implicit */int) (unsigned short)19))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3 + 1] [i_3])) | (var_5)));
                        var_17 = ((/* implicit */int) ((((/* implicit */long long int) var_2)) % (arr_6 [i_0 + 1] [i_0] [i_0])));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24623)) ? (((/* implicit */int) arr_4 [i_0 + 3])) : (((/* implicit */int) (unsigned char)255))));
                    }
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 3]))) > (arr_1 [i_2] [i_0 + 4]))))))) ? (((/* implicit */int) ((((((/* implicit */long long int) var_3)) & (var_8))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24593)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)18)))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) 7305824929221696847LL)) && (((/* implicit */_Bool) var_3))))) * (((/* implicit */int) (short)15))))));
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [7] [i_2] [i_0]) % (((/* implicit */int) (short)24642))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_6)) >= (arr_6 [i_0 + 2] [i_1] [i_2])))) : (min((var_4), (var_0))))), (max((((/* implicit */int) arr_0 [i_0 - 1])), (((arr_2 [i_1] [i_2]) - (((/* implicit */int) (short)24615))))))));
                }
            } 
        } 
        var_21 = ((((/* implicit */int) (short)-24636)) * (((/* implicit */int) (unsigned short)48508)));
        arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2LL)) ? (285678640) : (((/* implicit */int) (unsigned char)57))));
        var_22 = ((/* implicit */int) max((var_22), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0 + 4])) : (((/* implicit */int) (unsigned char)16)))) + (max((285678647), (((/* implicit */int) (unsigned char)255))))))));
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) min(((unsigned short)65510), ((unsigned short)65513))))))) >> (((min((arr_15 [i_4]), (arr_15 [i_4]))) - (5718315157835961091LL))))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned char)8]))) >= (var_13)))) << (((((1268637900) % (-1268637909))) - (1268637889)))));
        arr_17 [i_4] [i_4] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2004241266)) ? (((/* implicit */int) arr_14 [13ULL])) : (-2004241259)))), (((var_12) & (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25)) <= (-1268637884))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_24 = ((/* implicit */long long int) ((var_3) < (var_4)));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_18 [i_5])));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */long long int) 593241327)) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) % (9223372036854775807LL))))))));
                arr_27 [i_6] [i_7] = ((/* implicit */unsigned char) ((((9223372036854775807LL) << (((((((/* implicit */int) (short)-24621)) + (24652))) - (31))))) & (((/* implicit */long long int) var_0))));
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 2004241275)) || (((/* implicit */_Bool) (short)-24626))));
            }
            for (short i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                arr_30 [i_5] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647ULL)) ? (((((/* implicit */_Bool) arr_25 [5] [i_6] [i_6])) ? (var_6) : (474570900))) : (arr_19 [i_5])));
                var_28 = ((/* implicit */int) ((arr_22 [i_8]) & (((/* implicit */unsigned long long int) var_9))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_33 [i_5] [i_6] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_5]))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_5] [i_6] [(unsigned short)7] [i_9])) || (((/* implicit */_Bool) 9223372036854775807LL))));
                }
                arr_34 [i_5] [i_5] [i_6] [6LL] = ((((19) >> (((((/* implicit */int) (short)-1)) + (8))))) * (var_11));
            }
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((arr_18 [i_6]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_10])) && (((/* implicit */_Bool) (-2147483647 - 1)))))))));
                var_31 = ((/* implicit */long long int) ((arr_24 [i_5] [i_6] [i_5]) & (arr_24 [i_5] [i_6] [i_5])));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1119567983)) % (((((/* implicit */long long int) 14)) - (-1752874570025136719LL)))));
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((arr_25 [i_5] [i_6] [i_10]) - (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8)) ? (-1406684359) : (((/* implicit */int) (unsigned short)65505))))))))));
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    arr_39 [i_11] [i_6] = ((/* implicit */unsigned char) (((-2147483647 - 1)) > (((/* implicit */int) arr_32 [i_5] [i_6] [0LL] [i_10] [i_11]))));
                    arr_40 [i_5] [i_6] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7596)) * (((/* implicit */int) (unsigned char)120))));
                }
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */int) var_14)) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32030))) < (16612280347428127623ULL)))))))));
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_31 [i_5] [i_6] [i_6] [i_12]) > (((/* implicit */unsigned long long int) var_5)))))) : (((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_10])) ? (-20LL) : (((/* implicit */long long int) arr_28 [i_5] [i_5] [i_10] [i_12])))))))));
                    arr_44 [i_5] [i_5] [i_10] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_10])) || (((/* implicit */_Bool) 2147483641ULL))));
                }
            }
            var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-24000)) % (((/* implicit */int) (short)-29903))));
            arr_45 [i_5] [i_5] [i_6] = ((/* implicit */int) ((var_7) | (((/* implicit */unsigned long long int) var_8))));
            var_37 *= ((/* implicit */short) ((((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5])))))) < (((/* implicit */int) var_10))));
            arr_46 [i_6] [i_5] = ((((/* implicit */_Bool) 2147483670ULL)) ? (2) : (3));
        }
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            arr_50 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-32028)) + (2147483647))) << (((((((/* implicit */int) (short)-4997)) + (5002))) - (5)))));
            /* LoopSeq 2 */
            for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                var_38 = ((/* implicit */int) ((18446744071562067961ULL) / (18446744071562067994ULL)));
                arr_53 [i_5] [i_13] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_5] [i_13] [i_14])) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))))) || (((/* implicit */_Bool) arr_18 [i_13]))));
                var_39 += ((/* implicit */unsigned char) ((((var_13) << (((((/* implicit */int) var_10)) - (11378))))) << (((((arr_29 [(unsigned char)11] [i_13] [i_5]) - (var_3))) + (675465085)))));
                arr_54 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [(short)0] [i_13] [i_13] [(short)0])) > (((/* implicit */int) (short)-24604))));
            }
            for (long long int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65527)) >> (((222206765918660911LL) - (222206765918660893LL)))))) ? (((((/* implicit */_Bool) arr_49 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) 1384323588)) : (arr_15 [i_13]))) : (((/* implicit */long long int) arr_35 [i_5] [i_15])))))));
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((137170518016LL) >> (((18446744071562067949ULL) - (18446744071562067937ULL))))))));
                    var_42 = ((((((((/* implicit */int) arr_20 [i_15])) + (2147483647))) << (((arr_29 [i_13] [i_13] [i_5]) - (988383526))))) | (((/* implicit */int) ((((/* implicit */int) arr_14 [i_15])) <= (((/* implicit */int) arr_48 [i_5] [i_5] [4LL]))))));
                }
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_43 += ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_62 [i_5] [i_13] [i_13] [i_13] [i_15] [i_17] [i_18])) * (262198473721149901ULL)));
                        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) & (-796535077458803634LL))))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((2147483685ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32032))))))));
                    }
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_2) : (arr_56 [i_5] [i_15] [i_17])))) ? (((-1623952872) & (var_9))) : (var_6))))));
                }
            }
        }
        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_5] [i_5] [i_5] [i_5]))) : (arr_49 [i_5] [i_5] [i_5])));
    }
    var_48 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_4))))) ? (((2147483693ULL) % (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (var_13))))))) + (((/* implicit */unsigned long long int) var_8))));
    var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_8) ^ (((/* implicit */long long int) var_11)))) / (var_1)))) || (((((17264776606154179698ULL) - (((/* implicit */unsigned long long int) var_6)))) > (((/* implicit */unsigned long long int) ((var_1) & (-796535077458803620LL))))))));
    var_50 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (max((((/* implicit */unsigned long long int) var_6)), (var_13)))))) >= (((/* implicit */int) ((var_8) > (min((-1527339017890628981LL), (var_1))))))));
}
