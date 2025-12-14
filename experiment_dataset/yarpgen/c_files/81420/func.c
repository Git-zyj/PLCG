/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81420
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
    var_15 = ((/* implicit */_Bool) ((unsigned short) var_2));
    var_16 = ((((/* implicit */_Bool) max((3612084182U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)42477)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max(((unsigned short)42498), (((/* implicit */unsigned short) var_8))))))) : (min((var_11), (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16256)))))))));
    var_17 = ((/* implicit */unsigned char) ((unsigned int) var_14));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)15))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) (-((-(2147483638)))));
            }
        } 
    } 
}
