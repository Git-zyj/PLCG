/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5713
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
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((short) (~(((/* implicit */int) (_Bool)1))));
                var_10 = ((/* implicit */long long int) (~(((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (105)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned char)8), (var_2)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_6)))))))));
    var_12 *= ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) ((long long int) (-(((((/* implicit */_Bool) -1LL)) ? (12LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_9)))) + ((+(((/* implicit */int) var_9))))));
                arr_13 [i_3] [i_3] = ((((/* implicit */_Bool) max((5264551682466660390LL), (((/* implicit */long long int) -961550416))))) ? (((/* implicit */int) ((short) var_1))) : ((-(((/* implicit */int) ((unsigned char) var_4))))));
            }
        } 
    } 
}
