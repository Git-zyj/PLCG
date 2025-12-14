/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55679
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 + 2] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) (~(1622433473U))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) 2672533816U)), (676297136510779893LL)));
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_2))));
                }
            } 
        } 
    } 
    var_12 = var_8;
}
