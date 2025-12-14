/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83966
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((var_3) <= (((/* implicit */unsigned long long int) 9223372036854775797LL))))), (var_16)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_1 [6LL] [i_0])) > (((/* implicit */int) arr_5 [i_0] [i_1]))))))) % (min((-9223372036854775802LL), (-6LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(unsigned char)16] &= ((/* implicit */unsigned int) min(((+(arr_6 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 3] [i_2] [i_0]))) : (arr_6 [i_0] [i_1])))));
                                arr_14 [i_4] [i_3] [i_3] [(signed char)9] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) var_12);
                                arr_15 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)29209)))) == (((/* implicit */int) (unsigned char)189))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)24)) > (((/* implicit */int) (short)-32326))));
                }
            } 
        } 
    } 
}
