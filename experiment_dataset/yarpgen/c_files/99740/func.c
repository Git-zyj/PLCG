/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99740
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (var_5)));
                    var_14 += ((/* implicit */long long int) ((var_2) == (var_3)));
                    arr_7 [i_0] [i_1] [i_2 - 2] = (~(((long long int) var_8)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((+(-8386363675095758393LL))) - (((((/* implicit */_Bool) -9223372036854775781LL)) ? (var_6) : (var_3))))))));
    var_16 = (+(var_0));
}
