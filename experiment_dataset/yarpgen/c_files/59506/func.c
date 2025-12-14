/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59506
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((~(var_18))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_1))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)17)) * (((/* implicit */int) arr_2 [i_0] [i_0])))))))) : (max(((-(((/* implicit */int) arr_2 [11U] [i_0])))), ((+(arr_0 [i_0])))))));
        var_20 = ((/* implicit */short) min((-581962777), ((~(((/* implicit */int) (unsigned char)255))))));
    }
    var_21 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))), (min(((~(797083644))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    var_22 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) * ((-(((/* implicit */int) var_8)))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_4), (var_3)))) : (((/* implicit */int) var_4))))));
    var_23 = ((/* implicit */short) var_8);
}
