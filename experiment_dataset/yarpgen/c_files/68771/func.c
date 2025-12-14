/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68771
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
    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
    var_13 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_8))) ? (((long long int) 15609996U)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4279357299U)))))))), (((/* implicit */long long int) var_0))));
    var_14 += ((/* implicit */unsigned int) ((_Bool) (+(max((var_4), (((/* implicit */long long int) var_7)))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)226)) : (((int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (532388371))))))));
        var_17 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0]))))))));
    }
}
