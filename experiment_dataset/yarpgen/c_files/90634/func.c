/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90634
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-((+(((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) (signed char)-6);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0] [7]))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42353))) : (-7789218117066849734LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
    }
    var_13 ^= ((/* implicit */signed char) ((_Bool) var_4));
    var_14 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) 7789218117066849729LL)) ? (-5591349862274378687LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
}
