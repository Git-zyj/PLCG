/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75018
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) min((max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)24857)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) arr_1 [i_0]))));
        var_13 = ((/* implicit */int) ((long long int) -5231916209579917113LL));
    }
    var_14 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) % (max((((/* implicit */long long int) arr_2 [i_1])), (-4LL))))));
        var_16 = max((((/* implicit */unsigned long long int) arr_1 [i_1])), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_4))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_5))));
            arr_7 [i_1] [3ULL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % ((+(var_4)))));
            arr_8 [7LL] [7LL] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
        }
        for (int i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            var_18 &= ((/* implicit */long long int) var_3);
            arr_11 [10U] [i_1] = ((/* implicit */long long int) 3013344370U);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_15 [i_3] [i_1] [i_1] = ((/* implicit */short) ((long long int) arr_14 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1]));
                var_19 = ((/* implicit */unsigned int) 44167675);
            }
            var_20 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (0ULL))), (((/* implicit */unsigned long long int) (-(0U))))));
        }
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(105102844)))) : (max((arr_17 [i_5]), (arr_17 [i_5])))));
        /* LoopSeq 1 */
        for (int i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) var_2))))), (max((arr_5 [i_5] [i_6]), (-5LL)))));
            var_23 = 18446744073709551615ULL;
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                arr_27 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-29586))) / (((((/* implicit */_Bool) arr_1 [i_7])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))))))) : (((long long int) ((signed char) arr_1 [5U])))));
                arr_28 [i_5] [i_6 + 1] [i_5] [(short)17] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)13214))))), (min((((/* implicit */long long int) max((((/* implicit */int) (signed char)(-127 - 1))), (44167673)))), (((arr_23 [i_6] [i_6]) & (((/* implicit */long long int) ((/* implicit */int) (short)-10908)))))))));
            }
            for (unsigned int i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (((((+(arr_5 [i_6 - 1] [i_6 - 1]))) + (9223372036854775807LL))) >> (((max((arr_5 [i_6 - 1] [i_6 - 1]), (arr_5 [i_6 - 1] [i_6 - 1]))) + (3809833596693875216LL))))))));
                var_25 = ((/* implicit */unsigned int) 1166039310);
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6 - 1] [i_8 + 2] [i_8 + 2]))) / (arr_5 [1U] [(short)17]))))));
            }
        }
        arr_32 [i_5] = min((((long long int) min((arr_20 [i_5] [i_5]), (((/* implicit */unsigned long long int) (short)-8639))))), (((/* implicit */long long int) arr_25 [2U] [i_5] [i_5] [i_5])));
        var_27 = ((/* implicit */unsigned long long int) arr_31 [i_5] [16LL] [18ULL] [i_5]);
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_35 [i_9])))))));
        arr_37 [13ULL] = ((/* implicit */long long int) arr_18 [i_9]);
    }
}
