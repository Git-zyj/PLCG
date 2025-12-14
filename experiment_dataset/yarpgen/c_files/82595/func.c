/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82595
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((2453212790645189712LL) | ((-9223372036854775807LL - 1LL))))) ? (min((4618571759341047633LL), (((/* implicit */long long int) (unsigned char)26)))) : (2453212790645189712LL));
            var_10 &= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_1 [13LL] [i_1]), ((unsigned char)5)))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_1), (arr_1 [(unsigned char)6] [i_1])))) : ((~(((/* implicit */int) var_8))))))));
        }
        for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_11 = ((long long int) ((long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)27)))));
            var_12 = ((((/* implicit */_Bool) (unsigned char)130)) ? ((-9223372036854775807LL - 1LL)) : (-1966442810832158445LL));
            arr_7 [i_0] [i_2] = ((/* implicit */long long int) ((unsigned char) var_2));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            var_13 *= arr_9 [i_3];
            arr_11 [i_3] [i_3] = var_1;
            var_14 |= var_5;
        }
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_12 [12LL] [i_5])) << (((arr_2 [i_5] [i_4] [i_4]) + (4097577526148291742LL))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)239))))))) ? (min((((/* implicit */long long int) arr_12 [i_4] [i_4])), (((-2363140979527897882LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) : (arr_2 [i_4] [i_5] [i_4]))))));
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((5252274646145674489LL), (9223372036854775807LL)))))) ? (((/* implicit */int) arr_15 [i_4])) : ((+(((/* implicit */int) arr_0 [i_4] [i_5])))))))));
            arr_18 [i_4] [i_5] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_14 [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))), ((-(var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))));
        }
        var_17 &= var_6;
        arr_19 [i_4] [i_4] = ((/* implicit */long long int) arr_13 [i_4] [i_4]);
        arr_20 [i_4] [(unsigned char)5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6857704786632029018LL)) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4]))))) : (((/* implicit */int) arr_6 [(unsigned char)9] [i_4])))) : (((/* implicit */int) (unsigned char)178))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (1099509530624LL) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (-4618571759341047633LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (-2666164489125777679LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17)))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) >> (((((/* implicit */int) var_9)) - (122)))))) ? (((/* implicit */int) arr_13 [i_6] [i_4])) : (((/* implicit */int) ((unsigned char) arr_8 [i_6]))))))));
            var_19 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (4861214589657247622LL)))));
            var_20 = min((((unsigned char) arr_16 [i_6])), (((unsigned char) var_5)));
        }
    }
    var_21 &= ((long long int) (unsigned char)74);
}
