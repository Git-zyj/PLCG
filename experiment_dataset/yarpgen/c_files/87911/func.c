/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87911
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = max((((((/* implicit */_Bool) var_6)) ? (arr_6 [i_2 - 2] [i_1] [i_2] [i_2]) : (arr_6 [i_2 - 2] [i_1] [i_2] [i_0]))), ((+(var_1))));
                    arr_7 [i_2 - 1] [i_2] [i_0] [10] = (i_2 % 2 == zero) ? (((min((arr_6 [i_0] [i_2 + 2] [i_2] [i_1]), (arr_6 [i_0] [i_2 + 2] [i_2] [7]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_11))))))))) : (((((min((arr_6 [i_0] [i_2 + 2] [i_2] [i_1]), (arr_6 [i_0] [i_2 + 2] [i_2] [7]))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_11)))))))));
                    arr_8 [i_2] [i_1] [i_2] = (+(((/* implicit */int) var_6)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_9);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((signed char) -2147483646)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((/* implicit */int) var_5);
}
