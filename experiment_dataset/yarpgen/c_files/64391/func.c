/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64391
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
    var_20 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_0))))))));
                    arr_7 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)4)) && (((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) min((var_3), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2] [(unsigned char)0])) || (((/* implicit */_Bool) arr_6 [i_0] [(signed char)12] [i_2] [(signed char)12]))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_7);
}
