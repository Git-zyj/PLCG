/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57808
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (arr_3 [i_0] [i_0 - 2]) : (((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_0 - 2]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) arr_0 [i_0 + 1]));
        var_13 = ((/* implicit */short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) var_2));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_1])) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_4))));
        }
        var_15 *= ((/* implicit */short) arr_8 [0ULL]);
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_10 [i_1])));
        var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1])))))) - (arr_6 [i_1])));
    }
    var_17 = ((/* implicit */unsigned int) ((long long int) var_8));
    var_18 = ((var_6) % (((/* implicit */long long int) var_9)));
    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-20))))) : (var_10)))));
}
