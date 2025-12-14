/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70022
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 &= ((/* implicit */short) 1099066473U);
                    var_14 = ((/* implicit */_Bool) (signed char)-120);
                    var_15 = ((/* implicit */unsigned int) (short)999);
                    arr_9 [i_1] [i_1] [i_1] = 2540316051258265861LL;
                    var_16 -= ((/* implicit */unsigned int) (signed char)127);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) (signed char)-115);
    var_18 = ((/* implicit */unsigned char) 8485489213782843553LL);
    var_19 |= -4922737939998965969LL;
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) -3387883377357591270LL))));
}
