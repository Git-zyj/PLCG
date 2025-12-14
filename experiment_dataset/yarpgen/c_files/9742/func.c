/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9742
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
    var_10 = ((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned long long int) var_6))));
    var_11 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_0])));
        var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
        var_14 += ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_15 ^= ((/* implicit */signed char) (-(-1261039747)));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 ^= arr_2 [i_2] [i_1];
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((max(((!(((/* implicit */_Bool) arr_6 [i_1] [1ULL] [i_1])))), (((((/* implicit */_Bool) 1261039723)) || (((/* implicit */_Bool) -1261039747)))))) && (((/* implicit */_Bool) (short)0))));
                                arr_11 [i_1] [i_4] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_2 [i_2] [(signed char)11]))));
                                arr_12 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)61))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_1 [i_0] [(unsigned char)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_4] [i_1 + 1] [i_0])))))))) ? (min((((/* implicit */long long int) (unsigned short)10)), (arr_1 [i_3] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_1] [(short)6])))))));
                                arr_13 [6LL] [6LL] [6LL] [i_4] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_4] [i_1 + 2] [i_2] [(unsigned short)4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (var_3))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_1] [i_3] [i_4])), ((short)(-32767 - 1))))))))) * (((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) (((~((~(var_3))))) ^ (((/* implicit */unsigned long long int) (~((~(arr_2 [i_0] [i_2]))))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_19 += ((/* implicit */int) ((unsigned char) ((arr_16 [i_5]) / (((/* implicit */int) arr_0 [i_5])))));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) ? (arr_4 [i_5] [i_5] [(unsigned char)4]) : (arr_4 [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5]))) : (arr_8 [i_5] [(unsigned short)14] [i_5] [(unsigned short)14])))));
    }
}
