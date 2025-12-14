/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78836
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
    var_10 = ((/* implicit */signed char) var_6);
    var_11 = min((3554519029860102894ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 |= ((/* implicit */unsigned int) (_Bool)1);
        var_13 = ((/* implicit */int) (_Bool)0);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? (((/* implicit */long long int) -1)) : ((+(arr_1 [(signed char)4])))));
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((long long int) 4251494018995533157ULL));
    }
    var_16 -= ((/* implicit */int) ((signed char) ((int) min((((/* implicit */int) (_Bool)1)), (-1048576)))));
    var_17 = ((/* implicit */long long int) var_0);
}
