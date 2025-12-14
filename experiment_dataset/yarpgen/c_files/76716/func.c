/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76716
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((3471383399731292164LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26212))) : (arr_3 [(signed char)10] [i_0 + 2] [i_0 + 2]))))))))))));
                arr_5 [i_0 + 1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((short) (signed char)64)), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) <= (3471383399731292162LL))))))), (((((/* implicit */_Bool) 1615554616839965384LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6513))) : (4675222663794899492LL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)44687)), (4608116880686717901LL)))) ? (((/* implicit */long long int) 2587620593U)) : (-6360436681553156332LL))) : (min((1124800395214848LL), (((/* implicit */long long int) (short)30079))))));
    var_15 = ((/* implicit */unsigned int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9))))))))));
}
