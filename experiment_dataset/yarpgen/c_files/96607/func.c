/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96607
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_14), (var_10)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (var_11)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
                    var_20 -= ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)248)), (-2009917958)));
                    var_21 = ((unsigned char) var_6);
                    var_22 += ((/* implicit */signed char) var_18);
                    var_23 &= ((/* implicit */signed char) (unsigned char)5);
                }
            } 
        } 
    } 
}
