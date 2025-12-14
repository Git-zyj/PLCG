/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58770
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
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29995)) > (((/* implicit */int) (unsigned char)62))))), (max((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) var_5)), (arr_1 [i_0])))) + (max((arr_2 [i_0]), (((/* implicit */int) var_5))))));
        arr_3 [i_0] = (~(2147483647));
    }
}
