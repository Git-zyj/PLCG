/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78648
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_18 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (4834795594714384248ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)0))));
        arr_6 [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 503316480)) ? (23ULL) : (((/* implicit */unsigned long long int) 889297140)))), (((/* implicit */unsigned long long int) (short)-31619))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (arr_4 [(_Bool)1] [i_1]));
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_9))));
}
