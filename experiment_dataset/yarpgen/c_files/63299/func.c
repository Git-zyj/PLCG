/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63299
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((arr_4 [i_0] [(unsigned short)11]), (arr_4 [i_0] [i_2])));
                    var_18 = ((/* implicit */short) var_6);
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_16)) - (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)0)))))) & (((/* implicit */int) ((((/* implicit */int) max((arr_0 [(short)2]), (((/* implicit */unsigned short) arr_5 [i_1]))))) >= (((((/* implicit */int) arr_2 [i_0 - 1])) - (((/* implicit */int) arr_1 [i_1] [(short)12])))))))));
                }
            } 
        } 
    } 
    var_20 = var_12;
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((unsigned long long int) var_8)) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))) : (((/* implicit */int) var_1))));
}
