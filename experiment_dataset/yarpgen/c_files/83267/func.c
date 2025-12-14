/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83267
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((max((((/* implicit */long long int) (signed char)0)), (arr_1 [(signed char)8]))) % (var_6)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((int) (signed char)(-127 - 1))));
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) (_Bool)0)), (arr_1 [i_0]))))))));
        var_20 += ((/* implicit */short) max(((+(arr_1 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (max((((/* implicit */long long int) (signed char)4)), (-2928605027347780551LL)))))));
    }
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_14))))))));
    var_22 = ((/* implicit */unsigned long long int) (signed char)0);
    var_23 = ((/* implicit */long long int) var_10);
}
