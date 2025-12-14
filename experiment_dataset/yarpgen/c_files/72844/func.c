/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72844
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-125)) - (var_0)))))))) >= (1185934929359284338ULL)));
        var_10 += (+(17260809144350267299ULL));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17260809144350267278ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (6ULL)));
        var_11 *= (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
    }
    var_12 = ((/* implicit */short) (-((+(var_0)))));
}
