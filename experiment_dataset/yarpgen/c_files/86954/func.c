/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86954
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
    var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2676208794U) : (1618758501U)))))) ? (var_2) : (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_1))));
        arr_3 [(unsigned char)3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) ((unsigned char) (short)-1))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (arr_0 [i_0] [i_0]))))))) - (((unsigned int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            {
                arr_10 [i_2] [i_2] = ((/* implicit */int) 1618758502U);
                arr_11 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)103)), (((((/* implicit */_Bool) 3200220301U)) ? (511) : (((/* implicit */int) (_Bool)1))))));
                arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_9 [i_1] [i_2] [i_1])))) ? (((((/* implicit */_Bool) 1094746985U)) ? (1411375181U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
}
