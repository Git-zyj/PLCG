/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83342
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [2LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (min((var_1), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))))));
                    arr_7 [i_2 + 2] [i_1] [i_0] [3U] = ((/* implicit */signed char) min((max((((/* implicit */int) var_6)), ((-(((/* implicit */int) var_2)))))), (min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) (unsigned short)0))))))));
                    var_11 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2 - 2]);
                    arr_8 [i_0] [i_1] [i_2 + 3] [i_2] = ((/* implicit */long long int) arr_2 [i_0] [i_2 - 1]);
                    arr_9 [i_0] = ((/* implicit */unsigned short) arr_4 [i_2 + 3] [i_2 - 2] [i_2 - 2]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) 18342094895520151111ULL);
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_2))));
}
