/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84813
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [1] = (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */unsigned int) arr_1 [i_0])))));
                arr_5 [i_0] = ((/* implicit */unsigned int) 710040299435074561LL);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 24; i_2 += 1) 
                {
                    var_13 = var_3;
                    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [16LL])), (arr_7 [i_0])))) ? ((~(arr_2 [i_0] [i_2]))) : (((/* implicit */int) ((unsigned short) var_2))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0] [(unsigned short)22]), (var_7)))))))));
                    arr_10 [i_0] [(unsigned char)5] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) var_0)), (((((arr_2 [i_2 + 1] [i_2 + 1]) + (2147483647))) << (((((arr_2 [i_2 + 1] [i_2 - 1]) + (751548245))) - (7)))))));
                    arr_11 [i_0] [(unsigned char)3] [i_2] [i_1] &= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    var_15 *= ((/* implicit */unsigned int) var_3);
                    var_16 = var_2;
                }
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    arr_17 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) var_8);
                    arr_18 [i_4] [(unsigned char)19] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1139993825U)))))));
                    arr_19 [i_4] [i_1] = ((/* implicit */unsigned int) ((long long int) var_6));
                }
                var_17 *= ((/* implicit */unsigned char) ((9223372036854775807LL) == (((/* implicit */long long int) 3154973471U))));
                var_18 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6037))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)41)))))))), (arr_7 [i_0])));
            }
        } 
    } 
    var_19 = var_6;
}
