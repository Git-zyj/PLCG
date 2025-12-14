/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61629
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
    var_17 -= ((/* implicit */signed char) var_10);
    var_18 = ((/* implicit */int) var_0);
    var_19 &= ((/* implicit */signed char) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_15)), ((-(((/* implicit */int) ((16777215ULL) == (((/* implicit */unsigned long long int) 992966281U)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_13);
                                arr_17 [i_2] [i_2] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-61))))), (var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
