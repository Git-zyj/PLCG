/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56049
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3328)) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) (short)18340)) - (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (!((_Bool)0))))));
        var_11 -= (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_4))))));
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3359)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)127))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-3330)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)-3355)) ? (1736155904U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19650))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_13 [i_3 - 1] [i_1] [i_1] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) : (arr_10 [i_0] [i_0] [i_0] [(_Bool)1])))) ? (((((/* implicit */_Bool) (unsigned short)54716)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (12629927776608989115ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_3 - 2])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_3] [i_4 + 3]))));
                            var_13 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 + 1]))));
                        }
                    }
                } 
            } 
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(var_8))))));
            var_15 ^= ((/* implicit */unsigned char) ((arr_11 [i_0] [2] [i_0] [i_0] [i_1 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        arr_19 [0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-3371))))) ? (((((/* implicit */_Bool) (short)19650)) ? (((/* implicit */unsigned long long int) 3013926929U)) : (12629927776608989115ULL))) : (((((/* implicit */_Bool) 1281040361U)) ? (arr_17 [(signed char)22]) : (((/* implicit */unsigned long long int) var_8))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3013926929U)) ? (arr_17 [10U]) : (arr_17 [(short)20])))) ? (((((/* implicit */_Bool) (short)9742)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-7256)) : (((/* implicit */int) arr_18 [(signed char)10]))))) : (((((/* implicit */_Bool) (unsigned char)180)) ? (arr_17 [(signed char)4]) : (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned short)0])) ? (arr_17 [0U]) : (arr_17 [4U])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [(unsigned char)16]))))))))));
    }
    for (unsigned int i_6 = 4; i_6 < 20; i_6 += 3) 
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_22 [i_6 + 1] [i_6 + 2]) : (var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 - 3]))) : (((((/* implicit */_Bool) arr_22 [i_6] [i_6 - 1])) ? (arr_22 [i_6] [i_6 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3330))))))) : (((((/* implicit */_Bool) arr_17 [(short)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 - 1]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(short)12]))) : (var_5)))))));
        var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_22 [i_6 - 2] [i_6])))) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15368))) : (var_4))) : (((((/* implicit */_Bool) var_0)) ? (639403178U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) (_Bool)0))))))) ? (((arr_21 [i_6] [i_6 - 4]) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-7250)) : (((/* implicit */int) arr_23 [i_6 + 2]))))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_16 [(unsigned char)18])) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (signed char)102)))) : (var_8)))))))));
        var_20 ^= (~((-(((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0))))));
    }
    for (signed char i_7 = 2; i_7 < 24; i_7 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33330)) ? (5597496778604643967LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56)))))) ? (var_5) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)56)))))));
            var_22 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_7] [i_7] [i_7]))))));
        }
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)11))))) ? (((((/* implicit */_Bool) -8948909752754180677LL)) ? (639277751U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_7 - 1] [i_7] [i_7 - 1])) ? (((/* implicit */int) (unsigned short)6320)) : (((/* implicit */int) (_Bool)0))))))))));
        var_24 |= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (1987242017U)))));
    }
    var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 2795342988U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) var_9)) >> (((/* implicit */int) var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
}
