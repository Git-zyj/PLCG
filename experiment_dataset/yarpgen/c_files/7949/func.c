/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7949
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
    var_18 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) 2296925861U)));
    var_19 *= var_7;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22718)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_1])))) : ((+(9223372036854775807LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) && (((/* implicit */_Bool) arr_6 [i_0]))))))))));
                arr_7 [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_0]))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-11)), (((((/* implicit */_Bool) 1230932393566905883LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (4294967293U)))))) ? ((-(((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : ((-9223372036854775807LL - 1LL)))))) : (((long long int) arr_5 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) 1018913906471556334LL)))));
}
