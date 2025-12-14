/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70541
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
    var_18 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((var_15), (var_15)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) var_9)), (var_17)))))) : (min((((((/* implicit */int) (short)-31841)) | (var_4))), ((~(((/* implicit */int) var_14))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */short) min((((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((short) (~(((/* implicit */int) arr_1 [i_0]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 *= ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_11 [i_3])) % (max((var_5), (((/* implicit */long long int) arr_2 [i_4]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (263518827506338807LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) % (arr_3 [i_4] [i_3] [i_0])))) : (max((((/* implicit */long long int) var_4)), (-8909964947167128076LL))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((arr_2 [(signed char)11]) ? (-18395898036328706LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [(unsigned short)17] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))))))), (arr_1 [17]))))));
                                arr_13 [i_2] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)123)) ? (2147483647LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [4] [i_1] [i_1])))))) % (((((/* implicit */_Bool) arr_5 [(short)3] [(short)3] [i_4 + 1])) ? (arr_5 [i_0] [(short)5] [i_4 + 1]) : (arr_5 [i_0] [(_Bool)1] [i_4 + 1])))));
                                arr_14 [i_0] [(unsigned char)14] [(short)10] [16U] [i_3] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_12 [i_3] [i_1])) ? (min((arr_5 [i_0] [i_3] [(_Bool)1]), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_3] [i_4 + 1])))) : (min((var_11), (arr_8 [i_4 + 1]))))), (((/* implicit */long long int) ((arr_7 [i_4 + 1] [i_4 + 1] [i_4 + 1]) >= (arr_7 [i_4 + 1] [(_Bool)1] [i_4 + 1]))))));
                                var_22 = ((/* implicit */long long int) ((min((((/* implicit */int) arr_9 [(signed char)15] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])), ((-(((/* implicit */int) (unsigned short)6424)))))) >= (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [1LL])) % (((/* implicit */int) arr_1 [i_4 + 1]))))));
                            }
                        } 
                    } 
                    arr_15 [11LL] [i_1] = ((/* implicit */unsigned short) min((min((var_5), (min((var_5), (((/* implicit */long long int) (unsigned short)60037)))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)14))))) % (min((((/* implicit */long long int) arr_2 [(signed char)14])), (var_10)))))));
                }
            } 
        } 
    } 
}
