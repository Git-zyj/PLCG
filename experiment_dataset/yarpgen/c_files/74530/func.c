/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74530
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-30)), (((((/* implicit */int) ((_Bool) (signed char)-30))) * (((/* implicit */int) max(((signed char)30), ((signed char)29))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_3] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-30)) <= (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+((-((-(((/* implicit */int) (_Bool)1))))))));
                                var_13 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (signed char)8);
    var_15 ^= ((/* implicit */_Bool) (-(var_10)));
    var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)8)))), ((+(((/* implicit */int) (_Bool)1)))))))));
}
