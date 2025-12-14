/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97200
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
    var_20 = ((/* implicit */unsigned int) var_10);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (max((var_19), (((/* implicit */long long int) var_12))))));
    var_22 = ((/* implicit */signed char) var_19);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_16 [i_2] = ((/* implicit */unsigned int) min((((arr_15 [i_0] [i_0] [i_0] [i_2] [i_0]) > (arr_15 [i_0] [i_0] [i_0] [i_2] [18U]))), ((!(((/* implicit */_Bool) (unsigned char)18))))));
                                var_23 = ((/* implicit */signed char) arr_0 [i_1]);
                                var_24 = ((/* implicit */_Bool) arr_8 [i_0]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)101))))));
                    var_26 = ((/* implicit */unsigned short) (unsigned char)83);
                }
            } 
        } 
    } 
}
