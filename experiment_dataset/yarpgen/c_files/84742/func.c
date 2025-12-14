/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84742
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -126546670514806635LL)) & (((var_7) | (var_6)))));
    var_17 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-4))))) != (var_11)));
        var_18 -= (~(((/* implicit */int) (unsigned char)45)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_1] [i_1]));
        var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)46526))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                arr_14 [i_1] [i_2] [(unsigned char)19] [(unsigned char)19] = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3 + 1] [i_3 - 2]);
                var_21 = ((/* implicit */signed char) ((arr_4 [i_1]) ? (((((/* implicit */unsigned long long int) var_4)) * (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153)))));
            }
            for (short i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                var_22 = arr_4 [i_1];
                arr_17 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)0);
                arr_18 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((signed char) ((arr_6 [i_1] [i_2] [i_1]) / (var_6))));
            }
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1] [i_1]))));
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])) ? (arr_12 [i_5] [i_5] [i_5]) : (arr_12 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])) ? (var_1) : (((/* implicit */long long int) var_8))))) : (max((arr_12 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_5] [i_5]))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_5] [i_5] [i_5]))) ? (((/* implicit */int) ((unsigned char) (unsigned char)45))) : (((((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_10 [i_5] [i_5] [i_5]))))));
        arr_23 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63012)) ? (var_8) : ((~(((((/* implicit */int) (unsigned char)111)) ^ (((/* implicit */int) var_13))))))));
    }
}
