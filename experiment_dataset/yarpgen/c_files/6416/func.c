/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6416
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
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_12))))) ? (var_6) : (((/* implicit */long long int) (+(((/* implicit */int) var_1))))))) >> (((((/* implicit */int) (unsigned short)4095)) - (4075)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_6);
        var_14 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)4092)) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (5414257346336874159ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_0)))))))));
    }
    var_15 += ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) (unsigned short)61423))))))) >> (((var_6) - (5996854481565455201LL)))));
}
