/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76562
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
    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 3957362566U)) ? (-613576142) : (((/* implicit */int) (unsigned char)223))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35)))))) & (var_1)))) ? (((/* implicit */long long int) 613576141)) : (((-961198951755031176LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3599)))))));
    var_21 |= ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = (~(((/* implicit */int) arr_4 [i_0] [i_2] [i_2] [i_2])));
                    var_22 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) var_18)) : (min((613576118), (((/* implicit */int) (unsigned char)32)))))));
                }
            } 
        } 
    } 
}
