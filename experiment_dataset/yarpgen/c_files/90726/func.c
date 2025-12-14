/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90726
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4 - 1] [i_0] [i_1] = var_5;
                                var_20 += ((unsigned long long int) 13153396892488089972ULL);
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_0] [i_0]))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_18 [i_0] [i_1] [i_0] [i_5] [i_6]))) ? ((~(17ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2 + 1])) || (((/* implicit */_Bool) ((signed char) var_7)))))))));
                                var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) | (25ULL))));
                                var_25 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 562949953421311LL)) ? ((~(18446744073709551615ULL))) : (((18446744073709551598ULL) >> (((arr_4 [i_2] [15LL]) + (3650532346725611821LL)))))))));
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~((~(((/* implicit */int) var_19)))))))));
                            }
                        } 
                    } 
                    var_27 = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_13) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_1 + 1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_16)))) > (((int) 17385112094797669781ULL)))))) : (((unsigned long long int) arr_16 [i_0] [4ULL] [i_1 + 1] [i_0] [i_1])));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((arr_5 [i_2 + 1]), (((/* implicit */signed char) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_15 [i_1] [i_1] [i_1] [i_0]) << (((16364882989264146421ULL) - (16364882989264146421ULL)))))) > (max((((/* implicit */unsigned long long int) arr_2 [6])), (var_18))))))) : ((+((+(var_8)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            {
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7888397948004928113ULL)) ? (((/* implicit */int) (unsigned short)40117)) : (((/* implicit */int) (unsigned short)60607)))) << (((((((/* implicit */_Bool) arr_20 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((long long int) var_12))) : (arr_24 [i_7 + 2]))) - (15654414450529300689ULL))))))));
                var_30 -= ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((int) arr_22 [i_8]))));
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~(var_8))))));
    var_32 ^= ((/* implicit */unsigned long long int) var_6);
}
