/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91221
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
    var_20 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_19))));
                                var_22 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_8 [i_0] [i_0] [4] [i_4 + 1]))))));
                                var_23 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) 11247986362949596610ULL)) ? (((/* implicit */long long int) 11)) : (arr_11 [i_0] [i_1] [i_1] [i_3] [i_1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (long long int i_7 = 4; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_0] [i_1] [i_5] [i_6] [i_6]))));
                                var_25 = ((/* implicit */unsigned long long int) (unsigned short)47692);
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */signed char) (+(min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)47703)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_5);
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_2) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47665)) + (((/* implicit */int) var_13)))))))) / (((long long int) ((((/* implicit */int) var_19)) & (((/* implicit */int) var_1)))))));
}
