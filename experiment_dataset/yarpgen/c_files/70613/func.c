/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70613
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
    var_17 = ((/* implicit */unsigned short) max((((unsigned long long int) 177953343420468811ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (var_13))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */short) var_15);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_5)))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) var_1);
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1]))));
        arr_6 [i_1] &= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13)))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_10 [i_1] = ((/* implicit */_Bool) var_7);
            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */short) var_6)), (((short) arr_9 [i_1] [i_2] [i_2]))));
            arr_12 [i_2] [i_2] = ((/* implicit */short) var_9);
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */int) ((unsigned char) var_5))))), (arr_0 [i_1]))))));
        }
    }
}
