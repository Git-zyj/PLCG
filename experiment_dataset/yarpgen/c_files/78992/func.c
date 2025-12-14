/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78992
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
    var_15 = ((/* implicit */int) ((unsigned long long int) (~(var_0))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1956649849)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_13)))) <= (min((((/* implicit */long long int) (signed char)31)), (var_12))))))) : (var_10)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [8] = ((/* implicit */signed char) ((_Bool) ((int) var_4)));
                                arr_17 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) arr_5 [i_0]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) min((var_17), ((_Bool)1)));
                }
            } 
        } 
    } 
}
