/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94067
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
    var_10 = ((/* implicit */signed char) min(((-(var_8))), (((/* implicit */long long int) max((var_1), (4294967295U))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)15)) != (((/* implicit */int) arr_1 [i_0 + 2])))) ? (((arr_1 [i_0 - 2]) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)25)))) : (((/* implicit */int) min((arr_1 [i_0 + 3]), (arr_1 [i_0 - 4]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 4; i_1 < 8; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned char)241)) - (213))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)11])))))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2 - 2]))) : (((((/* implicit */_Bool) arr_4 [9LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (var_0))))))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                arr_11 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_8 [(unsigned char)6] [i_3]))))) ? (arr_6 [i_1 - 3] [5ULL] [i_2 - 2]) : (((/* implicit */long long int) (~(((/* implicit */int) var_6))))))))));
                var_12 &= ((/* implicit */long long int) var_9);
            }
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4178097610U)) ? (((/* implicit */int) arr_8 [(short)5] [i_2])) : (((/* implicit */int) var_9))))) ? ((-(var_2))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)48062)) : (((/* implicit */int) arr_8 [(_Bool)1] [i_2]))))))) ? ((~(((((/* implicit */_Bool) var_9)) ? (arr_10 [(unsigned char)10] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (signed char)-80)))), (((/* implicit */int) (signed char)-65))))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) min((16383ULL), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1780590037)))))) : (max((((/* implicit */unsigned int) (unsigned char)182)), (var_4))))) : (((/* implicit */unsigned int) ((arr_1 [i_1 + 2]) ? (((/* implicit */int) arr_1 [i_1 - 4])) : (((/* implicit */int) arr_1 [i_1 - 3])))))));
                            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned short)10] [(short)2] [i_4] [(unsigned char)6] [(signed char)2] [i_4] [i_2])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [(signed char)4] [i_2] [i_2] [(signed char)8] [(_Bool)1] [i_4] [i_6])) : (((/* implicit */int) var_6)))) : ((~(((/* implicit */int) arr_17 [(signed char)2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_4] [i_2]))))));
                            var_16 *= ((/* implicit */long long int) min((min((arr_12 [i_1 - 2] [i_1 + 1] [6ULL] [i_1 + 1]), (arr_12 [i_1 - 3] [i_1 - 3] [(unsigned char)2] [i_1 - 3]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1 - 3] [i_1 - 1] [8] [i_1 - 4])))))));
                            var_17 *= ((/* implicit */unsigned char) ((short) min((arr_18 [i_1] [i_2] [(unsigned char)8] [i_4] [i_4] [i_5] [i_6]), (arr_18 [i_1] [i_1 - 1] [i_2] [i_4] [i_5] [i_6] [i_6]))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_4] [(_Bool)1] [i_4]))))) ? (min((arr_10 [i_1 + 4] [i_2 + 1]), (((/* implicit */unsigned long long int) (signed char)65)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)116)) / (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) min((arr_8 [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [4U]))))))))));
            }
            for (short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_26 [2ULL] [i_9] [i_7] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_24 [i_1] [i_2] [i_7] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1] [(unsigned char)11] [(unsigned short)4] [(unsigned char)8] [i_9]))) : (var_8))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) arr_9 [i_9] [0U] [i_9]))));
                            var_19 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((((/* implicit */short) ((18446744073709551596ULL) > (((/* implicit */unsigned long long int) 38835350))))), ((short)9177))))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_1 + 3])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_8]))))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_25 [2U] [(short)7] [i_7] [i_7] [i_7])) ^ (((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_7)), (var_9)))))))) : ((+(((arr_1 [(short)0]) ? (var_1) : (var_0)))))));
                var_22 = ((/* implicit */unsigned short) ((unsigned int) max((arr_24 [(unsigned short)2] [i_7] [i_7] [1]), (((/* implicit */signed char) var_6)))));
            }
        }
        var_23 = ((/* implicit */unsigned short) (~(min((2147483647), (((/* implicit */int) var_6))))));
        arr_27 [10U] = ((/* implicit */unsigned int) min((max((arr_6 [i_1] [(unsigned char)6] [i_1]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (_Bool)1))));
        var_24 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2] [(_Bool)1] [(unsigned char)6])) && (arr_20 [i_1 - 2]))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_9))));
    }
    for (short i_10 = 1; i_10 < 20; i_10 += 1) 
    {
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        var_27 += ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))) < (((/* implicit */unsigned int) ((((((/* implicit */int) arr_28 [i_10])) + (((/* implicit */int) (unsigned char)8)))) % (((/* implicit */int) arr_33 [i_10] [i_10 - 1] [i_12] [i_13]))))));
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [1U] [i_11] [i_11])))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(var_7))))));
                        arr_42 [i_11] [i_11] [(unsigned short)8] [(_Bool)1] = ((/* implicit */long long int) min(((~(arr_36 [i_10 + 1] [i_10] [i_10 + 1] [i_12]))), (min(((-(-1996835992))), (((((/* implicit */_Bool) arr_36 [i_11] [(unsigned short)14] [(unsigned short)4] [i_11])) ? (((/* implicit */int) (unsigned char)2)) : (arr_36 [i_12] [(_Bool)1] [i_12] [14])))))));
                    }
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) arr_44 [(unsigned char)0] [6U] [i_11] [i_15] [i_15]);
                            arr_48 [20U] [i_11] [i_11] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_35 [i_10] [i_11] [i_15])), (((((/* implicit */_Bool) (-(-5557252704962557474LL)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */short) var_6)), (var_9))))))));
                            arr_49 [i_10] [i_11] [(unsigned char)14] [i_11] [(_Bool)1] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_46 [(unsigned char)13] [i_11] [i_11] [(unsigned short)19] [(_Bool)1] [(unsigned short)6]))));
                            arr_50 [i_10] [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_43 [i_10 - 1] [i_10] [i_10] [i_10 - 1] [i_11] [(unsigned short)9]))))));
                            var_31 = ((/* implicit */unsigned char) (+(min((-1686653811), (((/* implicit */int) arr_34 [(unsigned char)11] [(unsigned short)20] [i_16]))))));
                        }
                        for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            var_32 = ((/* implicit */int) min((((/* implicit */long long int) ((arr_31 [i_10 + 1] [i_10 - 1]) + (arr_31 [i_10 + 1] [i_10 + 1])))), (((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_10] [i_10] [(unsigned short)13] [i_11] [i_12] [i_11] [i_17]))) - (((5014916344382528911LL) / (((/* implicit */long long int) var_4))))))));
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_8))));
                        }
                        for (signed char i_18 = 2; i_18 < 19; i_18 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned short) min((arr_38 [i_11] [i_11] [i_12] [i_15]), (arr_51 [i_10] [i_15])));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_11])) ? (((/* implicit */int) arr_28 [i_12])) : (((/* implicit */int) arr_28 [i_12]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_10 + 1])) ^ (((/* implicit */int) arr_28 [i_10]))))))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [4])) < (((/* implicit */int) arr_56 [i_18 + 2] [(unsigned short)3] [i_12] [(short)12] [i_11] [11] [i_10])))))) != ((-(9223372036854775784LL)))));
                        }
                        arr_59 [(unsigned char)4] [i_11] [16U] [4LL] [6] |= ((unsigned char) (!((!(((/* implicit */_Bool) var_9))))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) min(((+(var_8))), (((var_7) ? (-5014916344382528912LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11] [i_12] [i_15]))))))))));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)1)))))));
                    }
                    var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_44 [(signed char)4] [(unsigned short)16] [(_Bool)1] [2U] [i_10]) : (((/* implicit */int) (unsigned char)1))))) || (((/* implicit */_Bool) 1996835991))));
                }
            } 
        } 
    }
}
