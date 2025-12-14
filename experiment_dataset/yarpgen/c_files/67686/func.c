/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67686
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
    var_19 |= ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (short)8367)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((var_0) || (var_0)))), (var_3))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) max(((short)-32750), (((/* implicit */short) ((var_1) && (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))))));
                    var_21 = arr_0 [i_0] [i_0];
                }
            } 
        } 
    } 
}
