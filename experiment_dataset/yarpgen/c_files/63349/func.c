/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63349
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_17)))));
        var_18 -= var_6;
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned char) arr_6 [i_2] [i_3] [i_4]);
                        arr_15 [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]);
    }
    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        var_22 = var_12;
        var_23 = var_7;
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (short)1008))));
}
