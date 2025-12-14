/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58379
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
    var_12 = ((/* implicit */unsigned int) 0ULL);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) var_0);
        arr_4 [i_0] = ((unsigned long long int) arr_2 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = ((int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_18 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((arr_16 [i_1] [i_2]) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) (signed char)75))))))) ? (arr_17 [i_2] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_2]))))) : (((/* implicit */int) arr_12 [i_2 - 3] [i_2 + 1])))))));
                    var_14 = (+(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])));
                    var_15 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(-5310594378652041451LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : (1906865219U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */int) arr_14 [i_1] [i_1]))))))))));
    }
    for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [(signed char)6] [(signed char)6])) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (((/* implicit */int) var_10))))))))));
        var_17 &= ((/* implicit */signed char) arr_16 [i_4] [0U]);
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) / ((-2147483647 - 1))))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_25 [i_5] [i_5] = ((/* implicit */_Bool) var_9);
        arr_26 [i_5] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5]))) / (18035239791128237419ULL))) | (((/* implicit */unsigned long long int) -1829929924))))) ? (((((((/* implicit */_Bool) 3072)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))) : (var_11))) ^ (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) arr_22 [i_5])))) - (270124599))))))));
        var_19 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_11)))) ? (((((/* implicit */_Bool) var_11)) ? (6ULL) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (var_1)))))) | (((18446744073709551610ULL) / (((16769712614081703526ULL) >> (((131071) - (131009)))))))));
        arr_27 [i_5] [i_5] &= ((/* implicit */unsigned int) (-(1915875161)));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */int) arr_28 [i_6] [i_5] [i_5])), (((((/* implicit */int) arr_28 [i_6] [i_5] [i_5])) | (((/* implicit */int) var_6)))))));
            var_21 &= ((/* implicit */unsigned long long int) arr_22 [i_6]);
            arr_30 [i_5] [18] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_6] [i_5] [i_5])) * (((/* implicit */int) (unsigned short)0))))) ? (((((arr_23 [i_5] [i_6]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_24 [i_5])) + (111))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((var_5) + (1848271621))))))))));
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+((+(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_32 [i_5] [i_5])))))))))));
            var_23 = ((/* implicit */unsigned short) ((_Bool) 2147483645));
        }
    }
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) var_11)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))));
}
