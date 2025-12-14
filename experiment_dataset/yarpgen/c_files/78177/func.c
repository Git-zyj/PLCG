/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78177
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */short) (_Bool)1);
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) >= (((((/* implicit */_Bool) (unsigned char)28)) ? (2464519556U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        var_15 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((short)-13149), (((/* implicit */short) (unsigned char)0)))))));
        arr_2 [i_0] = (~(((/* implicit */int) ((_Bool) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(1513526697))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) > (((/* implicit */int) (unsigned char)142))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (short)13138);
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), (arr_10 [i_1 + 4] [i_1] [i_1 + 2] [i_2 + 1]))))));
                    var_17 = ((/* implicit */unsigned char) ((((_Bool) (unsigned char)255)) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)200)) - (((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */short) var_4);
}
