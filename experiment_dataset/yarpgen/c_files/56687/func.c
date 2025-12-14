/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56687
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [14] [14] [i_0] &= (~(((/* implicit */int) arr_9 [i_0])));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */short) var_7);
    var_19 = ((/* implicit */short) var_12);
    var_20 = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)8127)) : ((~(var_2))))) << ((((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_17)))))) + (47391))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8120))) <= (var_0)))), (((unsigned short) var_9))))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8)))))))));
}
