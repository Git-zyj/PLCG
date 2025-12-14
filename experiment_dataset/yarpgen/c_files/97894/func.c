/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97894
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
    var_10 = ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) ^ (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (signed char)30))))))) * ((+(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_6))))))));
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((unsigned long long int) var_1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = (((((~(((/* implicit */int) var_3)))) + (2147483647))) >> ((((-(((arr_5 [i_0] [i_1] [4U]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (12677048327762097484ULL))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((var_0) ? (((/* implicit */long long int) 757432266U)) : (((long long int) var_3))));
            }
        } 
    } 
}
