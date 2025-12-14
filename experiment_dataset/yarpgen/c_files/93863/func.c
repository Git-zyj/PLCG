/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93863
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
    var_11 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (((long long int) 6044256746708294396LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1 - 3] = ((/* implicit */unsigned char) max(((-(11698161617330700215ULL))), (9505164690509889044ULL)));
                var_12 = ((/* implicit */long long int) max((max((6748582456378851407ULL), (11698161617330700199ULL))), (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) max((var_13), (arr_2 [i_2])));
                            var_14 = ((/* implicit */long long int) var_0);
                            var_15 = ((/* implicit */signed char) 24LL);
                        }
                    } 
                } 
            }
        } 
    } 
}
