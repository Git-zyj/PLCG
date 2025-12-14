/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67180
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((unsigned char) var_1))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_12 = ((/* implicit */_Bool) ((long long int) (signed char)-87));
    var_13 |= ((/* implicit */int) var_7);
    var_14 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 12790346537533201694ULL)) ? (5656397536176349922ULL) : (12790346537533201681ULL)));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (var_6)))) / (((((/* implicit */int) arr_5 [i_0] [i_1])) / (((/* implicit */int) (signed char)64))))))) / ((-(arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))))));
            }
        } 
    } 
}
