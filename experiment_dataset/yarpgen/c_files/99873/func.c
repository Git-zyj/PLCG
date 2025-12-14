/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99873
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_3 [i_0 - 1]) ^ (arr_3 [i_0 - 1]))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_11))));
        arr_4 [18U] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)512)) == (((/* implicit */int) (short)7451))))) >= (((/* implicit */int) (short)7450))))), (((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) arr_3 [3ULL]))))) - (var_12)))));
    }
    var_20 = max(((!(((/* implicit */_Bool) var_11)))), (((((/* implicit */int) ((_Bool) var_3))) >= (((((/* implicit */int) (short)7451)) - (3))))));
    var_21 = ((/* implicit */unsigned char) ((((var_12) & ((~(var_0))))) ^ (min((((/* implicit */unsigned long long int) var_11)), (var_9)))));
    var_22 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1])) != (669168573104250132LL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4294967288U)))))));
        arr_7 [i_1 - 1] |= ((/* implicit */unsigned short) ((arr_3 [i_1 - 1]) >= (arr_3 [i_1 + 1])));
    }
    for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
    {
        arr_12 [i_2] = ((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (var_9))))) | (((/* implicit */unsigned long long int) (~(arr_8 [i_2 + 3] [i_2 + 3])))));
        arr_13 [i_2 - 2] = max((arr_9 [i_2 + 1]), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17256456391506045352ULL)) && (var_3)))), (min((((/* implicit */unsigned int) (signed char)-67)), (arr_8 [i_2] [i_2]))))));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7452)) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7451)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2])) && (((/* implicit */_Bool) arr_11 [i_2])))))) : (arr_9 [i_2 - 4])))) && (((/* implicit */_Bool) arr_10 [i_2]))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_25 ^= ((unsigned int) 3645260147U);
            var_26 = ((/* implicit */long long int) arr_11 [15U]);
            /* LoopSeq 2 */
            for (long long int i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                arr_20 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_2 - 2])) && (((/* implicit */_Bool) arr_9 [i_3 + 1])))) || (((/* implicit */_Bool) ((short) 15037128065598459366ULL)))));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 8588281056803865739ULL))) - (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (arr_19 [i_2] [i_2] [i_2] [i_4]))))))))));
                var_28 = ((/* implicit */_Bool) ((int) var_12));
            }
            for (int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)7451)), (max((((/* implicit */unsigned long long int) 1092698372)), (0ULL)))))) ? (((((/* implicit */unsigned long long int) 0U)) | (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) arr_11 [i_2])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_16 [i_3] [i_3])) : (1073741824)))) ? (((((/* implicit */_Bool) 480433259U)) ? (1313272371U) : (((/* implicit */unsigned int) -197511407)))) : (arr_11 [i_3 + 1])))))))));
                var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [i_2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_5 - 1])))))))) ? ((+(((((/* implicit */_Bool) var_0)) ? (arr_9 [i_3]) : (arr_9 [i_2]))))) : (((/* implicit */unsigned int) var_17))));
            }
        }
        arr_24 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -4083316022000873205LL)) : (var_8))))))), (min((((((/* implicit */unsigned long long int) 2193062141U)) / (arr_10 [i_2]))), (var_12)))));
    }
}
