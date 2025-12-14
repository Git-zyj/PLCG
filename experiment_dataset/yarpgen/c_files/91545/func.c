/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91545
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
    var_12 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)12281)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)53278)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)12265)))) : ((~(((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53254)) / (((/* implicit */int) (unsigned short)53255))))) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) & (((((/* implicit */_Bool) (+(var_7)))) ? (min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_1] [(unsigned short)5] [i_0])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))));
                var_14 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)12)))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) 18446744073709551615ULL))))))), (min((((((/* implicit */int) (unsigned char)243)) % (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))), (((((/* implicit */int) arr_1 [(signed char)4])) / (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12284)) ? (((/* implicit */int) (unsigned short)12281)) : (((/* implicit */int) arr_6 [i_2] [i_3 - 4] [i_2] [i_1]))))))))));
                                var_16 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) var_10))))), ((~(arr_11 [i_0] [i_0] [i_2 + 1] [i_3] [(signed char)5])))))));
                                var_17 = (i_4 % 2 == 0) ? (((/* implicit */unsigned short) (-(max((((arr_13 [i_4] [i_4] [i_2] [i_1] [i_4] [i_0 - 2]) >> (((arr_14 [i_0] [i_4] [i_2] [i_3] [i_4]) - (1914000854U))))), ((~(arr_5 [i_0] [i_1])))))))) : (((/* implicit */unsigned short) (-(max((((arr_13 [i_4] [i_4] [i_2] [i_1] [i_4] [i_0 - 2]) >> (((((arr_14 [i_0] [i_4] [i_2] [i_3] [i_4]) - (1914000854U))) - (3493231678U))))), ((~(arr_5 [i_0] [i_1]))))))));
                                var_18 = ((/* implicit */int) min((((((var_7) < (((/* implicit */unsigned long long int) var_9)))) ? (((((/* implicit */_Bool) arr_12 [i_4] [i_3 - 3] [i_2] [i_1] [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))) : (((((/* implicit */_Bool) (unsigned short)53252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38319))) : (var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((273509582U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53251)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned short)65533)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)12)) == (((/* implicit */int) (unsigned char)87))))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */int) (~((~(((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_1)))))));
            }
        } 
    } 
}
