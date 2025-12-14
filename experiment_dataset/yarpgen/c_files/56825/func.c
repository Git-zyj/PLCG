/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56825
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((unsigned short) var_3))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned int) (-(((int) var_12)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned short i_3 = 4; i_3 < 9; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) -884237055)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20858))) : (arr_6 [i_3 - 4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_5))));
                    var_18 = max((arr_2 [i_4]), (arr_1 [i_3] [i_3]));
                    arr_13 [i_3] = ((/* implicit */unsigned char) arr_11 [i_3]);
                    var_19 = ((/* implicit */signed char) ((_Bool) ((_Bool) var_8)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_7))));
}
