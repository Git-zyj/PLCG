/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66211
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
    var_18 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_2 [0ULL] &= ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-499782969) : (((/* implicit */int) (unsigned short)6605)));
        arr_3 [i_0] = ((/* implicit */_Bool) var_15);
        var_19 = ((unsigned long long int) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))) : (arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_7 [1U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned long long int) (-(-9223372036854775801LL)))) : (((((/* implicit */_Bool) arr_6 [(unsigned short)4])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-9223372036854775807LL)))) ? (((arr_5 [i_1 - 2] [i_2]) & (arr_5 [i_2] [i_1]))) : (arr_5 [i_1 - 1] [i_1 + 1]))))));
            arr_10 [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */int) (unsigned short)2986)) : (((/* implicit */int) (unsigned short)2982)))) % (((/* implicit */int) (unsigned short)2982))));
            var_21 = ((/* implicit */long long int) (~(arr_0 [i_2])));
            var_22 = ((/* implicit */long long int) (~(arr_1 [i_1 - 1])));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 9U))))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2986))))))));
                arr_17 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_1] [i_3 - 1] [i_4]));
                var_26 &= ((/* implicit */_Bool) ((long long int) 3544289280U));
            }
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
            {
                arr_21 [i_1] [i_1 + 1] [i_1 - 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967279U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775795LL)) || (((/* implicit */_Bool) 4203575225310444320LL)))))) : (arr_16 [i_5] [i_3] [i_1] [i_1])));
                var_27 = ((/* implicit */unsigned char) ((arr_11 [8LL] [i_3 + 1] [i_1 - 2]) % (((/* implicit */unsigned long long int) arr_1 [i_1 + 1]))));
            }
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_28 = ((/* implicit */int) min((var_28), ((~(-894542033)))));
                arr_24 [i_1 - 1] [i_1 - 1] [i_6] [i_3 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_1 - 2])) ? (arr_18 [i_1 - 2]) : (((/* implicit */unsigned long long int) var_9))));
            }
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27039)) == (arr_1 [i_3 + 1])));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned long long int) arr_5 [i_1 - 1] [i_3 + 1])))));
            }
            var_31 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)102))));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (signed char)-34))));
            var_33 *= (+(arr_11 [i_1] [i_8] [i_8]));
        }
        for (int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            arr_34 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_9] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38)))))) ? ((+(arr_9 [i_9] [i_9] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
            arr_35 [i_9] [i_9] = ((/* implicit */long long int) arr_28 [12] [i_1 + 1]);
            var_34 ^= ((/* implicit */long long int) ((unsigned short) (signed char)32));
            arr_36 [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) 13194139533312ULL));
        }
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10])) ? (arr_37 [i_10]) : (arr_37 [i_10])));
        arr_39 [i_10] [i_10] = ((((/* implicit */_Bool) 5783172377602470277ULL)) ? (-9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27042))));
    }
}
