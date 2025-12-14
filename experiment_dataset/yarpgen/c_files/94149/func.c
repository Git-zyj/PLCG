/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94149
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) 1724238860U);
                var_18 = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((12971140585848871098ULL) > (12971140585848871092ULL)));
    var_20 = ((/* implicit */unsigned char) var_13);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) <= (15991299664218463635ULL))))) == (((var_12) / (((/* implicit */long long int) var_13))))))) == (((/* implicit */int) var_2))));
}
