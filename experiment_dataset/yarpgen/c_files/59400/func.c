/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59400
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
    var_20 = (~(((unsigned int) min((4294967295U), (4294967295U)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) 0U);
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-117))))) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (unsigned short)21164)), (var_7))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)1)), (max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (2289801090U))), (((/* implicit */unsigned int) 243159442))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((var_11), (((/* implicit */unsigned long long int) -1501534302))));
        arr_8 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) -1581402864)), ((+(30U)))));
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) | (min((arr_1 [i_1 - 1] [i_1 + 1]), (4294967294U)))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) 1U)), (0ULL))), (((/* implicit */unsigned long long int) (!(arr_3 [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2005166221U), (((/* implicit */unsigned int) 243159470))))) ? (2036536999) : (max((243159464), (-819751097)))))) : ((+(max((((/* implicit */unsigned int) (signed char)-103)), (1U)))))));
    }
    var_23 &= ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
}
