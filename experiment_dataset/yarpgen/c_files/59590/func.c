/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59590
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
    var_17 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */short) ((((/* implicit */long long int) 2021941622)) < (7648142925974434730LL))))));
    var_18 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 -= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((/* implicit */unsigned long long int) 7648142925974434730LL)), (771115930633917418ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-7648142925974434727LL), (((/* implicit */long long int) (_Bool)0))))) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((max((max((((/* implicit */long long int) (_Bool)1)), (arr_5 [(short)3]))), (-7648142925974434732LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))));
                    var_21 = (_Bool)1;
                    arr_8 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) <= (-1812161250))), (var_3)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_22 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) -1868376660255605482LL))));
    }
    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (unsigned int i_6 = 3; i_6 < 12; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((arr_14 [i_4 + 3] [i_4 + 3] [i_6 - 3]), (((/* implicit */unsigned short) (_Bool)1)))))));
                    arr_17 [i_4] [i_4] [i_6] [6LL] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) arr_7 [i_6 - 2] [i_6 + 1] [i_6] [i_6 - 2]))), (((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6 - 3] [i_6 - 3])) ? (((/* implicit */int) arr_14 [i_6 + 1] [i_6 + 1] [i_6])) : (((/* implicit */int) (unsigned char)134))))));
                }
            } 
        } 
        var_25 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_16)), ((unsigned char)122))))) + (((long long int) var_4))));
    }
    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)6)) ? (3438205187U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40085)) || (var_3)))))))));
}
