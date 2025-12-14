/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65435
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)65)) ? (844982825611051988ULL) : (((/* implicit */unsigned long long int) -2945127500496724573LL))))));
        arr_3 [i_0] = ((arr_0 [i_0]) <= (arr_0 [i_0]));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_3);
    }
}
