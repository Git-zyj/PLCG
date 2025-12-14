/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93683
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8937671562575775155LL)) ? (((/* implicit */long long int) 4294967295U)) : (-8937671562575775166LL))))))) ? (((/* implicit */unsigned int) var_3)) : (4294967272U))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) (short)6338)) ? (var_9) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)73)))))) >> (((var_9) - (343796175)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)-107)) >= (571971333)));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) min((arr_3 [i_1]), (var_12))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) var_3)) ? (((var_14) - (((/* implicit */unsigned int) var_9)))) : (var_1));
    var_17 ^= ((/* implicit */unsigned short) (short)-29524);
}
