/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92188
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((arr_5 [i_1]) - (((/* implicit */int) arr_4 [i_0 - 4] [i_1]))))), (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-30843))))) : (max((1648271117U), (((/* implicit */unsigned int) (unsigned char)28))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0 - 2] [i_1] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)24)))), (((/* implicit */int) arr_3 [i_1] [i_3 + 1] [i_1]))));
                            var_18 = ((/* implicit */unsigned short) arr_8 [i_0] [i_1]);
                            var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [6ULL] [6ULL] [i_1])), (arr_0 [i_1] [i_1])))), (((((/* implicit */int) (unsigned char)28)) << (((2906620302U) - (2906620283U)))))))), (((arr_6 [i_2] [i_1] [i_2 + 1] [i_3 + 2]) % (arr_6 [i_0 - 3] [i_0] [9] [9])))));
                            arr_12 [i_1] [i_1] [i_2 + 4] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5388069672638608543LL)) ? (5707698972255459519LL) : (20LL)))) ? (((((/* implicit */_Bool) 2222160589924798176LL)) ? (1388346993U) : (1388347014U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1])) <= (((/* implicit */int) arr_4 [i_3 + 1] [i_1])))))));
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2 - 3] [i_1]))) >= (arr_2 [i_0 - 4]))) ? (max((15867983922621795097ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2 - 3] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 4]))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 4] [i_1])) >= (((/* implicit */int) (unsigned char)28))))), (((((/* implicit */int) arr_9 [i_0] [i_0] [(short)1])) / (((/* implicit */int) arr_0 [(short)20] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    arr_20 [i_5] [i_5] [i_5] = ((/* implicit */long long int) 3881985751U);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))) > (3105124859690871057ULL))))) : (min((355630309U), (((/* implicit */unsigned int) arr_0 [i_5] [i_6]))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(arr_5 [i_5])))), ((~(min((((/* implicit */unsigned long long int) -780956779349183855LL)), (arr_16 [i_4] [i_5] [i_4])))))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_17 [i_4]))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_10 [i_4]))));
                        arr_23 [i_4] &= ((((((/* implicit */_Bool) arr_21 [i_7 - 2] [i_7 - 2] [i_7 - 4] [i_7] [i_7 + 1])) || (((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 - 1])))) ? (((arr_22 [i_4] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24362))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) (unsigned short)24362))))) ? (((/* implicit */unsigned long long int) arr_6 [i_4] [i_7 + 1] [i_6] [i_7 + 1])) : (((((/* implicit */_Bool) arr_5 [i_4])) ? (arr_22 [i_4] [i_5] [i_6] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7] [i_7 - 3] [i_6] [(unsigned short)6] [7ULL]))))))));
                        var_25 = ((/* implicit */unsigned long long int) (unsigned short)2500);
                    }
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */unsigned int) (unsigned char)66);
}
