/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80348
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 |= ((((/* implicit */_Bool) (~(((unsigned long long int) arr_1 [1]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2]))) > (var_0)))));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) max((arr_6 [i_0] [i_2 + 1] [(_Bool)1]), (max((((/* implicit */unsigned int) arr_4 [i_2 - 2] [i_1])), (arr_6 [8] [i_2 - 1] [i_2]))))))));
                    var_14 &= ((/* implicit */signed char) max((((/* implicit */int) (short)29258)), (max(((+(-174278661))), (((/* implicit */int) (short)-753))))));
                    var_15 |= ((((/* implicit */int) ((0ULL) > (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -7572741023073127774LL))))))) << (((((((/* implicit */_Bool) ((((arr_5 [4ULL] [i_0] [1LL] [6LL]) + (9223372036854775807LL))) >> (((var_8) - (14871841456052300065ULL)))))) ? (((/* implicit */unsigned long long int) ((arr_6 [i_0] [12LL] [i_2]) & (arr_6 [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [6ULL]) : (0ULL))))) - (3832320829ULL))));
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(arr_5 [0LL] [9ULL] [i_2] [i_0]))), (max((-5593434310023839281LL), (((/* implicit */long long int) (_Bool)1))))))) ? ((~(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2])))))) : (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned long long int) -8876366585738116877LL)) : (18446744073709551615ULL)))));
                }
            } 
        } 
    } 
    var_16 = (~((-(((var_2) << (((-7572741023073127771LL) + (7572741023073127806LL))))))));
    /* LoopSeq 1 */
    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (18446744073709551600ULL)))) ? (max((arr_9 [8LL] [i_3]), (((/* implicit */long long int) (signed char)-1)))) : (max((-9223372036854775801LL), (arr_9 [i_3] [i_3])))))), (((unsigned long long int) arr_9 [12LL] [i_3]))));
        arr_10 [(short)16] [i_3 - 1] = ((/* implicit */unsigned int) arr_9 [i_3] [i_3]);
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_13 [i_3] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~((-2147483647 - 1))))), (max((arr_9 [i_3 + 2] [i_3 + 1]), (((/* implicit */long long int) 134217727))))));
            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)-1)), (18446744073709551600ULL))) < (((/* implicit */unsigned long long int) max((arr_8 [i_3] [i_3]), (((/* implicit */long long int) var_7)))))))) : (((/* implicit */int) (((~(18014757840658109414ULL))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)32766)), (arr_12 [(signed char)21] [17])))))))))));
            arr_14 [i_4] [i_4] [i_4] = ((/* implicit */int) max((var_11), (((/* implicit */unsigned long long int) (+(arr_8 [i_3 + 2] [i_3 + 2]))))));
        }
    }
}
