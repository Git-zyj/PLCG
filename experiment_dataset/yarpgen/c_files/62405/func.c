/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62405
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_0 [i_0]))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), ((short)-2464)))) ? (min((((((/* implicit */int) (signed char)-67)) - (((/* implicit */int) (short)1536)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_1 [13ULL])))))) : (((((/* implicit */int) arr_1 [i_0 + 1])) + (((/* implicit */int) arr_2 [i_0 + 1]))))));
    }
    for (long long int i_1 = 3; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2]))) > (min((((/* implicit */unsigned long long int) arr_5 [i_1 - 2])), (var_6)))));
        var_20 = (signed char)84;
        var_21 = ((/* implicit */unsigned short) ((short) 3966180951923999941LL));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)4)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)1))))), (6ULL)));
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) var_16))))));
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((var_12) << (((4172559947U) - (4172559935U))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))))));
}
