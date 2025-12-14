/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91254
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
    var_19 = (+((+((-(-1689605069224816187LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (unsigned short)58520);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)58533)) > (((/* implicit */int) (unsigned short)58539))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */unsigned int) var_17)), (var_13)))));
                                var_22 = var_3;
                                var_23 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)30558)), (var_15)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = var_5;
    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
}
