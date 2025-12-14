/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/631
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
    var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) (!(var_13))))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (2147483647U)))) : (9223372036854775807LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((-9223372036854775805LL), (-9223372036854775803LL))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_4 - 1]))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_4] [i_4 - 2] [i_4 + 1] [i_4])))))) ? (max((-9223372036854775807LL), (-9223372036854775790LL))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] [i_4])), ((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) var_15))))))));
                                var_22 -= ((/* implicit */unsigned short) ((6LL) < (((/* implicit */long long int) 4076509149U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? ((~(3458227620443143135ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1417196818U)) ? (3U) : (((/* implicit */unsigned int) -220340870)))))))) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_19))))) ? (((/* implicit */unsigned long long int) (-(var_8)))) : (var_9))) : (((/* implicit */unsigned long long int) max((max((9223372036854775807LL), (((/* implicit */long long int) (signed char)64)))), (((/* implicit */long long int) ((signed char) 4076509149U))))))));
}
