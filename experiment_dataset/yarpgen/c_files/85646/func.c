/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85646
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
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_1])) - (22166))))) : (((/* implicit */int) max((arr_4 [i_0] [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 + 1] [i_0 - 1] [i_0]))))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((long long int) arr_3 [i_0])))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) 14680064)) | (-5308139826058993251LL))) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) ((max((var_7), (((/* implicit */unsigned int) var_10)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_10)))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((((/* implicit */int) ((unsigned char) var_0))) + (((((/* implicit */int) var_3)) + (((/* implicit */int) var_0))))))));
    var_15 = ((/* implicit */short) var_3);
}
