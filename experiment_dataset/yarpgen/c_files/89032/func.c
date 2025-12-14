/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89032
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_1 - 1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1 + 1] [i_3] [i_3] [i_3]))))));
                                arr_14 [i_0] [i_1 - 1] [i_1] [i_2] [i_0] [i_1] = var_0;
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */long long int) ((((-1LL) % (((/* implicit */long long int) ((/* implicit */int) var_5))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_8))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) max((var_12), (((_Bool) (-((-(var_3))))))));
}
