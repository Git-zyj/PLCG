/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96117
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
    var_21 = ((/* implicit */short) var_13);
    var_22 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) min((min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))))), (min((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_2))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((min((arr_3 [i_1]), (arr_3 [i_1]))) % (((var_13) % (arr_3 [i_1]))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5791056274394660327ULL)) ? (((/* implicit */int) (short)-7443)) : (((/* implicit */int) (short)7438))))) ? (min((var_16), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))), (((/* implicit */long long int) var_12))));
}
