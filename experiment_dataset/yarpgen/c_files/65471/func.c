/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65471
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) ((unsigned char) 505233531U));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)108)) >> (((7200418351386525153ULL) - (7200418351386525138ULL))))));
                            var_12 = ((var_4) >> (((max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0])), ((+(1213480610U))))) - (1213480574U))));
                            arr_12 [(unsigned short)13] [i_1] [(signed char)2] [5LL] = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = var_2;
}
