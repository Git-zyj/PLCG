/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73813
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
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)32873)) > (((/* implicit */int) (unsigned short)20828))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)131)) >= (((/* implicit */int) (unsigned char)42))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))))), (arr_4 [i_0])))) ? ((-((+(((/* implicit */int) (unsigned short)14766)))))) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (unsigned short)50769))))));
                    var_20 += ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
}
