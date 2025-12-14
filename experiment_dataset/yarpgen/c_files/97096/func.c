/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97096
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) arr_0 [5] [5]))))));
        arr_3 [4U] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
        var_17 ^= ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_10))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) ((int) var_5));
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_9 [i_2] = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14))) * (var_5));
        arr_10 [i_2] = (~(((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2]))));
    }
    for (int i_3 = 2; i_3 < 13; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((+(arr_0 [i_3] [i_3 - 1]))) / ((-(((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_9)))) / ((-(((/* implicit */int) var_12))))));
            var_23 = ((/* implicit */unsigned char) arr_12 [i_3] [7]);
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_24 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (8825451780569222487ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3))))));
            var_25 ^= ((/* implicit */int) (~(arr_14 [i_5] [i_3 - 2])));
        }
        arr_17 [i_3 + 1] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_7)))));
    }
}
