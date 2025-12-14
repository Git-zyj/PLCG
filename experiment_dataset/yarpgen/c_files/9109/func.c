/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9109
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [12] [i_0] = ((/* implicit */short) arr_1 [i_0 - 1] [i_0 - 1]);
        var_19 = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((/* implicit */int) (short)-4812)) : (((/* implicit */int) (short)4797)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)4812))) : (8713171397900957127LL)))) ? (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (short)32766)))) : (((/* implicit */int) (short)-4813))))));
        var_20 ^= ((/* implicit */int) ((unsigned long long int) ((arr_2 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))));
        arr_5 [i_0] [i_0 - 1] = ((/* implicit */_Bool) max((((/* implicit */int) (short)1101)), (min((((var_14) ? (((/* implicit */int) (short)-1130)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) (short)4813)))))))));
    }
    var_21 = ((/* implicit */signed char) max((max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_5)), (var_0)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-8713171397900957134LL))))), (((/* implicit */long long int) -2147483634))));
    var_22 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)17828)))), (var_15))), (((/* implicit */int) (signed char)-70))));
}
