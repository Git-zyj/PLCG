/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73567
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (min(((-(var_10))), (((/* implicit */unsigned long long int) (~(var_8))))))))));
    var_15 = ((/* implicit */signed char) (((!(((_Bool) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12381623806443173294ULL)) && (((/* implicit */_Bool) (signed char)95)))))))))) : (var_8)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_17 &= (!(((/* implicit */_Bool) (~(((1432060968U) + (1432060977U)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [5U] = ((_Bool) (((-(11ULL))) / (((/* implicit */unsigned long long int) (+(1432060971U))))));
            arr_7 [i_0] [i_0] [i_1 + 3] = ((/* implicit */signed char) min(((~((~(var_10))))), ((-((~(7924659537757527978ULL)))))));
            var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (1432060954U)))) ? (var_5) : (((/* implicit */unsigned long long int) (+(2680961284U)))))), (((/* implicit */unsigned long long int) max((arr_1 [i_0 + 4] [i_1 + 4]), (arr_1 [i_0 + 2] [i_1 + 2]))))));
            var_19 = (_Bool)1;
            arr_8 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
        }
    }
}
