/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/592
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
    var_12 ^= var_4;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_13 = min((((((((/* implicit */int) arr_0 [i_0 + 2] [i_0])) > (((/* implicit */int) (short)-31962)))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0])));
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) > (min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0]))))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) (unsigned short)32166);
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))))) : (((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))))));
    }
    var_16 &= ((/* implicit */short) (-(((/* implicit */int) var_4))));
}
