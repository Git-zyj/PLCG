/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75576
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
    var_13 = ((/* implicit */long long int) ((signed char) var_8));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -2120988510)) ? (13818939585222790618ULL) : (((/* implicit */unsigned long long int) -2120988510)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) ((_Bool) arr_3 [(unsigned short)15]))) : (((/* implicit */int) var_10))));
                arr_6 [14LL] = ((/* implicit */unsigned long long int) (+(((int) arr_4 [i_1 + 2] [i_1 + 2]))));
                arr_7 [3LL] = ((/* implicit */_Bool) ((signed char) arr_2 [i_1 + 1]));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_10);
}
