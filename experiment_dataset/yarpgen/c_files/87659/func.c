/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87659
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
    var_19 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) arr_2 [i_0] [i_1])))))) >> (((18446744073709551615ULL) - (18446744073709551594ULL)))));
                arr_4 [i_1] = ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
                arr_5 [i_1] [i_1 + 1] = ((/* implicit */long long int) arr_3 [i_1] [i_0]);
                var_21 = (!(((/* implicit */_Bool) min(((-(-7574499139868120422LL))), (((/* implicit */long long int) arr_1 [i_1 - 1] [i_0 - 2]))))));
                var_22 &= ((/* implicit */signed char) var_8);
            }
        } 
    } 
}
