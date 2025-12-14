/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80177
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
    var_20 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((unsigned char) var_1))) & (var_11)))));
    var_21 = var_12;
    var_22 = ((/* implicit */int) ((1280837466) > ((+((-(var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [(short)2] [(short)2] [i_0])) & ((-(((((/* implicit */int) arr_4 [i_0] [i_0] [14])) / (var_6)))))));
                    arr_9 [i_0] [(_Bool)1] |= ((/* implicit */_Bool) 1572184644);
                    arr_10 [i_2] [i_1] [(unsigned char)5] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 1572184644)) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) min(((+(var_6))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_2))))));
}
