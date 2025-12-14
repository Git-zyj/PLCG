/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68744
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max(((~(((long long int) (unsigned short)50623)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */int) var_1)))), (((var_0) ^ (-1113285180)))))))))));
    var_15 = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = min((var_8), (((/* implicit */int) var_10)));
                var_17 = ((/* implicit */unsigned long long int) max((min((((/* implicit */short) arr_3 [i_1] [i_0])), (var_11))), (((/* implicit */short) min((arr_0 [i_0]), (((/* implicit */signed char) arr_3 [i_1] [i_0 - 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_6);
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (((var_8) + ((+(-1113285180)))))));
}
