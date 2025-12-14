/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55976
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), ((unsigned short)10019)))) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (signed char)127))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41061)))))));
            var_14 = ((/* implicit */unsigned short) ((signed char) (((_Bool)0) && (((/* implicit */_Bool) arr_3 [i_0])))));
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (signed char i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        var_15 = ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(131071ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3971979441U)))))))))));
                        arr_12 [i_3] [i_2] [(signed char)8] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (~(9223372036854775807LL))))) ? (min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((unsigned short) var_0))))) : (max((((/* implicit */unsigned long long int) -2054579781)), (min((18446744073709420544ULL), (((/* implicit */unsigned long long int) (signed char)33))))))));
                    }
                    var_16 |= ((/* implicit */unsigned short) ((9223372036854775807LL) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29734)))))) + (693204766U))))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10))))))), (((((((((/* implicit */_Bool) (unsigned short)29734)) ? (arr_10 [i_5]) : (((/* implicit */int) var_3)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))));
        arr_16 [i_5] = ((/* implicit */unsigned int) min(((unsigned short)21329), (((/* implicit */unsigned short) (signed char)-34))));
        var_18 = ((/* implicit */unsigned short) (((((_Bool)1) ? (min((((/* implicit */unsigned long long int) (unsigned char)66)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35801))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_19 = (+(((/* implicit */int) arr_0 [i_6] [i_6])));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2054579780)) * (2980947535877068191ULL)))) ? (((131071ULL) * (16140901064495857664ULL))) : (min((((/* implicit */unsigned long long int) 693204766U)), (arr_13 [0ULL] [0ULL]))))))))));
    }
    for (short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */_Bool) min((((/* implicit */int) arr_4 [4ULL])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) 14680064U)))))));
        var_21 = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (18446744073709420544ULL))), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_2 [1U] [1U])))) + (min((((/* implicit */int) (signed char)16)), (-268435456))))))));
    }
}
