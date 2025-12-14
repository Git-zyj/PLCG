/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71455
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)8413)))))))) * ((-(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : ((-(min((((/* implicit */long long int) arr_0 [i_0])), (9223372036854775807LL)))))));
                var_18 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [(unsigned char)9] [i_1] [i_1]))) && (var_8))));
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */short) arr_2 [i_0] [i_0] [i_0 + 1])), (var_13)))), (((unsigned int) arr_1 [i_0 - 1]))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), ((((_Bool)0) ? (((/* implicit */long long int) arr_3 [i_0])) : (4136608715505960908LL))))) : (((/* implicit */long long int) ((int) arr_4 [i_0] [i_0 + 1])))));
            }
        } 
    } 
}
