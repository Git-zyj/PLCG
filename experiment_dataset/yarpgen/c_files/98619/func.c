/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98619
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2])) * (((/* implicit */int) ((unsigned short) arr_1 [i_2])))));
                    var_10 = ((/* implicit */signed char) ((3714636862138459800LL) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)101))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) max((var_11), ((unsigned short)23300)));
    var_12 = ((/* implicit */short) 1035114602U);
}
