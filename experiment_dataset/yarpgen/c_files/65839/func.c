/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65839
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
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            var_18 = (signed char)-23;
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                var_20 ^= ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)-8)) + (((/* implicit */int) (unsigned short)18402))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1] [i_1 + 2]);
                var_22 = ((/* implicit */unsigned long long int) 2413500336622299729LL);
                arr_11 [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1 - 1] [i_3]);
            }
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 - 1]))) / (arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                arr_15 [21U] [i_1] [i_4] = ((/* implicit */long long int) var_9);
                var_24 ^= ((/* implicit */unsigned long long int) (+(arr_4 [i_1 + 1] [2] [i_1])));
                arr_16 [i_0] [i_1 + 1] [18ULL] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) != (((/* implicit */int) (signed char)-79)))))) < (arr_6 [7ULL] [i_1 - 1] [7ULL])));
            }
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_5] [i_0])) ? (arr_9 [i_0] [8LL] [i_5] [i_5]) : (((/* implicit */int) (signed char)4))))));
                var_26 |= ((/* implicit */long long int) (-(598587695)));
            }
        }
        var_27 = ((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */long long int) arr_9 [4LL] [i_0] [i_0] [i_0]))));
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned int) (unsigned char)197);
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(2413500336622299729LL)));
        arr_24 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_6 [i_6] [i_6] [7ULL]) : (((/* implicit */long long int) arr_1 [i_6]))))) ? (((/* implicit */long long int) (-(arr_1 [i_6])))) : ((~(arr_6 [i_6] [i_6] [i_6])))));
    }
    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_20 [22ULL] [i_7]))))) % (max((arr_18 [i_7] [i_7] [1ULL]), (arr_6 [i_7] [i_7] [22U])))));
        arr_29 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((arr_17 [i_7] [i_7] [9] [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)28491))))) : (arr_17 [i_7] [i_7] [i_7] [i_7])));
        var_28 = ((/* implicit */int) 2295830835U);
    }
    for (unsigned char i_8 = 3; i_8 < 17; i_8 += 3) 
    {
        var_29 *= ((/* implicit */unsigned int) (signed char)-16);
        var_30 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8] [i_8 + 2] [i_8 - 2]))) == (4294967295U))))));
    }
}
