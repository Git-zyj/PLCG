/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63474
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 &= ((/* implicit */unsigned short) max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)39851)) : (((/* implicit */int) var_17))))));
        var_21 = ((/* implicit */unsigned short) ((arr_2 [i_0]) >> ((((~(((/* implicit */int) arr_0 [i_0])))) + (56871)))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) arr_2 [i_0])))) : (max((((/* implicit */long long int) max((((/* implicit */int) var_2)), (var_4)))), (arr_1 [i_0] [i_0])))));
        var_22 = ((/* implicit */long long int) arr_2 [i_0]);
    }
    var_23 = ((/* implicit */short) max((var_12), (var_8)));
    var_24 = ((/* implicit */int) var_17);
    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)31166))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2100)) / (((/* implicit */int) (unsigned short)65067))))) ? (var_5) : (((/* implicit */int) max((var_19), (var_10)))))) : (((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) (unsigned char)255)))) / (max((67100672), (var_7)))))))));
}
