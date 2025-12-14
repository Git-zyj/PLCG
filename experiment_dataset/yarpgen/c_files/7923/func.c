/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7923
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
    var_18 = ((/* implicit */signed char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = var_7;
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) max((arr_1 [i_0]), (arr_6 [i_0] [(signed char)13])))) + (((/* implicit */int) var_5)))) < (((/* implicit */int) (short)30356))));
                                var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_1)))) && (((/* implicit */_Bool) ((arr_3 [i_1] [i_2] [(_Bool)1]) << (((((/* implicit */int) (short)-30344)) + (30357)))))))))) > (((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_0 - 1])) ? (min((var_16), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)119)) + (((/* implicit */int) (short)-18111)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) : (var_4)));
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned long long int) ((max((min((var_13), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) -990623239)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (2659644056U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))))) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) var_14)))))));
}
