/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72563
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
    var_11 += ((/* implicit */signed char) max((((unsigned int) var_4)), (((unsigned int) (unsigned short)1576))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) / (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_3))))))) / (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-113)) ? (((((/* implicit */_Bool) -6392336519377047115LL)) ? (((/* implicit */unsigned long long int) 2126644843)) : (12089165472626483665ULL))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_13 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(min((9223372036854775789LL), (((/* implicit */long long int) 678322415))))))), (((((/* implicit */unsigned long long int) arr_3 [i_0])) + (var_1)))));
        arr_5 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (arr_3 [i_0])))), (min((((/* implicit */unsigned long long int) (~(arr_1 [i_0])))), (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_1)))))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((arr_1 [i_1]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4813))) : (2401758570U))))))) ? (min((arr_0 [i_1 + 1]), (arr_7 [i_1 + 1]))) : ((~(arr_0 [i_1])))));
        var_15 -= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((6357578601083067937ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((349861597703297495LL), (arr_3 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_1])))))))) ? (min((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))))), (((((/* implicit */_Bool) 29U)) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)256)))));
    }
}
