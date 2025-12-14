/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7410
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [5LL] = ((/* implicit */unsigned short) var_6);
                    var_20 -= ((/* implicit */unsigned short) ((543777495133099348LL) + ((-(var_8)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (-(var_0)))) && (((/* implicit */_Bool) (~(12U)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_12)))))) : (min((min((((/* implicit */unsigned int) (signed char)14)), (1959364626U))), (((/* implicit */unsigned int) var_13)))))))));
                    arr_17 [i_3] [i_4 + 1] [(unsigned short)13] = ((/* implicit */unsigned int) var_16);
                }
            } 
        } 
    } 
}
