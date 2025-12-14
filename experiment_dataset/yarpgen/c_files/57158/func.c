/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57158
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
    var_20 ^= var_13;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [11] [11] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */long long int) -1002440198)), (35184372088831LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) + (var_1)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (var_5))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */int) max((max((-35184372088820LL), (((/* implicit */long long int) var_13)))), (min((((((/* implicit */_Bool) -35184372088831LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (var_11)))));
                    arr_9 [(signed char)16] [i_1] = ((/* implicit */unsigned long long int) 35184372088825LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (int i_6 = 3; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24775))))), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65532)))))));
                            arr_19 [i_3] [i_4] [i_4] [20ULL] [i_6] [i_6] = ((/* implicit */signed char) var_7);
                            var_22 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_18) : (((/* implicit */unsigned long long int) 36028797018963968LL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -35184372088831LL)))) : (((var_11) / (((/* implicit */long long int) var_16))))));
                var_24 = ((/* implicit */_Bool) -6304214793920435427LL);
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_19);
    var_26 = var_7;
}
