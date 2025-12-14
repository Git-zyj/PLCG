/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99263
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
    var_12 = ((/* implicit */long long int) var_10);
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)11050)))), ((~(((/* implicit */int) (unsigned short)22897))))))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)1584))));
    var_15 = (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) arr_0 [4LL] [i_0]);
                    arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)11050)) + (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_17 ^= ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0] [i_2 - 1])) * (((/* implicit */int) var_6)))) < (((((/* implicit */int) (unsigned short)46412)) >> (((((/* implicit */int) var_9)) + (27189)))))));
                    arr_7 [i_0] [i_1] [i_2] |= ((/* implicit */long long int) arr_3 [i_0] [(signed char)1] [i_2 + 1]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)38952)) + (((/* implicit */int) (signed char)-55)))), (((/* implicit */int) arr_3 [(_Bool)0] [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (3115391070U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 4] [i_3 - 4]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)55072)))))));
                        var_20 |= ((/* implicit */unsigned int) (signed char)14);
                        arr_16 [i_0] [i_3] &= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5])) - (((/* implicit */int) (unsigned short)11050))))) - (-5172380741308032388LL)))));
                    }
                    for (signed char i_6 = 3; i_6 < 14; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_6] [i_4] [i_0] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3] [i_4])) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((((/* implicit */int) arr_4 [i_0] [i_6 - 3])) << (((arr_11 [i_6] [i_3 - 2]) - (5817057898045366117ULL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_6 - 1])) || (((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_3 [i_0] [i_4] [i_0]))))))))) : (var_4)));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_4))), (((/* implicit */long long int) (!(arr_1 [i_6]))))))) ? ((~(((var_11) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3 - 2] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((var_8) + (arr_12 [5LL]))))))))));
                    }
                    for (signed char i_7 = 3; i_7 < 14; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22897)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (13476036417056582929ULL)))))))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_14 [i_3 - 4] [(unsigned short)11])), (((((/* implicit */_Bool) var_9)) ? (-9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (short)26079)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-55))) : (-5227346831169368019LL)));
                        var_25 = ((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned short)2233)))), ((-(((/* implicit */int) (short)14287))))));
                    }
                    var_26 += ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0])) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (var_11))));
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)6)) && (((/* implicit */_Bool) arr_25 [19LL]))));
            var_28 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)148)))))));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 2; i_10 < 22; i_10 += 1) 
            {
                arr_30 [i_8] = ((/* implicit */long long int) arr_26 [i_8] [i_9]);
                var_29 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_25 [i_10 - 2])) / (((/* implicit */int) var_5)))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) ^ (arr_28 [i_11])))) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (0ULL))))));
                            var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_10 - 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10 - 2] [i_12]))) : (var_7)));
                            var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_11] [i_11] [i_10] [i_10 + 1] [i_12] [i_12]))));
                            var_33 -= ((/* implicit */unsigned char) (unsigned short)58974);
                        }
                    } 
                } 
            }
            for (unsigned short i_13 = 2; i_13 < 21; i_13 += 2) 
            {
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22893)) ? (((/* implicit */int) (unsigned short)6561)) : (((/* implicit */int) (signed char)23))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)58978))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                {
                    arr_43 [i_9] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_14] [i_9] [i_14 - 1] [i_13 + 1]))));
                    arr_44 [i_9] [i_13] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_37 [i_8] [i_9] [i_13]))));
                    var_35 = ((((/* implicit */int) arr_36 [i_9] [i_14 - 2] [3LL] [15LL])) - (arr_35 [i_13 - 2] [i_13 - 2] [i_13] [i_13 + 1]));
                    var_36 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0))));
                }
                /* LoopSeq 3 */
                for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_37 = ((/* implicit */unsigned short) ((int) 336061408U));
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(13585567457227528511ULL)))) ? ((~(((/* implicit */int) arr_24 [i_9])))) : (((/* implicit */int) (short)26867))));
                    var_39 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_0))))) ? ((+(-1861534131))) : (((/* implicit */int) (unsigned short)19124))));
                }
                for (signed char i_16 = 1; i_16 < 22; i_16 += 1) 
                {
                    arr_52 [i_8] [i_8] [i_13 + 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_51 [i_13 - 1] [i_16 + 1] [i_16] [i_16 - 1])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_8] [i_9] [(signed char)19])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) var_11);
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_16])) ? (((/* implicit */long long int) arr_35 [i_13 - 1] [i_9] [i_13] [i_16 + 1])) : ((-(var_11))))))));
                        arr_55 [i_8] [i_16] [22LL] [i_16 - 1] [i_16 - 1] = ((/* implicit */long long int) (!(arr_48 [i_8] [i_9] [i_13 + 1] [6LL] [i_16 - 1] [i_9])));
                    }
                }
                for (short i_18 = 4; i_18 < 21; i_18 += 4) 
                {
                    arr_59 [i_8] [i_8] [i_8] [i_13] [i_18 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    /* LoopSeq 4 */
                    for (long long int i_19 = 2; i_19 < 21; i_19 += 4) 
                    {
                        arr_63 [15LL] [i_13 + 2] [i_18] [i_19] = ((/* implicit */long long int) ((4861176616482023104ULL) << ((((((_Bool)0) ? (((/* implicit */int) arr_29 [i_18] [i_19])) : (((/* implicit */int) arr_36 [i_8] [i_9] [i_18 - 2] [i_19])))) + (87)))));
                        var_42 ^= ((/* implicit */signed char) var_2);
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_13] [i_18] [i_13] [i_18 + 1] [i_8])))))));
                    }
                    for (short i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_51 [i_13] [i_18 + 1] [i_18 + 1] [i_18 + 2]))));
                        var_45 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_26 [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20541))) : (arr_62 [14ULL]))) : (((var_7) >> (((((/* implicit */int) var_6)) - (19635)))))));
                        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_66 [i_8] [i_18 + 1] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_66 [16LL] [i_18 + 1] [i_13] [i_18 - 1]))));
                        arr_68 [i_8] [i_9] [i_8] [i_18] [(unsigned char)5] = (~(var_8));
                    }
                    for (unsigned short i_21 = 0; i_21 < 23; i_21 += 1) 
                    {
                        arr_71 [i_8] [i_9] [i_9] [i_18] [i_21] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_13 - 1] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) : ((~(arr_58 [i_8] [i_9] [19LL] [i_18] [i_21])))));
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (((~(var_1))) != (((((/* implicit */int) (unsigned short)51444)) | (((/* implicit */int) (signed char)5)))))))));
                    }
                    for (int i_22 = 0; i_22 < 23; i_22 += 2) 
                    {
                        var_48 = ((((/* implicit */_Bool) arr_34 [i_13] [i_18 - 4] [i_18] [i_18 - 1] [i_22])) ? (((4861176616482023108ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [(unsigned short)7] [(signed char)10] [(signed char)10] [i_18]))))) : (((/* implicit */unsigned long long int) (~(arr_35 [i_9] [i_13] [i_18] [i_22])))));
                        var_49 = arr_32 [i_13];
                        var_50 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    arr_74 [i_8] [i_8] [i_13] = ((/* implicit */long long int) arr_31 [i_8] [i_8]);
                    arr_75 [i_9] [i_9] [i_9] = arr_35 [i_8] [i_9] [i_13 + 2] [i_18 + 1];
                }
                var_51 -= ((/* implicit */unsigned long long int) var_10);
            }
            arr_76 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_8] [i_9])) && (((/* implicit */_Bool) arr_26 [i_8] [i_9]))));
            arr_77 [i_9] &= ((/* implicit */signed char) (~((+(((/* implicit */int) arr_70 [i_8] [i_8] [2U] [i_8] [i_9]))))));
        }
        arr_78 [i_8] = ((/* implicit */signed char) (unsigned short)15631);
    }
}
