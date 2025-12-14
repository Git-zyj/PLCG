/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83383
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 &= ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) (+((+(var_0)))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_6))));
                            var_21 = (-(((long long int) (-(9223372036854775807LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) (unsigned short)64703);
    var_23 = ((/* implicit */short) var_12);
}
