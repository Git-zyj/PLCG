/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58968
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
    var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */int) var_9)) & (var_7))) : (((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) (+((+((-(arr_3 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) (+(var_8))))));
    }
}
