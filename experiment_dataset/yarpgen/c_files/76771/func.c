/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76771
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
    var_17 *= ((/* implicit */unsigned char) var_5);
    var_18 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2])) - (16316))))))))) ? (((((/* implicit */_Bool) ((var_10) << (((arr_4 [i_0 - 1] [i_1]) - (6296762286650858922ULL)))))) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2])) : (((/* implicit */int) var_7)))) : (max((min((arr_1 [i_0]), (arr_0 [i_0 + 3] [i_0 + 3]))), (((/* implicit */int) ((unsigned short) var_2)))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2])) - (16316))))))))) ? (((((/* implicit */_Bool) ((var_10) << (((((arr_4 [i_0 - 1] [i_1]) - (6296762286650858922ULL))) - (9125280396600960628ULL)))))) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2])) : (((/* implicit */int) var_7)))) : (max((min((arr_1 [i_0]), (arr_0 [i_0 + 3] [i_0 + 3]))), (((/* implicit */int) ((unsigned short) var_2))))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((arr_7 [i_0 + 2] [12] [i_2] [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_2 [i_0 + 3] [i_1 + 1])) - (107))))))));
                    var_21 |= ((/* implicit */long long int) ((_Bool) max((var_8), (((/* implicit */long long int) ((_Bool) arr_2 [i_2] [14]))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) (~(arr_0 [(unsigned short)4] [i_3])))) : (arr_7 [i_0] [i_1 + 1] [(unsigned short)14] [i_3])))) ? (arr_7 [i_0 - 2] [i_0 + 1] [i_2] [i_3]) : (((/* implicit */long long int) ((int) arr_6 [i_0 - 3] [i_1 + 1] [i_2])))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2]))))), (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_1 - 1])))))))));
                        var_24 = ((/* implicit */signed char) (((+(((long long int) (_Bool)1)))) * (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) / (((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [i_1])) ? (var_8) : (((/* implicit */long long int) arr_0 [i_0 - 3] [(signed char)1]))))))));
                        var_25 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [1ULL] [i_1 + 1] [1ULL]))))), (var_13)))) ? ((-(((/* implicit */int) arr_2 [i_0 - 2] [i_1 - 1])))) : (((/* implicit */int) var_16)));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (-(var_8)));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_4]))) >= (min((var_14), (((/* implicit */unsigned long long int) var_9)))))))))));
                    }
                }
            } 
        } 
    } 
}
