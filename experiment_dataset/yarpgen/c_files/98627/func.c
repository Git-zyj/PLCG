/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98627
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
    var_18 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [10] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (3272669022790687677LL)));
    }
    var_19 = ((/* implicit */int) min(((signed char)86), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_14))))))))));
}
