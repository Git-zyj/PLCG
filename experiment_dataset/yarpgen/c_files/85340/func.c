/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85340
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (-(arr_1 [i_0 + 1])));
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned short)63510);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) var_11);
        arr_6 [6LL] [i_1] = (unsigned short)63510;
        var_16 = arr_5 [i_1];
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
        {
            arr_13 [4ULL] [i_2] = ((/* implicit */unsigned long long int) (signed char)105);
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((-((~(((/* implicit */int) arr_3 [i_2] [i_2])))))) : (max((((/* implicit */int) (short)23470)), (((((/* implicit */int) (unsigned short)2026)) - (((/* implicit */int) var_0))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
        {
            var_18 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (var_3) : (((/* implicit */unsigned long long int) var_12))))))) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) ((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))))))))));
            var_19 &= max((arr_3 [i_2] [i_2]), ((signed char)-81));
            var_20 = ((/* implicit */unsigned long long int) var_4);
        }
        arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2])))) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : ((~((+(((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))))))));
    }
}
