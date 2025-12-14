/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60859
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 342529900U))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_9 [(short)9] [i_1 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1540391784U)))))));
                            }
                        } 
                    } 
                } 
                var_20 -= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_1 - 1])) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1 - 2] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((int) 9223372036854775807LL))) : (min((arr_2 [i_0 - 1]), (((/* implicit */unsigned long long int) 5622653413846527556LL))))));
                    var_22 = (short)-30632;
                    var_23 *= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-26179)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (511ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16156)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-15680), (((/* implicit */short) var_15))))))))) : ((~(((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5]))))))));
                    arr_16 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) && (((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15004)) ? (((/* implicit */unsigned long long int) 3749959820173326879LL)) : (arr_1 [i_0 + 1])))) ? (max((((/* implicit */unsigned long long int) 892691630)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) var_15)))))));
                }
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 1]))))) ? (((/* implicit */int) max((arr_3 [i_1 - 3] [i_0 - 1]), (arr_3 [i_1 - 3] [i_0 - 1])))) : (((/* implicit */int) min((arr_3 [i_1 - 2] [i_0 - 1]), (arr_3 [i_1 - 3] [i_0 + 1])))));
                    var_26 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_6 - 1] [i_6 - 1])) ? (arr_7 [i_0 + 1] [i_6 - 1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)1))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_7 [i_0 + 1] [i_6 - 1] [i_6 - 1])))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_8)))));
    var_28 = (((~(((((/* implicit */_Bool) (short)28539)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (short)-329)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (short)22254))))));
    var_29 = ((/* implicit */unsigned long long int) ((unsigned char) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) (signed char)89)))));
}
