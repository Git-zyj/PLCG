/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9767
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (unsigned char)118);
        var_16 = ((/* implicit */signed char) var_5);
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_17 ^= ((/* implicit */int) ((((((/* implicit */int) var_9)) >> (((((/* implicit */int) (unsigned char)100)) - (87))))) != (((/* implicit */int) (unsigned short)11002))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) (_Bool)0);
                var_19 = ((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) (short)-14867)) + (14891)))));
                arr_9 [i_3] [i_3] [(short)18] [i_3] = ((/* implicit */unsigned char) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184)))));
            }
            for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
            {
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 625000238557964153ULL)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned char)240))));
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_10))));
            }
            arr_14 [i_1] [i_2] = (!(((/* implicit */_Bool) (short)-8364)));
            arr_15 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8363)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)45500))))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)6968)) : (((/* implicit */int) (unsigned char)0))))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 2569847005U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)189)))) : ((-(-2045188084)))));
            arr_18 [i_5 - 1] [i_5] [i_1 - 1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159))) < ((+(15244974677260714995ULL)))));
            arr_19 [i_1] [(short)2] [(unsigned char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 5580407271159760446ULL))) * (((((/* implicit */_Bool) (unsigned char)21)) ? (((((/* implicit */_Bool) -2303958109966020039LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) (_Bool)0))))));
            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-35))));
        }
        arr_20 [i_1 + 1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))));
    }
    var_23 |= ((/* implicit */unsigned char) var_1);
    var_24 = ((/* implicit */int) var_11);
    var_25 = ((/* implicit */long long int) var_10);
}
