/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93493
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) 1727586336328175876ULL)))) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-15518))));
        arr_5 [i_0] = arr_2 [i_0] [i_0];
    }
    var_11 = ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)65212)))))) + (((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) var_2))))))));
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    var_13 = ((/* implicit */short) var_1);
}
