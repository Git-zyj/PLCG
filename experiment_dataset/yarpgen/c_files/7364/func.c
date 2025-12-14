/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7364
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
    var_15 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((2047), (((/* implicit */int) (short)-7081)))) : (((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2])) : (-656561496)))));
                        arr_10 [i_2] = ((/* implicit */unsigned char) (~(var_11)));
                        arr_11 [i_0] [i_1 + 1] [i_2] [i_2] = ((/* implicit */unsigned int) min((1073676288), (((/* implicit */int) var_2))));
                        /* LoopSeq 1 */
                        for (short i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((int) (signed char)2)));
                            var_18 = -656561503;
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_2] [i_1] [i_1] [i_5])) : (((/* implicit */int) var_3))))), (min((((((/* implicit */unsigned long long int) -656561477)) / (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 656561451)) ? (var_6) : (arr_3 [i_0] [i_0]))))))));
                        arr_17 [i_0] [i_1 - 2] [i_5] [i_5] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_12)), (var_10))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))));
                    }
                    arr_18 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_14))) ? (min((((((/* implicit */_Bool) arr_6 [i_2] [i_2] [0U] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    var_19 = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    } 
}
