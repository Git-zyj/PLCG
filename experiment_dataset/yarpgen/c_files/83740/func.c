/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83740
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_1]);
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0] [i_1])), (var_7))))))) % (arr_3 [i_0])));
                var_20 = ((/* implicit */unsigned short) (unsigned char)248);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) 14722203697451779548ULL);
}
