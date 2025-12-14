/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96935
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_11))));
                                arr_12 [(unsigned short)8] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_8);
                                arr_13 [i_0] [i_1] [i_2] [i_0] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967293U)) && (((/* implicit */_Bool) (unsigned char)133))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned char)118)), (var_4)));
                }
            } 
        } 
    } 
    var_15 = (!(((/* implicit */_Bool) var_2)));
    var_16 *= ((/* implicit */unsigned short) var_2);
    var_17 = (!(((/* implicit */_Bool) var_5)));
    var_18 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min(((signed char)36), (((/* implicit */signed char) (_Bool)0)))))))), (-3404997007099214876LL)));
}
