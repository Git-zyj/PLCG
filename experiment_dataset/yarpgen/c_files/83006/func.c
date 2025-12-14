/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83006
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = arr_1 [i_0] [i_1];
                var_15 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                arr_7 [i_1] [i_1] |= arr_3 [(unsigned char)8] [i_1] [i_0];
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+((+(((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (+(((var_2) << (((((/* implicit */int) (unsigned char)238)) - (219)))))));
                var_18 = ((/* implicit */unsigned char) (-((+(var_4)))));
                var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3391079865U)) ? (-1258002796) : (-1258002799))), (1258002796)));
            }
        } 
    } 
}
