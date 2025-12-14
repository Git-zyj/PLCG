/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8332
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((int) (short)-8192));
                var_20 *= arr_4 [i_0] [i_0 + 1] [i_0 + 1];
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_4 [i_1] [1] [1]))) | (((/* implicit */int) var_12))));
                var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18)))))))));
                var_23 = min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_4 [(short)15] [i_0 + 1] [i_1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) var_19)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_12);
    var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))))));
    var_26 = ((/* implicit */_Bool) var_19);
}
