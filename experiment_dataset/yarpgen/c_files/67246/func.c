/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67246
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1])))))))));
                var_21 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_22 ^= var_15;
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            {
                arr_11 [i_3] [(unsigned char)2] &= ((/* implicit */_Bool) ((unsigned char) min((arr_7 [i_2]), ((!(((/* implicit */_Bool) 0U)))))));
                arr_12 [i_3] [i_3] |= ((arr_6 [i_3]) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_7 [i_2]) && (((/* implicit */_Bool) var_2)))))))));
                var_23 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)201)))));
            }
        } 
    } 
}
