/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55153
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
    var_11 = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), ((+(((((/* implicit */int) (short)26520)) - (((/* implicit */int) (unsigned char)248))))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65523)) * (((/* implicit */int) (unsigned char)248)))))));
    var_13 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) < (((/* implicit */unsigned int) var_7))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_0 [i_1 + 2])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_4)))))));
                    arr_10 [i_2] = var_7;
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((((883967930) + (((/* implicit */int) var_10)))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)99)))))) & (((/* implicit */int) var_4))));
}
