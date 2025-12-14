/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84579
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
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (signed char)(-127 - 1));
        arr_2 [6] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -1724981301)) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (939368852U))), (((/* implicit */unsigned int) 32764))));
    }
    var_17 -= max((min(((+(var_14))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_13)), ((unsigned char)75)))))), (((/* implicit */unsigned int) ((((int) (signed char)123)) | (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)30))))))));
}
