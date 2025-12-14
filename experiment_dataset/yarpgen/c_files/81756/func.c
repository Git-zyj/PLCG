/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81756
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
    var_15 = ((/* implicit */signed char) max((max((var_4), (((/* implicit */int) var_1)))), (((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) var_13)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) var_12);
                    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_4 [i_0] [i_1]) > (arr_4 [i_2] [i_1]))))));
                    var_18 = ((/* implicit */unsigned long long int) arr_6 [15] [i_1]);
                    var_19 = ((/* implicit */int) (!((!(((/* implicit */_Bool) 85029909))))));
                }
            } 
        } 
    } 
    var_20 = var_2;
}
