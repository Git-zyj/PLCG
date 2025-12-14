/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95709
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
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_0 [i_1 - 1]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) min((arr_4 [i_1]), (arr_0 [i_0]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)1))))) / ((~(4014816241U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_1 + 1])))))));
                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [i_0]))))))) ? (((/* implicit */int) ((signed char) arr_0 [i_1 + 1]))) : ((~(((/* implicit */int) arr_3 [i_1 + 1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) var_18)))))));
    var_22 -= ((/* implicit */signed char) (+(var_17)));
    var_23 = var_8;
}
