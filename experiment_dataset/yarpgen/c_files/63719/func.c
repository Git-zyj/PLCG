/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63719
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
    var_11 = var_1;
    var_12 = ((/* implicit */unsigned char) ((1431811174U) < (((/* implicit */unsigned int) -1829895088))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)121)))))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 - 3] [i_0 + 3])) < (arr_0 [i_0])))));
                    arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)3505);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_7)))) ? ((~(-24827759))) : (((/* implicit */int) ((_Bool) (~(arr_8 [i_3])))))));
                var_14 ^= ((/* implicit */int) (+(var_1)));
            }
        } 
    } 
}
