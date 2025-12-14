/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9948
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 2733057168U))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) (-(3187098442521820402ULL)));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) -3944459711906797413LL)) ? (((((/* implicit */_Bool) ((9007061815787520ULL) << (0ULL)))) ? (min((((/* implicit */unsigned long long int) 201326592U)), (12ULL))) : (((/* implicit */unsigned long long int) 7978816509238128975LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [11ULL])))))));
    }
}
