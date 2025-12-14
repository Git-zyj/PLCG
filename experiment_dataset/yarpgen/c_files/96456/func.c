/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96456
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (signed char)-94))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-1)))))))));
                    var_20 = ((/* implicit */short) 7497545304700713906LL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) var_11))));
}
