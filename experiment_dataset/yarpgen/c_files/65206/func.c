/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65206
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
    var_15 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 9148761052342962342LL)) : (var_6))), (((/* implicit */unsigned long long int) min((-9148761052342962342LL), (((/* implicit */long long int) var_8))))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)27998)) << (((((/* implicit */int) (unsigned short)20)) - (5))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (~(((min((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_0])))) | (((/* implicit */long long int) ((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(-9148761052342962354LL))), (min((-9148761052342962343LL), (((/* implicit */long long int) var_13)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)8375)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_3 [i_0])) : (9148761052342962343LL))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
        var_18 = ((/* implicit */_Bool) arr_3 [i_0]);
    }
    var_19 |= ((/* implicit */signed char) min((((unsigned short) (!(((/* implicit */_Bool) (signed char)-126))))), (((/* implicit */unsigned short) var_1))));
}
