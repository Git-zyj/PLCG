/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76941
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
    var_13 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)35281)) ? (((((/* implicit */int) (unsigned short)65507)) << (((((/* implicit */int) (unsigned short)65498)) - (65497))))) : (((/* implicit */int) (unsigned short)15004)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_1] [i_2] [i_2] [i_1] [i_4]);
                                arr_14 [i_3] [(signed char)5] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) min((((unsigned long long int) max((((/* implicit */unsigned long long int) arr_7 [i_4])), (8388607ULL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [(unsigned short)8])) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (signed char)-22))))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)62))))), (arr_5 [i_3] [i_0])))));
                                arr_15 [i_0] [i_3] [i_3] [(short)13] [(short)13] = ((/* implicit */unsigned short) ((arr_1 [i_0]) % (((unsigned long long int) ((unsigned short) 4084447146U)))));
                                var_16 |= ((/* implicit */signed char) arr_3 [i_1 - 1]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [(signed char)1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)53))))) == (((((/* implicit */_Bool) (unsigned short)35)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_1]))) : (1099243192320ULL)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-36)), (4084447146U)))), (max((arr_5 [0U] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_1])))))));
                    var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [(unsigned short)11] [(unsigned short)11])))) ? ((-(((/* implicit */int) min(((unsigned short)65464), (((/* implicit */unsigned short) (short)17402))))))) : (((/* implicit */int) ((14900258629412520251ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_2]) > (arr_8 [i_0] [(signed char)9] [i_0]))))))))));
                }
            } 
        } 
    } 
}
