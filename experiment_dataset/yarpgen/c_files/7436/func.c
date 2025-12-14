/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7436
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */unsigned int) 353502561)) : (var_4))))))) * (((/* implicit */int) var_16))));
    var_21 = ((/* implicit */signed char) (~(var_5)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_7))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (+(-2147483646)));
                    var_24 = ((/* implicit */unsigned int) ((signed char) var_2));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) -1023612754)))))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((arr_5 [i_3] [(_Bool)1]) / (arr_5 [i_3] [i_3])));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) 2147483646)) - (var_12)));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-4LL)))) ? (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_19)) ? (arr_1 [2LL] [2LL]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        arr_16 [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)94))));
        arr_17 [i_4] &= ((((/* implicit */_Bool) arr_5 [(unsigned char)2] [i_4 - 1])) || (((/* implicit */_Bool) arr_5 [(unsigned char)8] [(unsigned char)8])));
        var_28 = ((/* implicit */int) (-(var_12)));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
    {
        arr_20 [i_5 - 1] = ((/* implicit */unsigned char) var_11);
        var_29 = ((/* implicit */int) max((var_29), (arr_5 [0LL] [0LL])));
        var_30 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
    }
}
