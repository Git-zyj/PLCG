/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80467
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((836028019) << (((((/* implicit */int) (unsigned char)125)) - (124)))))), (min((arr_6 [i_1 + 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0 + 2]))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) ^ (max((((/* implicit */unsigned long long int) var_14)), (var_1)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9223372036854775802LL))))));
                                var_19 += ((/* implicit */unsigned char) (((-(((unsigned int) -9223372036854775804LL)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                    arr_12 [i_0 - 2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_6 [i_0 - 1] [i_0]) : (arr_6 [i_0 - 1] [i_0]))));
                    arr_13 [i_0] [i_1] [i_2] = arr_0 [i_0 + 2] [i_0 + 2];
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) var_12))))) < (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) 4294967284U)))))))));
    var_21 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_14))));
}
