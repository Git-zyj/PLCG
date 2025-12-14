/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73571
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
    var_11 = ((/* implicit */_Bool) var_9);
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((2485732408629863098ULL), (((/* implicit */unsigned long long int) var_1))))) && (((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) : (7795019983665312194ULL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25757)) ? (15961011665079688518ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_13 [i_4] [i_1] [i_1] [10U] &= ((/* implicit */_Bool) (~(min((var_4), (((/* implicit */unsigned int) arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_1]))))));
                                var_14 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2485732408629863098ULL)) && (((/* implicit */_Bool) arr_4 [i_3] [i_0] [i_0])))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((2485732408629863098ULL), (((/* implicit */unsigned long long int) var_3))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [10]);
                }
            } 
        } 
    } 
}
