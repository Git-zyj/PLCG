/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65567
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
    var_13 -= (unsigned short)5365;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (~((((~(arr_2 [18LL] [i_1]))) << (((((var_6) + (7456650582091733000LL))) - (55LL)))))));
                    var_15 -= ((/* implicit */unsigned short) var_3);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (arr_3 [9LL] [i_2] [i_0])));
                                var_17 |= arr_11 [(unsigned short)8] [i_1] [i_1] [i_1] [12LL];
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_4] = ((var_2) + (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [(unsigned short)5] [i_0] [i_2] [(unsigned short)5]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [21LL] = ((/* implicit */unsigned short) max((min((9210557296228896518LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)53465))))))), (9223372036854775807LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
