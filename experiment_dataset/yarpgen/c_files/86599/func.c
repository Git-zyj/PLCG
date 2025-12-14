/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86599
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
    var_17 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 381442252670455983ULL)) ? (18237671115373494139ULL) : (((/* implicit */unsigned long long int) -7204909751049978643LL))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == (var_4)))) == (((/* implicit */int) max((((/* implicit */short) var_12)), (var_0)))))))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_7))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */long long int) arr_2 [i_0]);
        var_20 = ((/* implicit */unsigned short) arr_1 [(_Bool)1]);
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((arr_4 [(unsigned short)4] [i_2]) >> ((((-(((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)0])) ? (arr_5 [(_Bool)1] [4ULL]) : (arr_5 [i_1 - 1] [16U]))))) + (2580017729830106624LL))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */_Bool) 209072958336057477ULL);
                arr_14 [i_1] = ((/* implicit */int) var_11);
                var_23 = ((arr_5 [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_13 [i_1] [i_3] [i_2 + 3] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_3]))))) ? (arr_9 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1])))));
            }
            for (int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 2; i_6 < 15; i_6 += 3) 
                    {
                        arr_21 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) var_16));
                        arr_22 [i_1] [i_1 + 1] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned char) (+(arr_10 [i_6] [8LL] [8LL])));
                        var_25 = ((/* implicit */long long int) min((var_25), (((((arr_10 [i_1] [i_5] [i_6]) + ((+(-7204909751049978643LL))))) + (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (arr_15 [(unsigned short)14] [(unsigned short)2])))) ? (7204909751049978654LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [i_5] [i_6 + 2])))))))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 16; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_5) != (arr_5 [i_2] [i_1])))) >> (((/* implicit */int) arr_25 [i_7] [i_7 + 2] [i_7] [i_7 - 1] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_12)))))) : (((/* implicit */int) max((arr_19 [i_7 - 3] [i_7 - 3] [i_2 - 4] [i_1 - 3]), (((arr_4 [i_1] [i_1]) != (((/* implicit */long long int) var_1)))))))));
                        arr_26 [i_1] [i_1] [i_1] [(unsigned short)11] [i_5] [i_5] [i_5] = ((unsigned long long int) ((((/* implicit */_Bool) ((int) var_11))) && (((var_14) && (arr_20 [i_1] [i_2] [i_5] [i_7])))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_7] [i_1])) / (((/* implicit */int) (!(((((/* implicit */long long int) arr_17 [i_1] [i_1])) > (var_5))))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) ((arr_19 [i_2] [i_2] [(unsigned char)9] [(unsigned char)9]) ? (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2 - 3] [i_5])) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) var_4))))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_1 + 2] [(short)12])))))));
                        var_30 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1))));
                        arr_29 [0ULL] [0ULL] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_4] [i_4] [i_1] [i_4]))) / (var_8)))));
                        arr_30 [i_1] [i_2 - 4] [i_4] [i_2 - 4] [i_8] [i_8] = ((/* implicit */int) (~(arr_4 [i_1] [i_1 + 2])));
                    }
                    var_31 *= ((/* implicit */unsigned char) var_8);
                }
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (+(7204909751049978654LL))))));
                    arr_35 [i_1] [i_4] [i_2 - 4] [i_2 - 4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_2] [i_1])) != (((/* implicit */int) (((!(arr_20 [i_1] [i_4] [i_4] [(unsigned short)7]))) || (var_13))))));
                }
                for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        arr_42 [0LL] [i_10] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_40 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1])))));
                        var_33 -= ((/* implicit */unsigned char) arr_20 [i_1] [i_1] [i_10] [i_1]);
                        var_34 = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned long long int) arr_28 [i_1] [i_2 - 4] [3U] [i_10] [0])), (arr_32 [i_1 - 2] [i_2 + 2] [i_2 + 2] [i_1]))));
                        var_35 = ((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */long long int) max(((-(((/* implicit */int) arr_31 [14LL] [i_1 + 2] [(signed char)5] [i_2] [i_1 + 2])))), (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) arr_23 [(short)1] [(short)1] [(short)1] [2ULL] [i_11]))))))))));
                    }
                    var_36 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((((/* implicit */int) arr_28 [(short)16] [i_1 + 2] [i_2 - 4] [i_4] [i_4])) >> (((((/* implicit */int) arr_12 [i_1])) - (42442))))) : (min((((((/* implicit */int) arr_40 [i_1 - 2] [i_1 - 2] [i_4] [(unsigned short)12] [i_4])) - (((/* implicit */int) arr_27 [i_10] [i_10] [i_1] [i_10])))), (((((/* implicit */_Bool) arr_39 [i_1] [i_4] [i_4])) ? (2040670489) : (((/* implicit */int) arr_7 [i_1] [i_1]))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((((/* implicit */int) arr_28 [(short)16] [i_1 + 2] [i_2 - 4] [i_4] [i_4])) >> (((((((/* implicit */int) arr_12 [i_1])) - (42442))) + (33735))))) : (min((((((/* implicit */int) arr_40 [i_1 - 2] [i_1 - 2] [i_4] [(unsigned short)12] [i_4])) - (((/* implicit */int) arr_27 [i_10] [i_10] [i_1] [i_10])))), (((((/* implicit */_Bool) arr_39 [i_1] [i_4] [i_4])) ? (2040670489) : (((/* implicit */int) arr_7 [i_1] [i_1])))))))));
                }
                /* LoopSeq 3 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_12 + 1] [i_12] [i_12] [i_12 + 1]) ? (((/* implicit */int) arr_11 [i_12 + 1] [i_12] [i_12] [i_12 + 1])) : (((/* implicit */int) arr_20 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1 + 2] [i_1 - 2]))))) : (((/* implicit */int) ((_Bool) arr_17 [i_12 + 1] [i_2 - 3])))));
                    arr_47 [i_1] [i_1] [i_1] = ((/* implicit */int) var_11);
                    var_38 = (i_1 % 2 == zero) ? (((/* implicit */short) (((((~(arr_15 [i_1] [i_1]))) + (2147483647))) << (((((/* implicit */int) arr_18 [13ULL] [i_1])) >> (((((arr_4 [i_1] [i_1]) - (-7204909751049978677LL))) - (7791306254126387046LL)))))))) : (((/* implicit */short) (((((~(arr_15 [i_1] [i_1]))) + (2147483647))) << (((((/* implicit */int) arr_18 [13ULL] [i_1])) >> (((((((arr_4 [i_1] [i_1]) + (-7204909751049978677LL))) - (7791306254126387046LL))) + (6062348798150756617LL))))))));
                    var_39 = ((/* implicit */short) ((unsigned char) arr_10 [i_12 + 1] [i_2] [i_1]));
                    var_40 = ((((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) << (((/* implicit */int) ((((/* implicit */int) var_16)) > (-2040670488))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-(((var_14) ? (arr_10 [(short)3] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))))));
                }
                for (short i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2] [(unsigned char)16]))));
                    var_42 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_14) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [16U] [i_2] [i_2] [i_2])))))))) ? (min((((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) arr_46 [i_1] [i_2] [7LL] [7LL] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (arr_32 [i_1] [10] [i_4] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((long long int) ((var_2) << (((((-1) + (50))) - (49)))))))));
                }
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    var_43 = ((/* implicit */int) var_2);
                    var_44 -= ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) ((var_6) >> (((((/* implicit */int) var_7)) + (24295)))))));
                    var_45 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_37 [i_1 - 2] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_37 [i_1 - 3] [i_2 + 1] [i_4] [(unsigned short)3])))));
                }
                var_46 = ((/* implicit */long long int) (!((_Bool)1)));
            }
        }
        var_47 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_1 - 3] [8LL])) | ((~(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) arr_8 [(short)14])) >> (((/* implicit */int) var_11))))));
        var_48 = ((/* implicit */_Bool) min((arr_45 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
    }
}
