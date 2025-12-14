/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67961
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)135)))) && (((/* implicit */_Bool) 1337198095))))), (((var_8) - (((/* implicit */unsigned long long int) var_15))))));
        arr_5 [i_0] [(unsigned char)12] = ((/* implicit */unsigned char) var_1);
    }
    var_19 = ((/* implicit */long long int) -1337198104);
    var_20 -= ((/* implicit */long long int) ((unsigned char) 18446744073709551615ULL));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_0)))) >> ((((+(1337198095))) - (1337198064)))))));
}
