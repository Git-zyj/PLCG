/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94210
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) 2857459288U);
                    var_18 = arr_5 [i_0] [i_1] [i_1];
                    var_19 &= ((/* implicit */unsigned short) (~((((-(var_5))) ^ (((/* implicit */unsigned long long int) var_0))))));
                    var_20 += var_1;
                    var_21 = ((/* implicit */unsigned int) ((long long int) (unsigned char)15));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_12);
    var_23 |= ((/* implicit */int) var_1);
    var_24 *= ((/* implicit */unsigned int) min(((unsigned char)240), (((/* implicit */unsigned char) (signed char)114))));
    var_25 = ((/* implicit */signed char) min((var_5), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)47785))))) * (max((((/* implicit */unsigned long long int) 6231860969547243219LL)), (10222328892096189621ULL)))))));
}
