/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68993
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
    var_14 = ((/* implicit */unsigned char) (-(var_13)));
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_16 = 1897136983;
                    var_17 = arr_3 [i_2] [i_1];
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_5 [i_2 - 1] [i_0 - 1])))) ? (max((((int) (unsigned char)196)), (((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned char)196)) - (176))))))) : (((((/* implicit */int) (unsigned char)43)) & (((/* implicit */int) (unsigned char)196)))))))));
                }
            } 
        } 
    } 
}
