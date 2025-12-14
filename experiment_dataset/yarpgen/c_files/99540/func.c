/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99540
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (!((_Bool)0))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) ((max((((/* implicit */long long int) (signed char)-38)), (var_9))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)20)))))))));
    var_12 |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)13)) == (((/* implicit */int) (signed char)3))));
    var_13 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0] [9LL] = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0 + 2]));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 - 2]))));
    }
}
