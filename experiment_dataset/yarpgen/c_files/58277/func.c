/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58277
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) arr_0 [i_0] [(unsigned short)9]);
        var_21 = max((((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (-1617981149));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) -2147483633)) : (var_16)));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (2147483612) : (var_14)));
                var_24 = ((/* implicit */unsigned short) ((var_3) && (((/* implicit */_Bool) var_19))));
                arr_12 [15LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_11 [i_3 - 3] [i_3] [i_3] [i_3 - 1])) : (2147483612)));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3 + 1]))));
                    arr_15 [i_1] [i_2] = ((/* implicit */long long int) -2147483613);
                    var_26 |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_3 - 3])) < (((/* implicit */int) var_17))));
                }
            }
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 4; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_27 += ((/* implicit */signed char) var_18);
                            arr_23 [i_1] [i_1] [i_2] [i_5] [i_5] [i_7] = ((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_5])))));
                            var_28 = ((/* implicit */int) (-(arr_19 [i_5] [i_6 - 2] [i_6 - 2] [i_6 - 3])));
                            arr_24 [i_1] [i_1] [i_2] [i_5] [i_1] [i_5] [i_7] = ((/* implicit */_Bool) ((unsigned char) (+(var_15))));
                            arr_25 [i_5] [i_2] [i_5] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(signed char)5] [i_5] [i_6 - 1] [i_7]))))) % (((/* implicit */int) ((short) arr_3 [i_7] [i_7])))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_2]))));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483612))));
                            arr_32 [i_1] [i_2] [i_2] [i_8] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)4611)) : (var_14)))) ? (((/* implicit */int) (unsigned char)152)) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */int) (_Bool)1);
            }
            arr_33 [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_5 [i_1] [i_2]);
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)194)))))));
        }
        var_33 = ((/* implicit */unsigned char) ((var_1) - (var_16)));
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 16; i_10 += 3) 
        {
            for (long long int i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                {
                    arr_38 [i_10] [i_10 + 1] [i_11 - 1] = ((/* implicit */int) var_19);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        for (short i_13 = 4; i_13 < 15; i_13 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_13 + 2] [(_Bool)0] [i_11 + 1] [(_Bool)0] [i_1])) ? (((/* implicit */int) (short)-32755)) : (((/* implicit */int) arr_17 [(unsigned char)10] [(unsigned char)10] [i_12] [i_10]))))) ? (((/* implicit */unsigned int) arr_40 [i_10 - 2])) : (var_4)));
                                var_35 *= ((/* implicit */short) var_1);
                                arr_45 [i_13] [i_12] [i_10] [i_10] [(short)5] [(unsigned short)15] = ((/* implicit */unsigned char) (!(arr_22 [i_10] [i_13 + 1] [i_11 - 1] [i_10 - 1] [i_10])));
                                var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10 - 1] [i_11 - 1] [i_10] [i_13 - 4] [i_13 - 4]))) & ((+(4219465645U)))));
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-32764)) ? (var_11) : (var_12))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1] [4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_11] [i_11] [7LL] [i_11 + 1] [i_11 + 1]))) : (var_7)));
                }
            } 
        } 
        arr_46 [i_1] = (+(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
    }
    for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            for (short i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    {
                        arr_59 [i_14] [i_14] [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((int) arr_54 [i_14] [i_15 + 2] [i_15 + 2] [i_17]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_15 + 3] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28434))) : (var_0))))));
                        arr_60 [i_17] [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_15 - 1] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) : (arr_52 [i_14] [i_16] [i_17]))))))) | (((/* implicit */int) (unsigned char)20))));
                        arr_61 [i_14] [i_15] = ((/* implicit */short) (~(-2147483612)));
                    }
                } 
            } 
        } 
        arr_62 [i_14] &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_14] [i_14])) ? (arr_43 [i_14] [i_14] [i_14] [i_14] [i_14]) : (var_12)))), (max((((/* implicit */long long int) max((((/* implicit */short) (unsigned char)155)), ((short)-31515)))), (var_16)))));
        var_39 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_40 [i_14])))) ? (((/* implicit */long long int) arr_40 [i_14])) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) var_11)) : (var_15)))));
    }
    /* LoopSeq 1 */
    for (int i_18 = 0; i_18 < 12; i_18 += 4) 
    {
        arr_67 [i_18] = ((/* implicit */short) var_13);
        var_40 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_9)) != ((+(var_12))))))));
        arr_68 [i_18] [i_18] = ((/* implicit */unsigned short) (~(min((((((/* implicit */long long int) var_11)) & (arr_34 [i_18] [i_18]))), (((-6876497429171514579LL) & (((/* implicit */long long int) 4294967273U))))))));
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 25; i_19 += 3) 
    {
        for (int i_20 = 0; i_20 < 25; i_20 += 3) 
        {
            {
                var_41 ^= ((/* implicit */signed char) (short)-28434);
                var_42 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) arr_71 [i_19] [i_19])) & (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_19] [(unsigned char)4] [(unsigned char)4])) || (((/* implicit */_Bool) 727834373))))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_74 [i_19] [i_20])) + (((/* implicit */int) arr_69 [i_19])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    arr_78 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_0)))) ? (((var_3) ? (-2147483644) : (((/* implicit */int) var_13)))) : ((-(((/* implicit */int) arr_77 [i_19] [i_19] [i_21]))))));
                    arr_79 [i_19] = ((/* implicit */long long int) arr_73 [i_19] [i_20] [i_19]);
                }
            }
        } 
    } 
}
