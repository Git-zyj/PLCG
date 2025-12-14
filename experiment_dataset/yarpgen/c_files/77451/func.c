/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77451
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
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_12)), (max((-643282965416227935LL), (((/* implicit */long long int) arr_0 [i_1]))))));
                            arr_11 [(short)11] [i_1 + 1] [(short)11] [i_2] = ((/* implicit */signed char) (unsigned char)99);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_0]))), (arr_10 [i_1] [i_1] [i_1] [8U] [i_1 - 1] [8U])));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_7);
    var_19 = ((/* implicit */unsigned char) var_11);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (3389297034U) : (((/* implicit */unsigned int) (((+(((/* implicit */int) var_3)))) << (((/* implicit */int) var_3)))))));
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_8)))))))));
}
