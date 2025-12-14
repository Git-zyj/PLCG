/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9468
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((max((max((1931534551), (((/* implicit */int) (unsigned short)24195)))), (557599698))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)24195)) : (((/* implicit */int) arr_2 [i_1]))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) -646553818)) ? (-1931534552) : (1524224184))), (((/* implicit */int) ((_Bool) var_6))))), (((/* implicit */int) arr_5 [i_0] [8] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_8 [i_3]))));
                var_17 = -557599699;
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_4);
}
