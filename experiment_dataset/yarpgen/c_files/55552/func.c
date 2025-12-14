/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55552
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
    var_10 = ((/* implicit */unsigned int) ((((_Bool) (signed char)62)) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_4)))))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [(signed char)4] [i_1] = ((/* implicit */long long int) ((signed char) arr_3 [9ULL] [i_0 - 2] [8U]));
            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) ((120259084288LL) << (((arr_1 [i_0 + 1] [i_1]) - (3454360933U)))))) : (((arr_3 [1U] [i_1] [(short)8]) % (((/* implicit */unsigned long long int) arr_2 [0ULL] [i_1]))))));
            var_12 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 3]))));
            arr_7 [i_0] = (~(((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */long long int) arr_1 [(signed char)3] [i_1])) : (arr_2 [4] [i_0]))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            arr_12 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_3 [i_0 - 1] [i_2] [(short)5]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [10ULL] [i_0])) || (((/* implicit */_Bool) arr_0 [0] [i_0])))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                arr_15 [i_0 + 3] [7] [3U] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 2]))) > (arr_3 [i_0 + 4] [9ULL] [i_0 + 1])));
                arr_16 [i_2] [(signed char)12] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_0 + 3] [i_2] [(signed char)12] [i_3])))));
            }
        }
        var_13 *= ((/* implicit */unsigned long long int) arr_8 [5ULL] [i_0 + 4]);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                {
                    arr_21 [(signed char)1] [(signed char)5] = ((/* implicit */short) (~(((/* implicit */int) arr_14 [(signed char)8] [i_4] [i_4] [10ULL]))));
                    arr_22 [i_0 + 4] [(signed char)5] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-88)) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_23 [i_0] [i_4] = ((/* implicit */int) (-(((max((((/* implicit */long long int) arr_8 [i_0 + 4] [(_Bool)1])), (arr_0 [i_4] [i_4]))) - (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0 + 3] [i_5 - 2])) + (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
        arr_24 [i_0 + 2] = ((/* implicit */unsigned long long int) arr_20 [i_0 + 2]);
        var_14 = ((unsigned long long int) max((((unsigned long long int) (signed char)70)), (((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_0 + 3] [12ULL])))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)123)))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        arr_31 [i_7] [6U] = ((/* implicit */short) arr_2 [(short)3] [8LL]);
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_37 [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_36 [(short)10] [i_9]) + (arr_34 [(_Bool)1] [(short)11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (((((/* implicit */_Bool) arr_1 [11U] [i_7])) ? (arr_25 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_38 [i_7] [i_8] [(short)2] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [10U] [i_9]))));
                    arr_39 [(_Bool)1] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_7] [11LL])) ? (arr_29 [(signed char)2] [i_8]) : (arr_29 [i_8] [i_9])));
                }
            } 
        } 
    }
}
