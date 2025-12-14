/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57102
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 *= (signed char)17;
                    var_14 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_16 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) max((var_3), (((/* implicit */unsigned short) (signed char)-18)))))), (((((/* implicit */int) arr_13 [i_3])) - (((/* implicit */int) ((unsigned short) arr_0 [i_4])))))));
                var_15 = ((/* implicit */short) arr_12 [i_4] [i_3] [(unsigned short)7]);
            }
        } 
    } 
}
