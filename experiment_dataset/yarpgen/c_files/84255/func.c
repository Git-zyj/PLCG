/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84255
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
    var_18 = (!((_Bool)1));
    var_19 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                arr_5 [i_0] [(unsigned char)1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_10 [i_2] [i_3] = ((/* implicit */_Bool) max((((var_6) ? (arr_9 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((var_5) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_3])))));
                var_21 = ((/* implicit */_Bool) ((((_Bool) (!(var_13)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (min((min((((/* implicit */unsigned int) arr_3 [i_2] [i_2] [i_2])), (var_16))), (((/* implicit */unsigned int) var_5))))));
                var_22 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                var_23 = ((/* implicit */short) min((((/* implicit */unsigned short) (!((_Bool)1)))), (var_15)));
                arr_11 [i_3] = ((/* implicit */unsigned char) min((((arr_0 [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17459))))), (((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) arr_0 [i_2]))))));
            }
        } 
    } 
}
