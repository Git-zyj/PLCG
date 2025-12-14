/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66751
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
    var_16 *= ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((short) (signed char)96))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) >= (arr_3 [i_1] [i_1]))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3584))) : (52776558133248LL))))));
                var_18 = ((/* implicit */signed char) (((_Bool)1) ? (arr_2 [i_0] [i_1] [i_1]) : (((((/* implicit */_Bool) 1317174816319255708ULL)) ? (((/* implicit */unsigned long long int) 8982414938115195334LL)) : (17314000067554381624ULL)))));
                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_1 + 2] [i_0]), (arr_1 [(unsigned char)4] [i_1]))))) * (((1132744006155169992ULL) & (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))) && (((/* implicit */_Bool) arr_0 [20]))));
            }
        } 
    } 
}
