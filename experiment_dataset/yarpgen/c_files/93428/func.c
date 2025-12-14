/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93428
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
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (min((var_0), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (var_7))))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((3541093084U) + (753874212U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-23283)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)28784)) * (((/* implicit */int) (short)1)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-((((!(((/* implicit */_Bool) var_6)))) ? (min((var_0), (((/* implicit */long long int) var_3)))) : (((((/* implicit */long long int) var_7)) + (var_0)))))));
    }
}
