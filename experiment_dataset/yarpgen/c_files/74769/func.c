/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74769
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = arr_2 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (arr_2 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 + 3] [8])) ? (((/* implicit */int) arr_4 [i_0] [6U])) : (((/* implicit */int) arr_4 [i_1] [(signed char)10]))));
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 + 3] [i_1 + 1] [i_0]))));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) var_3))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) arr_6 [(unsigned char)14] [i_0]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) % (var_19))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) << (((((/* implicit */int) arr_9 [i_2])) - (23))))))));
        var_26 = ((/* implicit */unsigned short) max((((/* implicit */long long int) -266836926)), (-3518923339276728049LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 4; i_3 < 15; i_3 += 1) 
        {
            arr_13 [i_2] [i_3 + 2] [(unsigned short)1] = arr_6 [i_2] [i_2];
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_3 + 1] [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_3 + 2] [i_2])) : (((/* implicit */int) var_15))));
            arr_14 [i_2] = ((/* implicit */short) ((unsigned short) var_2));
        }
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_2] [i_2]), (((/* implicit */unsigned char) var_7))))) ? (((long long int) arr_4 [i_2] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2])))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_23 [i_2] [i_2] = min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((short) (unsigned short)8988))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_17 [i_6 - 1] [i_5] [i_2])))))), (max((((/* implicit */int) min((arr_18 [i_5]), (arr_18 [i_2])))), (arr_2 [i_6]))));
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_4] [i_2] [i_2] [i_6 + 1])) ? (arr_20 [i_2] [i_2] [i_5] [i_5]) : (((/* implicit */unsigned int) arr_22 [i_2] [i_2] [i_2] [(unsigned short)0] [i_6 + 1])))))));
                            arr_24 [i_2] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_6 + 1] [i_2] [i_4])) ? (((/* implicit */int) arr_19 [13] [i_6 + 1] [i_2] [i_6 + 1])) : (((/* implicit */int) arr_19 [i_2] [i_6 + 1] [i_2] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6 - 1] [i_2] [i_6 - 1] [i_6 + 1]))))) : (((((/* implicit */_Bool) arr_22 [i_2] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_7]))))) : (((/* implicit */int) ((unsigned char) (unsigned short)54854)))))));
                            var_30 = min(((-(((/* implicit */int) ((unsigned short) (unsigned short)54865))))), (min((((((/* implicit */_Bool) arr_18 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_8 [i_2])))), (((/* implicit */int) var_4)))));
                            var_31 *= ((/* implicit */unsigned short) (+(min((arr_15 [i_6 - 1] [i_5] [i_6 - 1]), (((/* implicit */unsigned int) arr_10 [i_6 + 1] [i_5]))))));
                        }
                    } 
                } 
                arr_25 [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((int) ((unsigned long long int) var_13))));
            }
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((0U), (3183372578U)))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_18 [i_2])))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) max((var_19), (var_14)))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_1))) : (((((/* implicit */_Bool) var_6)) ? (arr_26 [i_2] [i_8] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                        arr_32 [i_2] [i_4] [i_8] [7U] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) var_2)), (var_14))), (((/* implicit */long long int) ((unsigned short) arr_2 [i_2]))))))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            var_33 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_10] [i_11]))))), (min((arr_33 [i_10] [i_11]), (arr_33 [i_10] [i_10])))));
            arr_40 [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_10] [i_10] [i_11])) ? (((/* implicit */int) arr_4 [i_10] [i_10])) : (arr_2 [i_10])))))));
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                for (unsigned short i_13 = 2; i_13 < 9; i_13 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) var_7);
                        var_35 *= ((/* implicit */short) min(((-(-3518923339276728049LL))), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) -1383306008)), (4294967284U))))))));
                        var_36 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(var_1)))))) ? (((((/* implicit */_Bool) max((arr_7 [i_13] [i_11]), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */int) arr_16 [i_12] [i_11])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 2; i_14 < 12; i_14 += 4) 
                        {
                            arr_49 [i_12] [i_11] [i_12] [i_11] [i_12] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_19 [i_12] [i_11] [i_12] [i_12])) ? (arr_38 [i_14]) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_47 [i_10] [(signed char)8] [i_11] [i_12] [i_13] [(signed char)8] [i_14 - 1])) : (((/* implicit */int) var_7))))))), (((((((/* implicit */long long int) arr_27 [i_10] [(unsigned short)8] [i_10])) != (var_14))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_10] [i_11]))) : (var_16))) : (((unsigned long long int) arr_43 [i_10] [i_11] [i_13 - 2]))))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_4), (arr_9 [i_10]))))))) ? ((((!(((/* implicit */_Bool) arr_36 [i_10])))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */int) arr_7 [i_10] [(_Bool)1])) + (arr_41 [i_10] [i_11] [i_12]))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_38 [i_10]), (((/* implicit */unsigned long long int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_45 [i_12] [i_13] [i_12] [i_11] [i_12])) : (((/* implicit */int) arr_18 [i_14]))))))))));
                            var_38 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-22161)), (3518923339276728048LL)));
                            arr_50 [i_10] [i_11] [i_12] [i_12] [i_13 + 1] [i_14 - 2] [i_14] = ((/* implicit */unsigned char) arr_33 [10] [0ULL]);
                        }
                        var_39 = ((/* implicit */unsigned short) ((unsigned long long int) arr_29 [(_Bool)1] [i_12]));
                    }
                } 
            } 
        }
        for (signed char i_15 = 4; i_15 < 12; i_15 += 2) 
        {
            var_40 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_53 [i_15 - 3] [i_15 - 3])) ? (arr_53 [i_15 - 3] [(unsigned short)4]) : (arr_53 [i_15 - 3] [i_15 + 1]))));
            var_41 -= ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_52 [i_10] [8] [i_10]), (((/* implicit */unsigned long long int) arr_44 [i_10] [i_10] [4U] [i_10]))))) ? (min((var_16), (((/* implicit */unsigned long long int) arr_12 [i_15] [(short)0] [i_10])))) : (((/* implicit */unsigned long long int) min((var_9), (var_9)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) ((short) var_15))))))));
            var_42 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((int) arr_53 [i_10] [i_10]))) ? (((/* implicit */unsigned long long int) arr_15 [(unsigned short)14] [i_15] [i_15 - 2])) : (var_1)))));
            var_43 = ((/* implicit */int) (~(3912026606U)));
        }
        for (short i_16 = 0; i_16 < 13; i_16 += 1) 
        {
            var_44 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_15 [i_10] [i_16] [i_10])) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) var_6)))), ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_18))))))));
            arr_56 [i_10] [i_10] [i_16] = ((/* implicit */unsigned long long int) arr_15 [(signed char)5] [i_16] [i_16]);
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_16] [(short)6] [i_10])) ? (var_19) : (((/* implicit */long long int) arr_36 [i_10]))))) ? (((/* implicit */int) ((_Bool) var_19))) : (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_31 [i_10] [i_16] [i_10] [9U] [i_10])) - (21)))))))) ? ((-(((((/* implicit */_Bool) 10U)) ? (3518923339276728039LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (arr_41 [i_10] [i_10] [i_10]) : (var_9))) <= (((((/* implicit */int) arr_11 [i_16])) & (var_9)))))))));
            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_0 [i_10])) < (((/* implicit */int) arr_0 [i_16]))))), (((int) arr_0 [i_16])))))));
            arr_57 [i_16] [i_16] [i_16] = min((((((/* implicit */_Bool) arr_19 [i_10] [6U] [i_16] [i_10])) ? (((/* implicit */int) arr_19 [i_10] [i_10] [i_16] [i_16])) : (((/* implicit */int) arr_19 [i_10] [i_10] [i_16] [i_16])))), (((((/* implicit */_Bool) arr_22 [i_16] [(_Bool)1] [i_16] [i_10] [0LL])) ? (((/* implicit */int) arr_19 [i_10] [i_10] [i_16] [i_16])) : (arr_22 [i_10] [i_10] [1LL] [i_10] [i_16]))));
        }
        arr_58 [i_10] = ((/* implicit */_Bool) arr_20 [16] [i_10] [i_10] [i_10]);
    }
    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_0)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (266836930) : (-253352215)))) : (((((/* implicit */_Bool) var_19)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
}
