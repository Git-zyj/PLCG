/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/841
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
    var_20 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [1U] [i_0] [i_0] = (_Bool)1;
                    var_21 = (-(9117147905242692781ULL));
                    arr_10 [i_0] = 1685702610;
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) var_0))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) 7566601022817373678ULL);
                arr_20 [i_4] [i_3] [i_4 + 3] = ((/* implicit */unsigned char) var_11);
                var_23 = ((((/* implicit */_Bool) (unsigned char)210)) ? ((-((-(var_17))))) : (-8218765126224237395LL));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_17);
}
