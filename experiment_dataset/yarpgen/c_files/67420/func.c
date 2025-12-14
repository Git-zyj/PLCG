/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67420
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned long long int) 1665323396);
        var_19 = ((/* implicit */int) ((signed char) var_11));
        var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-114)))) < (((((/* implicit */_Bool) (short)10109)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)147))))));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_15)));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (_Bool)1))))));
        arr_7 [i_1] = ((/* implicit */_Bool) var_10);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_23 ^= (((!((_Bool)1))) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (var_6) : (((/* implicit */long long int) arr_2 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_8))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                {
                    var_25 -= ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_15)))));
                    arr_23 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (arr_1 [i_5 + 3])));
                    arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-112)) < (((/* implicit */int) var_4)))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_18 [i_5 + 2] [i_5 - 1] [i_5 - 1]))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */short) ((signed char) (-(((unsigned int) (_Bool)1)))));
    var_27 = ((/* implicit */unsigned int) var_3);
}
