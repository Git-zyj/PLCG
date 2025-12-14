/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99456
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_1))) : (((/* implicit */int) var_5))))) ? (var_1) : (((/* implicit */int) var_4))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_3))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))))) & (((/* implicit */int) ((_Bool) var_4)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned int) var_1)))));
                    arr_11 [i_1] [i_2 - 1] [i_2 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */int) var_7))))) ? (var_3) : (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))));
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_1)));
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) >= (((/* implicit */int) ((unsigned char) var_6)))))) : (((/* implicit */int) var_5)))))));
}
