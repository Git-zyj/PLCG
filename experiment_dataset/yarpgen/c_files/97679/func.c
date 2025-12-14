/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97679
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((int) ((unsigned int) (unsigned short)3519)));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_3))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) (signed char)114))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))))) ? (var_3) : (((/* implicit */int) (signed char)-94))))));
}
