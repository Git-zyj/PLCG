/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85590
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
    var_17 = ((/* implicit */long long int) var_1);
    var_18 = (-(var_9));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned char)7] = (~(max((((/* implicit */int) (signed char)40)), ((~(((/* implicit */int) (signed char)64)))))));
                var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (~(-5673702211042753944LL)))) ? ((+(((/* implicit */int) (short)13028)))) : ((~(((/* implicit */int) (unsigned short)18300))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) max(((~(max((-2036372876), (((/* implicit */int) arr_0 [i_0] [i_0])))))), (max(((-(((/* implicit */int) (short)-25999)))), (2036372876)))));
            }
        } 
    } 
}
