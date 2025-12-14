/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64580
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) min((((/* implicit */int) arr_3 [i_0 - 1])), ((-(((/* implicit */int) arr_3 [i_0 - 1]))))));
                var_12 = var_8;
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((min((var_10), (((/* implicit */signed char) var_7)))), (arr_1 [(unsigned short)1])))) : ((-(((/* implicit */int) arr_3 [i_0 - 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_9);
    var_15 ^= ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */int) var_7)) / (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) var_7)), (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16792)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_0)))) ? (max((var_3), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
}
