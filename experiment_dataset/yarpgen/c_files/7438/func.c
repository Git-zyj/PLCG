/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7438
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1534789103)))) ? (((/* implicit */int) ((_Bool) 15U))) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) ((unsigned char) var_10))))) : (((/* implicit */int) var_8)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), (var_4)));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((signed char) arr_2 [i_0])));
                    var_14 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_4 [i_1] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_5] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) (+(((arr_15 [i_5] [i_5]) ? (((/* implicit */long long int) ((int) var_1))) : (arr_18 [i_7] [i_6] [i_5] [i_6] [i_3])))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_1 [i_6] [i_4])) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) - (54)))))));
                                arr_22 [i_6] [i_5] [i_5] [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_4] [i_4])))) : (((/* implicit */int) ((_Bool) var_0))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) var_10);
                        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-50))))) ? (((((/* implicit */_Bool) (signed char)8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5]))))) : (((/* implicit */unsigned int) (~(arr_8 [i_5] [i_4]))))))));
                        var_19 = ((/* implicit */unsigned long long int) var_5);
                        arr_25 [5LL] [i_4] [5LL] [(signed char)10] [5LL] = ((/* implicit */int) arr_17 [i_8 + 2] [i_3] [i_8 - 1] [i_8 - 1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_28 [i_4] [i_3] [i_3] &= ((/* implicit */int) var_2);
                        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [(short)0]) ? (((/* implicit */int) arr_2 [i_3])) : (939524096)))) ? (((var_8) ? (((/* implicit */int) arr_0 [i_5] [i_9])) : (((/* implicit */int) arr_20 [i_3] [i_4] [(unsigned char)9] [i_5] [i_9] [8])))) : ((+(((/* implicit */int) (_Bool)0))))));
                        arr_29 [i_3] [i_4] [i_9] = ((/* implicit */signed char) var_11);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_9)))))));
                            var_22 = ((/* implicit */_Bool) ((arr_5 [i_10]) ? (((/* implicit */int) arr_5 [i_10])) : (((/* implicit */int) arr_5 [i_10]))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_3] [i_5] [i_3] [i_3 - 2])) << (((((/* implicit */int) arr_20 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3])) - (29938))))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                            arr_34 [i_10] [i_10] [i_10] [i_5] [i_10] [i_4] [i_3] = ((/* implicit */_Bool) var_9);
                        }
                        var_25 = ((/* implicit */unsigned short) ((arr_5 [i_9]) ? (var_4) : (((/* implicit */long long int) arr_31 [i_3 + 1]))));
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_38 [i_11] [i_3] [(unsigned char)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -1583422946)) : (arr_24 [i_3 - 1] [i_11] [i_11 - 1] [i_3 - 1] [i_11])))) ? ((+(arr_18 [i_11] [i_5] [0ULL] [i_5] [6LL]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_24 [i_3 - 1] [i_3 - 1] [i_11 - 1] [i_11 - 1] [i_11]))))));
                        arr_39 [i_4] [i_4] [i_4] [7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_23 [i_4] [i_5]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_3 [i_4]) : (arr_3 [i_5])))) : (((((/* implicit */_Bool) var_0)) ? (arr_37 [i_3 - 1] [i_4] [i_11 - 1] [i_11] [i_4]) : (arr_37 [i_3 - 1] [i_4] [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
                        var_26 += ((/* implicit */_Bool) ((signed char) min((((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_8 [i_3] [i_3]))))), ((short)137))));
                        arr_40 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_0 [i_11 - 1] [i_3 - 1])) : (0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_11])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((var_8) ? (var_10) : (((/* implicit */long long int) 2744609839U)))) : (((/* implicit */long long int) min((((/* implicit */int) var_3)), (arr_8 [i_5] [i_5]))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_1)))))))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((arr_42 [i_3] [i_4] [i_3] [i_3] [i_3 + 2] [i_3]) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) ((signed char) arr_41 [i_12] [i_3 - 1] [i_3 - 2]))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                for (short i_15 = 1; i_15 < 10; i_15 += 2) 
                {
                    {
                        var_29 -= var_1;
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((arr_16 [i_3 + 2]) > (((/* implicit */unsigned long long int) var_10)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? (((var_11) ? (var_0) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_27 [i_15] [i_13] [i_14] [i_15] [i_13] [i_15]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 15U)), (((unsigned long long int) arr_8 [i_13] [i_13])))))));
                            var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_3] [(unsigned short)4])) - (arr_23 [i_3 - 1] [i_3 + 2])));
                        }
                    }
                } 
            } 
            arr_56 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_13] [i_3 + 1] [i_3 + 2] [i_13])) >> (((((/* implicit */int) arr_32 [i_13] [i_3 - 2] [i_3 + 1] [i_3])) - (176)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) <= (arr_46 [i_3])))))));
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_59 [(short)3] [i_13])) == (((/* implicit */int) var_3))))))))));
                        var_34 = ((((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_3 - 2]))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_3 + 1])) ? (((/* implicit */int) arr_61 [i_3 + 1])) : (((/* implicit */int) var_11))))));
                        var_35 = ((/* implicit */_Bool) ((long long int) ((long long int) (!(((/* implicit */_Bool) var_6))))));
                        var_36 = ((/* implicit */_Bool) var_3);
                    }
                } 
            } 
            var_37 = var_10;
        }
        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 2) 
        {
            arr_67 [i_3] = max((((var_4) << (((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) - (1))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_27 [i_3] [i_19] [i_19] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)))))));
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (_Bool)1)))))));
            arr_68 [i_3] = ((/* implicit */unsigned short) arr_50 [i_3] [i_3 + 2] [i_3]);
        }
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_63 [i_3] [i_3] [i_3 + 2] [i_3 - 2]) : (arr_49 [i_3 - 2] [(_Bool)1] [(_Bool)1])))) && (((/* implicit */_Bool) arr_48 [i_3] [i_3 - 1] [i_3]))))) : (((/* implicit */int) ((max((((/* implicit */unsigned int) var_11)), (var_5))) < (((unsigned int) arr_55 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3 + 1])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 11; i_21 += 4) 
            {
                for (signed char i_22 = 1; i_22 < 11; i_22 += 3) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) var_0);
                        var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_0)))));
                    }
                } 
            } 
            arr_76 [i_20] [i_20] = ((/* implicit */long long int) arr_6 [i_3] [i_20]);
        }
        /* vectorizable */
        for (unsigned char i_23 = 0; i_23 < 12; i_23 += 1) /* same iter space */
        {
            arr_80 [i_23] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -939524097)))));
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((arr_26 [9U] [i_23] [i_23] [i_23] [i_23]) ? (((/* implicit */int) var_1)) : (var_0))) >> (((((((/* implicit */_Bool) 0U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (56U))))))));
        }
        /* vectorizable */
        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned short) arr_41 [i_3] [i_24] [i_24]);
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (-(((/* implicit */int) arr_54 [(unsigned short)9] [i_24] [i_24] [i_3 - 1] [i_3 + 1])))))));
            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_65 [i_3]))))) ? (var_0) : (((/* implicit */int) ((_Bool) arr_50 [i_24] [i_24] [i_3]))))))));
            var_46 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_31 [i_3 - 1]) : (((/* implicit */int) var_11))));
        }
    }
    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((unsigned char) 79205356403648414ULL)))) ? (((unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_5)))) : (((/* implicit */unsigned long long int) ((1534789102) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
}
