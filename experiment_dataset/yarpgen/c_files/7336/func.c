/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7336
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(signed char)14] [i_1 + 2] [i_1])) ? (arr_3 [i_1] [i_1 + 2] [1LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)11)))));
        }
        var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [9LL])) : (arr_4 [i_0])))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)21))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1754785529)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4)));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11)))) ? (max((18446744073709551600ULL), (((/* implicit */unsigned long long int) (unsigned short)21)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1754785526)) ? (((/* implicit */unsigned int) -1754785529)) : (var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1734459401536345883ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12))))))) : (((/* implicit */int) var_2))));
    var_19 = ((/* implicit */unsigned char) (signed char)-64);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_2))));
}
