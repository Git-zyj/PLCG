/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77528
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
    var_17 = ((/* implicit */short) (unsigned char)64);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)231)));
        arr_4 [i_0] = (~(min((((/* implicit */int) var_1)), ((~(((/* implicit */int) (unsigned char)231)))))));
        var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (((unsigned int) (unsigned short)28702))))));
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_5)), (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */int) var_5)) & (((/* implicit */int) var_2)))) | (((((/* implicit */int) (_Bool)0)) & (var_9)))))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (var_10))))), (min((((/* implicit */int) (_Bool)1)), (var_9))))))));
    }
}
