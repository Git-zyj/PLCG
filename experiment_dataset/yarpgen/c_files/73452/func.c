/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73452
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
    var_18 *= ((/* implicit */short) 1455197026U);
    var_19 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) arr_1 [i_0]));
        arr_4 [i_0] = ((/* implicit */int) var_6);
        arr_5 [(unsigned short)6] |= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [2LL]))), (((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) 1455197021U)) ? (((int) arr_2 [3LL])) : (arr_1 [i_0])))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_15)))) ? (arr_2 [i_0]) : (arr_2 [i_0])))), (var_15)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            arr_12 [i_1] = ((/* implicit */signed char) arr_6 [i_1] [(signed char)9]);
            arr_13 [i_1] [i_1] [(signed char)2] |= ((/* implicit */short) arr_10 [i_1] [i_2 - 1]);
        }
        arr_14 [i_1] [i_1] = ((/* implicit */int) var_14);
        arr_15 [i_1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_8 [i_1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    var_21 = ((/* implicit */unsigned short) var_1);
}
