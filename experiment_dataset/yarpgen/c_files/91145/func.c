/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91145
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [3] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [(signed char)12] [i_2] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                                var_17 *= ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_16);
    var_19 = ((/* implicit */int) ((min((((((/* implicit */_Bool) -750036647)) ? (var_8) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((var_3) << (((((/* implicit */int) var_7)) + (97))))))) == (min((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) var_2)), (var_15)))))));
}
