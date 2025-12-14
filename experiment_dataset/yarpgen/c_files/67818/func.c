/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67818
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0 + 4]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4194303U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) : (0LL))) >= (min((var_10), (((/* implicit */long long int) arr_4 [i_1] [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) min((arr_0 [i_1]), (4290772993U)));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((var_2) ? (((var_0) >> (((((/* implicit */int) arr_5 [i_1])) - (10809))))) : (((/* implicit */long long int) ((int) ((3178001621U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80)))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) (-(-1LL))))))) : (((/* implicit */int) var_4))));
    }
    var_12 = ((/* implicit */unsigned short) 0LL);
}
