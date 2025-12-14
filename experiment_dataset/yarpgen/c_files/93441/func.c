/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93441
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((-1207761475) + (2147483647))) << (((((/* implicit */int) arr_1 [18LL])) - (169))))) << (((((arr_2 [i_0]) + (1396776995))) - (21))))))));
                var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17463029961521563248ULL)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (arr_2 [i_0]) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0]))))));
                var_16 = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max(((~(((((/* implicit */int) var_7)) & (((/* implicit */int) var_1)))))), (((/* implicit */int) var_11))));
}
