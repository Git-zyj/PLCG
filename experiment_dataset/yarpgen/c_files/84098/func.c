/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84098
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
    var_17 = ((/* implicit */unsigned short) ((var_6) && (((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) >> (((var_16) + (2796038845773776321LL))))))));
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (((var_16) - (((/* implicit */long long int) var_12))))))), (0ULL)));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (short)-8629)) ? (((/* implicit */long long int) 1018502366)) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_13)) : (((var_6) ? (((/* implicit */int) ((_Bool) var_15))) : (((var_7) ? (var_12) : (-1018502366)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) 3828659358749786548LL);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) 3260378163537911229LL);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) min((18446744073709551602ULL), (((/* implicit */unsigned long long int) var_1))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) var_14)), (arr_8 [i_1])))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        var_21 = var_3;
                        var_22 += ((/* implicit */long long int) min((((int) ((unsigned long long int) 7839446749890309114LL))), (((/* implicit */int) (unsigned short)43260))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) (signed char)-26))))) / (((((/* implicit */_Bool) arr_16 [i_4] [i_8] [i_8 + 1] [i_8 + 1])) ? (arr_16 [i_7] [i_7] [i_8 + 1] [i_8 - 1]) : (-3260378163537911230LL)))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 10399884086298764460ULL))));
                            arr_25 [i_8] [i_3] [i_5] [6LL] [i_8 + 1] [i_8] = ((/* implicit */short) max(((unsigned char)42), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)0)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 3; i_9 < 23; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_14 [i_4] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_23 [i_3] [i_4] [i_5] [i_7] [i_7] [14U])) : (((/* implicit */int) var_5)))))))));
                            var_26 ^= (~(((((/* implicit */_Bool) -3260378163537911229LL)) ? (((/* implicit */long long int) arr_10 [i_5] [i_5 + 1])) : (var_11))));
                            arr_28 [i_3] [i_3] [i_4] [i_3] [23ULL] [i_9] = ((/* implicit */long long int) ((((_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)-395)) + (425))))))));
                            var_27 -= ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_9] [i_9] [(unsigned short)12])))))));
                        }
                        arr_29 [i_3] [i_3] [i_3] [7LL] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(0ULL)))) ? (max((2137677262998039773LL), (((/* implicit */long long int) arr_21 [20U] [20U] [20U] [i_5 - 1] [0LL] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -3260378163537911229LL)) ? (((/* implicit */int) arr_24 [i_4] [i_5 - 1] [i_7])) : (((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_5] [i_5 - 1] [i_7] [i_7] [5U])) ? (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) arr_1 [i_4])))) : (max((((/* implicit */unsigned long long int) arr_21 [(short)5] [i_4] [i_4] [2] [19LL] [i_3])), (7651290791196665009ULL)))))));
                        var_28 &= ((/* implicit */_Bool) arr_1 [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 3; i_10 < 23; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) var_3);
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) : (16190069126867192610ULL))) > (((/* implicit */unsigned long long int) -3260378163537911229LL))));
                    }
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : ((~(-1018502366)))))) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_4] [i_4] [i_5 - 1] [i_5])))));
                    arr_32 [i_3] [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_5 + 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_23 [i_5 + 1] [i_4] [i_4] [i_4] [i_4] [i_3])))));
                    arr_33 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_15 [i_3] [i_4] [i_4] [i_5]), (((/* implicit */unsigned long long int) 4294967295U))))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_3])), (arr_13 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) (short)(-32767 - 1)))))))));
                    var_32 = ((/* implicit */int) var_4);
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) ((short) ((var_1) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_23 [i_3] [i_3] [(signed char)10] [i_3] [i_3] [(unsigned char)14])))));
        /* LoopNest 2 */
        for (short i_11 = 1; i_11 < 22; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    arr_40 [i_12] [i_12] [i_3] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_11 [i_3])), (arr_14 [i_3] [i_11 + 1] [i_12])))) & (((((/* implicit */_Bool) arr_12 [i_3] [i_11 + 2] [i_11 + 2])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11 - 1] [i_11 - 1] [(signed char)11]))))))) : (((/* implicit */unsigned long long int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_16 [(unsigned char)0] [i_12] [i_11 + 1] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((var_16) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_11 - 1] [i_11 + 2])) ? (((/* implicit */int) arr_18 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 2])) : (((/* implicit */int) arr_35 [i_11 + 1] [i_11])))))));
                        var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (signed char)-58)))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_37 [(unsigned char)18]), (((/* implicit */unsigned int) (_Bool)0))))) ? (((((/* implicit */_Bool) max((510984622472517621LL), (((/* implicit */long long int) 2039113491U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (signed char)-44)))))) : (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) 3260378163537911226LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 2039113491U)) && (((/* implicit */_Bool) (signed char)95))))))))));
                    }
                }
            } 
        } 
        var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2856081745U) > (2856081745U))))) | (arr_15 [(unsigned char)0] [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_36 [i_3] [i_3])) : (((/* implicit */int) (signed char)80))))))) : (6480803057473456380ULL)));
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 2859316007U))))) / (arr_14 [i_3] [i_3] [i_3])))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) -510984622472517622LL)) ? (((/* implicit */long long int) 2856081745U)) : (var_2))))) : (((((/* implicit */int) arr_24 [i_3] [i_3] [i_3])) << (((((((/* implicit */_Bool) arr_8 [i_3])) ? (3006331815U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (3006331791U)))))));
    }
    for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        arr_46 [i_14] = ((/* implicit */unsigned short) arr_43 [i_14] [i_14]);
        var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) / (2039113491U)));
        var_41 = ((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [i_14])))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        var_42 = ((/* implicit */long long int) (unsigned char)0);
        arr_51 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_36 [i_15] [i_15])))) ? (((/* implicit */int) ((arr_7 [i_15] [i_15] [0]) >= (((((/* implicit */_Bool) 3006331815U)) ? (var_4) : (((/* implicit */long long int) var_12))))))) : ((-(((/* implicit */int) (short)-395))))));
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (min((arr_14 [i_15] [11LL] [i_15]), (((/* implicit */int) (short)-395))))))) ? (((/* implicit */int) arr_26 [i_15] [i_15] [15] [15])) : (((/* implicit */int) max((((short) 510984622472517621LL)), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-101))))))))));
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((long long int) (+(((var_11) / (((/* implicit */long long int) -1018502367))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        var_45 = ((/* implicit */int) 2039113504U);
        var_46 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-25))));
        arr_54 [i_16] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_10))) <= ((-9223372036854775807LL - 1LL))))));
    }
}
