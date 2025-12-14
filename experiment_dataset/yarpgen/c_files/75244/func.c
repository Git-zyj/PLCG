/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75244
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
    var_19 = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) var_4)), (var_12))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)124)) & (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) - (33554431U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)65520))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((18446744073709551596ULL) == (arr_3 [i_0]))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 18446744073709551581ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_3 [i_0]))) : (arr_3 [i_1])));
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (18446744073709551606ULL))))));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 7; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967280U))));
        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65527)))))), ((-(18446744073709551615ULL)))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) arr_5 [i_2]))))) ? (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (1ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 3])) ? (arr_4 [i_3]) : (((/* implicit */int) arr_1 [i_2]))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_11 [i_3] [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_2]))) : (((((/* implicit */unsigned long long int) 9223372036854775807LL)) | (18446744073709551613ULL)))))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 10; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_19 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((arr_13 [i_2] [i_3 + 1] [i_2] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21))))), (((/* implicit */unsigned int) ((unsigned char) arr_16 [(signed char)6] [(signed char)6] [i_4 - 2] [i_5] [(signed char)6] [i_2])))))) ? ((~(max((511U), (((/* implicit */unsigned int) (unsigned short)9)))))) : (((/* implicit */unsigned int) ((((_Bool) 520U)) ? ((~(((/* implicit */int) arr_16 [i_2] [i_4] [i_2] [i_4] [i_3 - 2] [i_2])))) : (((((/* implicit */_Bool) arr_12 [i_2 + 4])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */int) arr_7 [i_2])))))))));
                        var_26 = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (unsigned char)127)))))), (((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 + 1] [i_3] [i_2])) ? (arr_14 [i_2] [i_2] [i_4] [i_2]) : (arr_14 [i_5] [i_4 - 1] [i_3] [8LL])))));
                        arr_20 [i_2] [i_3 + 1] [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((int) 288230376151711743LL))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))) : (((arr_17 [i_4 - 2]) / (arr_17 [i_2 + 4])))));
                        arr_21 [i_2] [i_3 - 2] [i_4 - 1] [i_2] = min((((((/* implicit */_Bool) arr_15 [i_2 + 3])) ? (arr_15 [i_2 + 1]) : (arr_15 [i_2 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)254)) : (3)))));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (+(arr_17 [i_5])))) ? (((((/* implicit */unsigned long long int) arr_12 [i_2 + 2])) % (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))));
                    }
                } 
            } 
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) && (((/* implicit */_Bool) (unsigned char)255))))), (((((/* implicit */_Bool) (unsigned char)17)) ? (-2147483642) : (((/* implicit */int) (unsigned char)127)))))) < (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_3] [(unsigned short)5])) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 + 1] [i_3] [i_2 + 2] [i_2 + 1] [i_2] [i_2]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2 + 4] [i_2] [i_3] [(_Bool)1])))))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            var_28 = ((min((21U), (((/* implicit */unsigned int) (unsigned char)132)))) >= ((+(28U))));
            arr_27 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)17)))))));
        }
        var_29 = ((unsigned char) ((((/* implicit */_Bool) arr_15 [i_2])) || (((/* implicit */_Bool) arr_18 [i_2] [1U] [i_2 - 2] [i_2]))));
        arr_28 [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) arr_10 [i_2 - 2] [i_2] [i_2 - 2])) : (21ULL))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        arr_31 [i_7] = ((arr_30 [i_7] [i_7]) ? (((((/* implicit */_Bool) arr_29 [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_7]))) : (arr_29 [i_7] [i_7]))) : (arr_29 [i_7] [i_7]));
        arr_32 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((1U) / (4U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
    }
    var_30 = ((/* implicit */_Bool) ((signed char) ((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (max((var_5), (((/* implicit */unsigned int) var_1)))))));
}
