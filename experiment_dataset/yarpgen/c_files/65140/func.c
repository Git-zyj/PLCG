/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65140
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((((/* implicit */long long int) var_0)) - (3800083748448977605LL))), (((((/* implicit */long long int) 4026531840U)) + (-3800083748448977613LL))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) var_3)) ? (5984652335329766375ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [3ULL])))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 5984652335329766375ULL))));
                    var_18 = arr_4 [i_0] [5U] [i_2];
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned long long int) ((short) var_0));
}
