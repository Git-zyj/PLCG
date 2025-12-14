/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62992
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
    var_12 = ((/* implicit */unsigned char) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)139), (((unsigned char) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (arr_2 [(unsigned char)18])))) && (((/* implicit */_Bool) (-(var_7))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) (unsigned char)255)), (min((var_7), (64U))))), (((/* implicit */unsigned int) var_4))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (+(arr_5 [i_0] [i_0] [i_1] [i_1]));
                }
            } 
        } 
        var_13 &= ((/* implicit */unsigned char) min((238099542U), (2334840015U)));
    }
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((min((min((var_7), (((/* implicit */unsigned int) var_6)))), (var_8))) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
}
