/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93685
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [(unsigned short)2] [19LL] = ((/* implicit */unsigned char) (((~(8090339611989122690LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (((/* implicit */int) arr_0 [(unsigned char)7])) : (((/* implicit */int) (unsigned short)36351)))))));
        arr_3 [(short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (2147483647) : (((/* implicit */int) arr_0 [(unsigned short)21]))))) ? (((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))))) : (((/* implicit */long long int) max((arr_1 [(signed char)19] [i_0]), (var_5))))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
        var_11 = ((/* implicit */unsigned long long int) (~(var_3)));
        var_12 = ((/* implicit */unsigned char) arr_4 [i_1]);
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        arr_12 [3] = ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_2 - 1])) != (((/* implicit */int) arr_8 [i_2 - 1])))) ? (max((((/* implicit */unsigned int) arr_8 [(unsigned char)8])), (var_3))) : (((/* implicit */unsigned int) var_4))));
        arr_13 [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((arr_4 [(unsigned short)14]) / (var_5)))));
    }
    var_13 = ((/* implicit */unsigned short) 960);
}
