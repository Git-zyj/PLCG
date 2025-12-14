/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80667
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
    var_16 = min((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (0U)))), (((/* implicit */long long int) var_4)));
    var_17 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((long long int) var_3))) ? ((~(6835483034059877126LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [0LL] [i_1 + 2] [i_1 - 2])))))))));
                                arr_17 [i_0] [i_1] [i_0] [(signed char)7] [i_1] [i_4] = ((/* implicit */long long int) var_15);
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) 4294967295U);
                                var_19 = ((/* implicit */unsigned long long int) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42703)))));
                            }
                        } 
                    } 
                    var_20 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) min((((((((/* implicit */int) arr_9 [i_1 + 1] [i_2 + 1] [i_2 + 1])) + (2147483647))) >> (((arr_7 [i_0] [i_1 + 2] [i_2 + 1] [i_1]) + (7334881720758346668LL))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4)))))))))) : (((/* implicit */unsigned char) min((((((((/* implicit */int) arr_9 [i_1 + 1] [i_2 + 1] [i_2 + 1])) + (2147483647))) >> (((((arr_7 [i_0] [i_1 + 2] [i_2 + 1] [i_1]) + (7334881720758346668LL))) - (539955503815202706LL))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_5);
    var_22 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) var_4))))));
}
