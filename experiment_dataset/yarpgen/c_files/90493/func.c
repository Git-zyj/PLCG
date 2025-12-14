/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90493
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
    var_15 = var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            var_17 = ((/* implicit */int) var_6);
                            var_18 = ((/* implicit */int) min((4398046511096LL), (((/* implicit */long long int) (signed char)-1))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((unsigned int) 2126400152));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_11);
}
