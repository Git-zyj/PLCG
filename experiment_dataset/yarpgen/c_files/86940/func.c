/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86940
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_1 [i_0] [i_1])), ((-(((/* implicit */int) arr_4 [i_0] [i_1 + 4])))))), (min((((/* implicit */int) min((arr_4 [i_1 - 1] [i_0]), (((/* implicit */short) arr_3 [(unsigned char)0] [i_0]))))), ((+(((/* implicit */int) (unsigned short)8180))))))));
                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [(unsigned char)4] [(unsigned short)10])), (arr_2 [8U]))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) min((max(((-(var_14))), (((/* implicit */long long int) var_5)))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_16)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_6)), (var_5)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14)))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_5) > (((/* implicit */int) var_3)))))))) || (var_13)));
    var_21 = ((/* implicit */long long int) var_11);
}
