/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95466
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
    var_15 = ((/* implicit */short) ((((((/* implicit */int) max((var_7), (var_11)))) / (((((/* implicit */int) var_7)) / (((/* implicit */int) var_11)))))) < (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (_Bool)1))));
                var_17 = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (634737830U))), (((/* implicit */unsigned int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_7)))))), (((((/* implicit */int) ((unsigned char) 303038773U))) % (((/* implicit */int) var_5))))));
}
