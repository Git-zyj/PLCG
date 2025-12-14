/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7599
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
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
    var_17 = ((/* implicit */unsigned int) ((unsigned short) (~((-(((/* implicit */int) (short)-16511)))))));
    var_18 = ((/* implicit */unsigned char) (((~(var_14))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [(unsigned short)17] [(unsigned short)17] [i_2] [i_2] = ((((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned char)7] [i_0] [i_1] [i_0]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (arr_1 [i_0] [i_0]))))) / (((min((((/* implicit */unsigned int) (unsigned short)28765)), (arr_6 [i_0] [i_0] [i_2]))) - (((1988180215U) | (0U))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_10))) ? (((((/* implicit */_Bool) 2162962116U)) ? (arr_3 [i_1 - 1] [i_1] [i_1]) : ((+(arr_6 [i_0] [i_0] [i_2]))))) : (max((2057001561U), (((/* implicit */unsigned int) (unsigned short)64))))));
                    var_19 -= ((/* implicit */unsigned char) arr_0 [i_1]);
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */short) var_2);
}
