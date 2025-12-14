/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58038
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
    var_12 *= ((/* implicit */short) (signed char)-1);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_4 [2U] &= ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_11))))) | (((unsigned int) var_11))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-14348))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_13 = ((((/* implicit */_Bool) -8188826491312350666LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (arr_8 [i_1 + 1] [i_2]));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */signed char) ((unsigned long long int) var_3));
                arr_13 [i_1 + 3] [i_1] [i_3] = ((/* implicit */unsigned int) var_0);
            }
            for (long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_9))));
                var_16 = ((((/* implicit */_Bool) 11943454492623423218ULL)) ? (((/* implicit */unsigned long long int) 2982152344U)) : ((~(6503289581086128398ULL))));
                var_17 ^= ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            }
        }
        arr_17 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(-1LL)))) ? (11943454492623423233ULL) : (((/* implicit */unsigned long long int) ((int) var_4)))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [0LL] [0LL])) || (((/* implicit */_Bool) 6503289581086128423ULL))))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_19 = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) ((arr_11 [i_5] [i_5] [i_5 + 2] [i_5 + 1]) >> (((((/* implicit */_Bool) (short)-12338)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-10079))))))) : (((/* implicit */unsigned int) ((((arr_11 [i_5] [i_5] [i_5 + 2] [i_5 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (short)-12338)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-10079)))))));
        arr_20 [i_5] = ((/* implicit */signed char) ((unsigned int) (signed char)-101));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11943454492623423218ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 + 2] [3U] [3U] [i_5]))) : (arr_3 [8LL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5 + 3] [i_5])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)32749))))))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_2) / (((/* implicit */int) var_11)))), (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -8188826491312350666LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
}
