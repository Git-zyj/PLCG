/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92960
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_9))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(unsigned char)13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned int) var_2)))) - (2153937424U)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-13743))) != (min((9223372036854775807LL), (((/* implicit */long long int) arr_1 [(short)3] [i_0]))))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_18 *= ((/* implicit */unsigned int) arr_1 [i_0] [9U]);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_1]) - (min((arr_4 [i_1]), (arr_4 [i_1])))));
        var_19 = ((/* implicit */unsigned short) ((min((arr_4 [i_1]), (((/* implicit */long long int) 0)))) + (((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) arr_3 [i_1])) : (arr_4 [i_1]))) << (((arr_3 [i_1]) - (3048853971U)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (arr_4 [i_3]))));
                    arr_13 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7946943498553795279LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (771604851U)));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2])) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (var_5) : (539572118U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))));
                        arr_17 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_4]))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) / (((((/* implicit */_Bool) var_0)) ? (arr_9 [i_3] [i_4]) : (arr_3 [(signed char)1])))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2]))) ? (((/* implicit */long long int) arr_3 [i_2])) : (((((/* implicit */_Bool) arr_15 [i_2])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))));
    }
    var_24 = ((/* implicit */_Bool) var_0);
    var_25 = ((/* implicit */int) var_4);
}
