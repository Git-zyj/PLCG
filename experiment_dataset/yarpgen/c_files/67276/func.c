/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67276
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [16] [(unsigned short)6] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_3)), (arr_8 [i_0] [i_0] [i_0] [(unsigned short)0]))), (((/* implicit */int) ((_Bool) (unsigned short)57490)))))) ? (((unsigned int) (~(((/* implicit */int) var_19))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8046)) ? (arr_9 [14] [i_0] [i_1] [i_2]) : (arr_6 [i_0] [i_0] [i_0])))) ? ((~(arr_8 [20U] [20U] [i_1] [i_2]))) : ((~(((/* implicit */int) arr_2 [(_Bool)1])))))))));
                    arr_12 [i_0] [i_0] [12] [i_0] = ((/* implicit */short) (-(((((((/* implicit */_Bool) (unsigned char)32)) || (((/* implicit */_Bool) (unsigned char)223)))) ? (((((/* implicit */_Bool) var_15)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_6 [i_0] [(short)14] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [(unsigned char)11] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_8);
}
