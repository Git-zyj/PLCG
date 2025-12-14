/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57110
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
    var_17 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) (unsigned short)40282)), ((-(2305843009209499648ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 922649992U)) == (16140901064500051967ULL))) ? (arr_1 [i_0 - 1]) : (((unsigned long long int) 201738893U))));
        arr_2 [i_0] = ((/* implicit */short) 117440512);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-15477)))))));
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)25011))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_21 &= ((/* implicit */unsigned char) arr_0 [i_1]);
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned short)40299))));
            var_23 = (~(8914792478954245384ULL));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25003))) | (arr_1 [i_1])))) ? (((((/* implicit */_Bool) arr_1 [(short)5])) ? (arr_4 [i_1] [i_0] [i_0]) : (5941199013837166597ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0 + 1])))));
        }
    }
    for (int i_2 = 1; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) arr_8 [i_2 - 1])) | (9531951594755306240ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)25237), (((/* implicit */unsigned short) arr_9 [i_2] [i_2]))))))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_2 - 1]))) : (min(((+(2305843009209499651ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1855894778957844862LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)49304)))))))));
        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_10 [i_2]) + (((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (((arr_1 [i_2]) + (2305843009209499664ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [(unsigned char)20])) ^ (arr_10 [i_2])))))), (((/* implicit */unsigned long long int) (short)25012))));
        arr_11 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(min((270826755), (134217727)))))), (max(((+(arr_4 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) 2147483647))))));
        var_26 = ((/* implicit */int) ((((arr_3 [14ULL] [14ULL]) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [18U] [18U]))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [16LL] [16LL])), (arr_10 [(short)6]))))));
    }
    var_27 *= ((/* implicit */short) ((unsigned int) var_7));
}
