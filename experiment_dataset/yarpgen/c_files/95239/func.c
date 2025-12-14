/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95239
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1231)) ? (((/* implicit */unsigned long long int) -1246379511)) : (6834323422618860119ULL))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1] [i_2]))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_7 [i_0 - 4] [i_0 - 4])), (var_12)))) ? (((((/* implicit */int) arr_0 [i_2])) ^ ((+(-1953739881))))) : ((((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), (var_8)))) : (((/* implicit */int) (short)0))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)22)) / (((/* implicit */int) var_5))))))));
    var_21 *= ((/* implicit */short) max((var_15), (((/* implicit */unsigned short) var_5))));
}
