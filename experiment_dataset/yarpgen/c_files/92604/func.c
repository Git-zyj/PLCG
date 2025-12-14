/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92604
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -613657576))))) : (((/* implicit */int) var_4))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((~((~(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_2 [(signed char)1]))));
                var_15 *= ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_2 [(unsigned char)5])) >= (((((/* implicit */int) arr_2 [i_1])) << (((((/* implicit */int) arr_4 [i_0] [i_1] [6])) + (110)))))))));
                var_16 += max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) & (613657576)))) : (arr_1 [i_0] [i_1])))), (((long long int) var_7)));
            }
        } 
    } 
}
