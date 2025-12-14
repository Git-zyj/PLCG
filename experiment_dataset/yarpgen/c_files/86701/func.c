/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86701
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = (i_0 % 2 == zero) ? (((/* implicit */short) max((((/* implicit */unsigned int) ((((((((/* implicit */int) arr_5 [i_2 + 1] [i_0] [i_0])) - (((/* implicit */int) var_12)))) + (2147483647))) << (((((/* implicit */int) arr_7 [(unsigned char)12] [i_1])) - (101)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (arr_8 [(_Bool)1] [i_1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((arr_6 [i_0] [i_1] [i_2] [i_0]) % (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((4284604815U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))))))) : (((/* implicit */short) max((((/* implicit */unsigned int) ((((((((((/* implicit */int) arr_5 [i_2 + 1] [i_0] [i_0])) - (((/* implicit */int) var_12)))) - (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_7 [(unsigned char)12] [i_1])) - (101)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (arr_8 [(_Bool)1] [i_1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((arr_6 [i_0] [i_1] [i_2] [i_0]) % (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((4284604815U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(max((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (short)-30538))))), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_0 [(short)14]))))))));
                    var_18 += ((/* implicit */unsigned int) ((signed char) arr_0 [(short)2]));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_7 [i_0] [i_3]))) <= (((/* implicit */int) (unsigned short)46504))));
                    }
                }
            } 
        } 
    } 
    var_21 -= ((((((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))))) << (((((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19031))))) - (1139066757U))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14781))));
    var_22 -= ((/* implicit */unsigned short) var_4);
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_9))));
}
