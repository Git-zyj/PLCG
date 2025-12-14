/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80553
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
    var_12 = ((/* implicit */unsigned char) ((unsigned short) min((var_1), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)146)) >= (((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned short)8496)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) var_5)))) / (((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)109))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((max((((/* implicit */unsigned short) var_5)), (var_4))), (((/* implicit */unsigned short) arr_6 [i_1] [(unsigned char)4])))), (var_8)));
                }
            } 
        } 
    } 
}
