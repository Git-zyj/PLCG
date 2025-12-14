/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90974
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 1]))))) ? (var_9) : (((/* implicit */unsigned long long int) ((440553644U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_1] [(unsigned char)0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_3 [11U] [5U])))))), (((((/* implicit */_Bool) 2305843009213661184ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) : (16140901064495890408ULL)))));
                        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) (unsigned char)31))))) ? (((((((/* implicit */_Bool) arr_9 [(unsigned short)6] [i_1] [7ULL])) ? (var_9) : (((/* implicit */unsigned long long int) 3854413652U)))) * (((((/* implicit */_Bool) arr_4 [i_2])) ? (501165307271885070ULL) : (((/* implicit */unsigned long long int) 724552393)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1 + 3] [i_1]) != (arr_1 [i_1 + 3] [i_1 + 3])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */int) ((4294967295U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned short)6)))))));
                        var_16 = ((/* implicit */short) (((+(18446744073709551614ULL))) <= (14966408512586942782ULL)));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_15 [i_0] [(signed char)0] [i_0] [i_1] [i_2] = ((/* implicit */short) arr_7 [i_0] [0U] [i_2] [i_1] [0U]);
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (12777335556776507261ULL)))) ? (arr_11 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)4])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 11; i_6 += 3) /* same iter space */
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_6] = (~(((unsigned int) arr_1 [i_1 + 1] [i_1 + 1])));
                            arr_19 [i_0] [i_1] [i_1] [i_5] [i_6 + 1] = ((/* implicit */unsigned char) (unsigned short)8939);
                            var_18 += min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((143552238122434560ULL) < (((/* implicit */unsigned long long int) 3977889391U)))))))), ((~(((((/* implicit */_Bool) 4294967288U)) ? (13463227464812126673ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))))));
                            arr_20 [i_1] = (+(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19707))) <= (3221225472U))) || (((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [i_2] [(signed char)10] [(unsigned char)10]))))));
                            arr_21 [(unsigned char)10] [i_1] = ((((/* implicit */unsigned long long int) 7U)) / (((((/* implicit */_Bool) (signed char)-30)) ? ((+(15807222741299432151ULL))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) (signed char)-100))))))));
                        }
                        for (short i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_0] [i_1 - 3] [i_1] [(signed char)12] [i_7] [i_1] = ((/* implicit */unsigned long long int) min((((var_6) - (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)38))))))), (max((3110940356U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
                            var_19 += ((/* implicit */unsigned long long int) var_0);
                            arr_25 [(unsigned short)1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((var_6) >> (((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), (((unsigned int) arr_4 [i_1])))) - (4294942450U)))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+((+(((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) var_5))))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            var_21 -= (~(9271568845895421876ULL));
                            var_22 = ((/* implicit */unsigned short) (+(var_4)));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) : (7061971759277722738ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [1U] [i_1 - 3] [i_1 - 2] [i_8 - 1] [i_8])))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2072042883U)))) || (((/* implicit */_Bool) (~(18446744073709551614ULL)))))))));
                        }
                        var_25 -= ((/* implicit */unsigned int) -3);
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            arr_31 [i_0] [i_0] [10] [i_1 - 1] [i_2] [i_5] [0ULL] &= ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((int) 1869789757))), (((((/* implicit */_Bool) arr_30 [(signed char)8] [i_1 + 1] [i_2] [i_5] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_16 [i_0] [i_1] [i_1] [i_2] [i_5] [10U]))))), (min((((/* implicit */unsigned long long int) var_1)), ((~(2199023255424ULL)))))));
                            var_26 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) % (1706250195U)))));
                            var_27 = ((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1] [i_9]))))))));
                        }
                    }
                    var_28 = ((/* implicit */unsigned int) arr_7 [(unsigned short)9] [4U] [4ULL] [i_1] [i_2]);
                    arr_32 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-5705))));
                }
            } 
        } 
    } 
    var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_9)))))));
    var_30 = ((/* implicit */unsigned char) var_5);
}
