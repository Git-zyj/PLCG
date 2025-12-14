/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5648
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))))))))));
    var_11 = (+(min((((/* implicit */unsigned int) (signed char)60)), (4294967287U))));
    var_12 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3627443899U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)41))))) : (((/* implicit */int) var_2))))) <= (max((((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (var_3)))), (var_5)))));
    var_13 = var_1;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))), ((((~(4294967295U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-33)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_4 [i_1] [i_0]))))))))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1] [i_0])), (arr_5 [i_0] [(unsigned char)13] [i_1 + 1]))))) <= (arr_3 [i_1])))))))));
            }
        } 
    } 
}
