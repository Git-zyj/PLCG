/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60058
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) var_5)), (8971682702433841247ULL))), ((-(8971682702433841247ULL))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)0)))))));
        var_12 = ((/* implicit */_Bool) min((var_12), ((!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 359021106)) ? (9475061371275710369ULL) : (((/* implicit */unsigned long long int) 1703701990)))))))))));
    }
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        for (int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) 1703701990);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) 847595126U);
                            var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) 1703701990)) ? (9475061371275710378ULL) : (((/* implicit */unsigned long long int) var_8))))));
                            arr_16 [i_4] [13] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_3])), (min((((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_2 + 1])), (((((/* implicit */_Bool) 1537922410694447832LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13793511394023241479ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
