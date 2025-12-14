/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67204
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
    var_12 = 3769605008061151870ULL;
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((int) 3769605008061151884ULL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_14 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_9) / (var_9))))));
            var_15 = ((/* implicit */unsigned long long int) (unsigned short)15843);
        }
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65249)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : ((~(14677139065648399745ULL)))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1])) ? (arr_9 [i_0] [i_0 + 1]) : (14677139065648399745ULL)));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 2) 
                {
                    arr_13 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [(unsigned short)11] [i_3] [i_4] [i_4] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65249))))) : (arr_0 [i_0])));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) <= (((/* implicit */int) ((unsigned short) var_4)))));
                    var_19 = ((((arr_8 [i_2 - 1] [i_3]) * (arr_0 [i_3 - 1]))) / (((unsigned long long int) 127427895)));
                }
                for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_20 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0]))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14677139065648399732ULL)) ? (((var_9) / (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) var_5)))))))));
                }
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_5))))) ? (var_9) : (((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned short)15843)) - (15832))))))))));
            }
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_23 |= ((/* implicit */unsigned short) arr_9 [i_6] [i_0]);
            arr_20 [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) arr_0 [i_6]);
        }
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned long long int) arr_15 [i_0] [i_0 + 1])))));
        var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0])) ? (arr_12 [i_0] [i_0] [6ULL] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)309))))) + ((~(arr_8 [i_0] [i_0])))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) min((((int) (!(((/* implicit */_Bool) (unsigned short)65249))))), (2147483647)));
        arr_24 [14ULL] [i_7] = (~(((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)8))))));
        var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8189)) || (((/* implicit */_Bool) 13241197505522550228ULL))));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        var_28 = -2147483647;
        arr_27 [i_8] [i_8] = ((/* implicit */int) var_5);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                {
                    var_29 ^= arr_28 [i_8] [i_9 + 1] [i_10];
                    var_30 = ((/* implicit */int) min((var_30), ((-(max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)61500)) : (((/* implicit */int) (unsigned short)0))))))))));
                }
            } 
        } 
    }
    var_31 ^= ((/* implicit */unsigned short) 3769605008061151855ULL);
}
