/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99111
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
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6846))) : (4294967295U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))))) >> (((((((/* implicit */_Bool) 288230375614840832ULL)) ? (((/* implicit */unsigned int) 1174864547)) : (2000456429U))) - (1174864517U)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(16760832ULL)))) ? (((/* implicit */unsigned int) -1930465530)) : (1U)));
                                arr_14 [i_4] [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)19208)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1697676520U)))))) : (1678929839U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
