/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8768
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) ((int) (short)-25933))) * (((/* implicit */unsigned long long int) ((unsigned int) (short)-25931)))));
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) / (arr_0 [i_0]))) - (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)25936)) ? (((/* implicit */int) (unsigned short)62198)) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned short)62218))))));
    }
    var_19 = ((/* implicit */unsigned char) var_4);
}
