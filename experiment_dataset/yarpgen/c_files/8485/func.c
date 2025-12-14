/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8485
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (var_10) : (((/* implicit */unsigned long long int) ((long long int) var_14)))))) || (((/* implicit */_Bool) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] [i_1] [i_2] = var_12;
                    arr_9 [10ULL] [i_1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_0 - 1] [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) ((1U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
                    arr_11 [11U] [i_1] [i_0] = ((/* implicit */long long int) ((arr_6 [i_1] [i_1] [i_1 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16382)))));
                    arr_12 [(signed char)0] = ((/* implicit */int) arr_7 [i_0]);
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_0]) + (var_12)));
        arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [8ULL] [i_0 - 1] [8ULL])) || (((/* implicit */_Bool) arr_6 [6ULL] [i_0] [i_0 - 1]))));
        arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (2147483647) : (arr_2 [(unsigned char)0] [i_0] [(unsigned char)0]))) >> (((arr_1 [i_0]) - (3431839718U)))));
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_9))))));
    }
    var_18 = (unsigned char)0;
}
