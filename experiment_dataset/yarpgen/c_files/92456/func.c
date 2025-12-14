/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92456
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [(unsigned short)15] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0])))) ? (((((/* implicit */long long int) ((unsigned int) var_5))) / (9223372036854775790LL))) : (((((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (short)32761))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_7)) - (27191)))))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 4193280)), (arr_1 [10ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */unsigned long long int) 4U)) | (1125899906318336ULL))))));
        arr_8 [i_1] = ((((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_12 [i_2] = (~(((/* implicit */int) arr_2 [i_2])));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_18 [i_3 - 1] = ((/* implicit */long long int) ((unsigned int) ((9223372036854775807LL) >= (((/* implicit */long long int) -268435456)))));
        arr_19 [i_3 - 1] [i_3 - 1] = ((/* implicit */signed char) (+(((((((/* implicit */int) (unsigned short)65527)) / (((/* implicit */int) (signed char)110)))) * ((-(((/* implicit */int) (unsigned short)65519))))))));
        arr_20 [(_Bool)1] = ((((((((arr_14 [i_3]) ^ (((/* implicit */int) (unsigned short)16380)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) : (var_12))))) >> (((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (max((66584576U), (((/* implicit */unsigned int) (_Bool)1)))))) - (66584565U))));
        arr_21 [1U] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_16 [i_3 - 1]))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_14 [(signed char)9])) : (arr_15 [i_3]))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_31 [i_6] [i_6] [i_5] [i_6] = ((/* implicit */_Bool) arr_11 [10ULL]);
                        arr_32 [i_7] [(short)0] [(short)0] [(short)0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 2147483647)))));
                    }
                } 
            } 
        } 
        arr_33 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(8388608)))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_3)))) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_0))))) : ((+(arr_10 [7U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_4] [8U] [(short)13] [1])))));
        arr_34 [(_Bool)1] = ((/* implicit */int) (((-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) arr_9 [i_4])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned int) 2147483647)) : (14U)))))))));
    }
}
