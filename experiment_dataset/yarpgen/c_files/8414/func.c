/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8414
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
    var_13 = ((/* implicit */unsigned int) (short)-28115);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [(short)4] [i_1] [17LL] [i_1] = ((/* implicit */signed char) ((min((min((arr_4 [8] [i_1]), (arr_4 [i_1] [(signed char)6]))), (((/* implicit */long long int) arr_3 [i_0] [2U] [i_2])))) > (((/* implicit */long long int) 3410480255U))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] = ((/* implicit */int) (signed char)127);
                                var_14 = ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) arr_8 [i_3] [i_3 + 2] [i_3 + 2] [15LL])));
                                arr_14 [i_3] [i_2] [i_3] = ((/* implicit */long long int) arr_11 [(short)4] [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 |= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((3410480257U), (4047411012U)))), (max((((/* implicit */unsigned long long int) var_8)), (9223371968135299072ULL)))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
}
