/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79891
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_19 ^= arr_0 [i_0 - 1];
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */short) ((signed char) arr_0 [i_1 - 3]));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [(short)4] [i_0])) ? (((/* implicit */int) (unsigned char)134)) : (arr_2 [i_1])))) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((/* implicit */int) var_16))));
                    var_22 = (+(arr_2 [i_0 - 1]));
                    var_23 &= ((/* implicit */unsigned long long int) (-(arr_2 [i_0 + 1])));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned long long int) ((((((var_10) / (((/* implicit */int) var_0)))) + (2147483647))) >> (((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)223)) : (-800469523)))))));
    var_25 = ((/* implicit */unsigned char) var_11);
}
