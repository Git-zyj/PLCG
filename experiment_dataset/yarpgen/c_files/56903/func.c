/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56903
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
    var_10 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) : (-4113976438749120856LL)))));
    var_11 = ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_3))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) min((var_4), ((unsigned short)4)))) ? ((-(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_7)))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((min((arr_0 [i_0]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_6))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + ((+(arr_1 [i_1] [i_0])))))));
                var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0]) : (arr_4 [i_0]))), (((/* implicit */unsigned long long int) (unsigned char)187))));
                var_15 = ((/* implicit */short) (~(((((((/* implicit */int) (short)-30349)) + (2147483647))) >> (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned int) min((min((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_6)))))), ((-(((/* implicit */int) (signed char)112))))));
}
