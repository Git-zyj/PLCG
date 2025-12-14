/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82050
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
    var_13 = var_8;
    var_14 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) (~(((1957522428U) * (((/* implicit */unsigned int) 536870910))))));
                                var_16 = ((/* implicit */int) var_12);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0 - 1] [i_0] = arr_1 [i_2];
                    arr_16 [i_0 + 1] [i_1] [i_2] [i_2 + 2] = ((unsigned int) -1524564349);
                    var_17 = ((/* implicit */long long int) ((1481351261U) & (var_12)));
                }
            } 
        } 
    } 
}
