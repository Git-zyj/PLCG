/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66713
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
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */int) min((arr_3 [i_0 + 3]), (arr_3 [i_0 - 1])))) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 1])) >= (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-83)), (-490858471)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))) > (var_13)))))) % (((((/* implicit */_Bool) ((var_5) << (((((/* implicit */int) (unsigned char)188)) - (188)))))) ? (((/* implicit */int) arr_5 [i_0 + 3] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_1] [i_0 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) 3792540825U);
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [(signed char)2]))))) ? (max((var_1), (((/* implicit */unsigned int) (_Bool)1)))) : (3792540808U)));
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_19 &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0 + 2]))));
                        arr_18 [i_2] [i_2] [i_2] [2LL] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */long long int) (!(((/* implicit */_Bool) (((~(var_1))) << (((((((/* implicit */_Bool) (short)31301)) ? (arr_15 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2]) : (((/* implicit */int) var_9)))) - (1121205209))))))))) : (((/* implicit */long long int) (!(((/* implicit */_Bool) (((~(var_1))) << (((((((((/* implicit */_Bool) (short)31301)) ? (arr_15 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2]) : (((/* implicit */int) var_9)))) - (1121205209))) + (2026032143)))))))));
                    }
                }
            } 
        } 
        arr_19 [8U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
                    {
                        {
                            arr_31 [i_0 + 1] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((unsigned short) (~(var_1))));
                            arr_32 [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_15 [i_6] [i_8 + 3] [i_7] [(unsigned char)9] [i_7] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_6))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) arr_17 [i_6] [i_8] [i_8] [i_8 - 2] [(unsigned char)0] [i_6])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (int i_11 = 2; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_25 [i_9])) : (((/* implicit */int) max((arr_6 [i_9 + 1] [i_11 + 1]), (((/* implicit */short) (_Bool)1)))))));
                            arr_40 [i_11] [(unsigned char)8] [i_5] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_11 [i_11 + 1] [i_11 - 1] [(unsigned char)11] [i_0 + 3] [(unsigned char)11])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [(signed char)8] [i_11 - 1] [i_0 + 1] [i_0 + 1] [i_0])), (0ULL))))));
                        }
                    } 
                } 
                var_21 *= (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) <= (arr_7 [i_0] [i_9] [(short)0])))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_9 - 2] [i_5] [i_5] [i_5])), (3792540842U))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_10)) : (2697940480U)))))) ? (((((var_15) >> (((((/* implicit */int) var_8)) - (58791))))) >> (((((/* implicit */int) arr_17 [i_0] [i_5] [i_9] [i_0 - 2] [2ULL] [i_9])) - (141))))) : (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
            }
            /* vectorizable */
            for (unsigned char i_12 = 1; i_12 < 11; i_12 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) arr_21 [i_0 + 2] [i_12 + 1] [i_12]);
                /* LoopNest 2 */
                for (unsigned char i_13 = 4; i_13 < 10; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) 502426454U))) : (((/* implicit */int) (signed char)-8))))));
                            arr_48 [i_0] [7U] [i_0] [i_0 + 2] [i_0] [i_0] [i_12] = ((/* implicit */unsigned char) ((unsigned int) arr_21 [i_0 - 2] [i_13 + 1] [i_12 - 1]));
                            arr_49 [i_12] = ((/* implicit */short) arr_37 [i_0] [i_0] [i_0] [2ULL]);
                            arr_50 [i_5] [i_5] [i_5] [i_12] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((arr_11 [i_13 - 1] [i_13 - 1] [i_12 + 1] [i_13 - 1] [i_5]) + (2147483647))) >> ((~(((/* implicit */int) (signed char)-1))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((_Bool) arr_8 [i_0 - 2] [i_12 - 1]));
            }
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                arr_55 [i_5] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (var_5)));
                var_26 += ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (arr_34 [i_15] [i_5] [i_0 + 2]))))));
                arr_56 [i_0] [i_0] [(unsigned char)3] = ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) arr_26 [i_15] [i_0] [i_5] [i_0] [i_0])) : (((/* implicit */int) var_12)));
            }
            arr_57 [i_0] [i_0 - 1] = ((/* implicit */_Bool) (+(0LL)));
            arr_58 [i_5] [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_45 [i_0])) == (((/* implicit */int) arr_20 [i_0] [i_0] [i_5]))))) == (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_30 [i_0] [i_5] [i_5] [i_5] [(_Bool)1] [i_0] [i_5]))))))), (arr_25 [(short)9])));
            /* LoopNest 2 */
            for (signed char i_16 = 1; i_16 < 11; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (arr_38 [i_16 - 1]))) * (((((/* implicit */_Bool) arr_38 [i_16 + 1])) ? (arr_38 [i_17]) : (arr_38 [i_0 + 3]))))))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_18 = 1; i_18 < 17; i_18 += 3) 
    {
        for (short i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            {
                arr_69 [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!((_Bool)1))))))) ? (((((/* implicit */_Bool) (unsigned char)138)) ? (arr_66 [i_18 - 1] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_19]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) >> (((var_5) - (517306227))))))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_68 [i_18 + 1])), ((short)5633))))))))));
            }
        } 
    } 
}
