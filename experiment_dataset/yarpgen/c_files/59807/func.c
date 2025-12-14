/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59807
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */unsigned int) ((0U) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                            arr_8 [i_0] = ((/* implicit */unsigned long long int) min((min((0U), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-1)), (-966134903)))))), (var_7)));
                        }
                    } 
                } 
                var_17 += 12546959114009646312ULL;
                var_18 = max((((/* implicit */int) (short)5)), ((~(-313161614))));
                var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) min((4068546553U), (((/* implicit */unsigned int) (short)32767))))) ? (max((arr_1 [i_1]), (18446744073709551615ULL))) : (max((((/* implicit */unsigned long long int) 234881024U)), (var_12))))), (((/* implicit */unsigned long long int) -1552202920))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) max((var_4), ((short)-2)))), (max((((/* implicit */unsigned long long int) 4U)), (5899784959699905285ULL)))))));
    var_21 &= ((/* implicit */int) max(((-(((((/* implicit */_Bool) var_3)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 0U)))))), (((/* implicit */unsigned long long int) var_15))));
}
