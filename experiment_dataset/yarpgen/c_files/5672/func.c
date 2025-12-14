/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5672
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_8));
                arr_8 [i_1] [4] [i_0] |= ((/* implicit */unsigned short) -1036328659);
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [(unsigned short)15] [i_3] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(var_8))), ((-(var_7)))))) ? (((unsigned long long int) arr_5 [i_0] [i_0] [i_0])) : (var_7)));
                                var_14 = ((/* implicit */unsigned short) max((arr_12 [i_0]), (arr_0 [i_3] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_13);
}
