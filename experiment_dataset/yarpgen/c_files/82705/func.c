/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82705
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */signed char) (-((~(((/* implicit */int) var_5))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_2 [i_1]))))) ? (min((((/* implicit */int) (_Bool)1)), (arr_0 [i_0]))) : (((/* implicit */int) arr_1 [i_1]))))) && (((_Bool) arr_2 [i_1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((/* implicit */short) ((var_2) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)51040)) : (((/* implicit */int) var_10))))))), (var_16)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                arr_13 [i_2] = ((/* implicit */unsigned char) (-(min(((+(((/* implicit */int) arr_11 [i_2 - 2])))), (((/* implicit */int) ((_Bool) arr_8 [i_2])))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_7 [i_3] [i_3]))));
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned char) ((max(((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) (short)-1))))))) + (((/* implicit */int) ((((/* implicit */_Bool) min((var_13), (var_2)))) || (((/* implicit */_Bool) ((short) var_0))))))));
}
