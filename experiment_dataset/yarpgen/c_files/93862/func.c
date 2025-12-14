/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93862
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
    var_17 &= var_11;
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (-(((arr_5 [i_0] [i_1]) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43247)) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (short)4982)))))))));
                arr_7 [(unsigned short)11] [5U] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((arr_4 [i_0] [i_0] [i_1]) >> (((arr_4 [i_0] [i_1] [i_1]) - (363936557U))))) < (min((((/* implicit */unsigned int) (short)(-32767 - 1))), (446906642U))))));
                var_19 = (-(min((((/* implicit */unsigned int) arr_3 [i_0])), (arr_4 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
