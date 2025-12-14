/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97421
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
    var_14 = ((long long int) ((long long int) (~(var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_2 [i_1] [2LL])) ? ((~(-4589275985192469936LL))) : (((-13LL) + (4056169088672352334LL))))) : (9223372036854775807LL));
                var_16 = ((((/* implicit */_Bool) (-(arr_3 [i_0 - 2])))) ? (((arr_3 [i_0 + 3]) - (var_10))) : (((arr_3 [i_0 - 2]) >> (((var_0) + (1288196130665102742LL))))));
            }
        } 
    } 
    var_17 ^= max((var_10), (min((((long long int) -3911204904970222291LL)), (var_12))));
    var_18 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-1422268822102465168LL) : (var_10)))) ? ((~(var_6))) : (((var_10) & (-1147007277418035802LL))))));
}
