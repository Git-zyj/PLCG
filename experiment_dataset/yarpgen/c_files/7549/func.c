/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7549
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((arr_3 [i_0 - 1] [i_1] [i_0]), (var_3))), (((/* implicit */unsigned short) var_10))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0 - 1])))) : ((+((+(-867517767)))))));
                var_13 = ((/* implicit */unsigned long long int) ((signed char) ((signed char) var_4)));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((short) ((unsigned short) ((unsigned char) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            {
                var_15 ^= ((/* implicit */int) ((short) (signed char)(-127 - 1)));
                var_16 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_4 [i_2] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_2] [i_3] [i_2]))));
            }
        } 
    } 
}
