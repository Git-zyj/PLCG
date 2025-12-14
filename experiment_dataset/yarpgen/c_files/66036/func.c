/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66036
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
    var_20 = 2126313508918362551LL;
    var_21 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) -1180428010857425818LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (max((1180428010857425817LL), (-1214430596160334657LL))))) : (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 1152921504606781440LL)))) ? (((((/* implicit */_Bool) var_11)) ? (var_8) : (-2LL))) : (var_14))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -1180428010857425818LL))))), (var_5))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((long long int) 7881299347898368LL))));
                arr_6 [i_1] = max(((-9223372036854775807LL - 1LL)), (-2739181350954431702LL));
                var_24 ^= (+(((((/* implicit */_Bool) var_6)) ? ((+(arr_3 [i_1 + 2]))) : (min((2739181350954431701LL), (arr_4 [i_0] [i_0] [i_0 - 1]))))));
            }
        } 
    } 
}
