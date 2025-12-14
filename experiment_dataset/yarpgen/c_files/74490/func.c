/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74490
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
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) 109549087U);
                arr_4 [(signed char)9] [i_1] [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)102)), (4185418209U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 += ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_9 [i_2] [(signed char)11] [i_3] [i_4 - 1])))) == (((/* implicit */int) (short)0)))))));
                    arr_12 [(short)8] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) ((unsigned char) (!(arr_2 [i_3 - 1]))));
                }
            } 
        } 
    } 
}
