/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89634
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
    var_14 ^= ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0] &= arr_3 [i_0] [i_0];
                        var_15 = ((/* implicit */int) ((short) arr_3 [i_0] [i_0]));
                        var_16 = arr_6 [i_1] [i_1] [i_1];
                        arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_0] [i_1]);
                    }
                    var_17 ^= ((/* implicit */short) max((max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1436367761465330036LL) : (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)60953)) > (((/* implicit */int) (_Bool)1))))))), (((long long int) arr_5 [i_0] [i_2] [i_0] [i_0]))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = min(((-(max((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_0] [i_1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [5U] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_2] [i_0] [i_2] [5] [i_0] [i_0]))))) ? (arr_1 [i_1] [i_1]) : (min((arr_1 [i_2 + 4] [i_0]), (((/* implicit */long long int) arr_7 [i_1] [i_0] [i_0] [i_1])))))));
                    var_18 = ((/* implicit */unsigned int) ((max((((unsigned long long int) arr_9 [i_2] [i_0] [i_0] [(short)3] [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0] [5])) ? (arr_1 [i_2] [i_0]) : (arr_1 [i_0] [i_0])))))) > (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]))));
                }
            } 
        } 
    } 
}
