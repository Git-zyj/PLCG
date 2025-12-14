/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81216
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
    var_10 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))))), (var_6)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] [15ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) <= (((unsigned int) max((((/* implicit */unsigned long long int) var_1)), (var_6))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_4 [(unsigned char)15] [3ULL] [i_2])) % (var_6))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_2))))))) ? (((((long long int) var_5)) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1])))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_0)))))) / (((arr_5 [i_0] [i_1] [i_0]) - (var_2)))))))));
                                var_12 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11288)) ? (((/* implicit */int) (short)13905)) : (((((/* implicit */_Bool) (short)-13896)) ? (((/* implicit */int) (short)13932)) : (((/* implicit */int) (unsigned short)65535))))));
                                arr_15 [i_0] [i_0] &= max(((+(((/* implicit */int) arr_14 [i_3] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))), ((~(((/* implicit */int) arr_14 [i_1] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((min((var_6), (min((var_6), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [(unsigned char)23] [(unsigned char)23] [i_0] = ((/* implicit */unsigned char) ((long long int) (short)13910));
                /* LoopSeq 1 */
                for (int i_5 = 4; i_5 < 24; i_5 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((min((arr_19 [i_1] [i_5 - 4] [i_5 - 3] [i_5]), (((/* implicit */unsigned long long int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (arr_4 [i_5 - 2] [i_5] [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), ((short)13905)))))))))))));
                    var_14 *= ((/* implicit */unsigned char) (-(((min((arr_5 [i_0] [i_0] [i_0]), (var_2))) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    arr_21 [i_5 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) var_5);
                    var_15 = ((/* implicit */_Bool) var_6);
                    var_16 ^= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_3)))))));
                }
            }
        } 
    } 
}
