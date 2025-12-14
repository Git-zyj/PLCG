/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99380
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(1760370267))))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_7)))), ((+((+(11LL)))))));
    var_18 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-83))))), (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 2])) ? (arr_0 [i_1 - 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
                arr_6 [6LL] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (min((var_2), (min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1])), (-1LL))))) : (min((arr_5 [i_0] [i_1 - 2]), (((/* implicit */long long int) arr_2 [i_1 - 2] [i_1 - 2]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 1])) | (((/* implicit */int) ((signed char) arr_7 [i_1 + 1] [i_1 - 1] [i_1 - 2])))));
                    var_21 = ((/* implicit */unsigned char) 1341498435U);
                    arr_11 [13LL] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) 3446249129671898584ULL)) ? (((/* implicit */int) (short)-30168)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? ((~(arr_1 [i_4]))) : (((/* implicit */int) arr_2 [i_0] [i_3]))));
                        var_23 = ((/* implicit */short) ((arr_0 [i_4 + 1] [i_1 - 1]) <= (arr_0 [i_4 + 2] [i_1 + 1])));
                        arr_17 [(signed char)1] [i_1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [8ULL] [i_1 + 1] [i_0] [(signed char)8] [i_4 + 2])) ? (((((/* implicit */_Bool) -6LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_12))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3077)))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_15 [i_0] [(signed char)0] [i_0] [(unsigned char)8] [i_0] [i_0]))));
                        var_25 *= ((/* implicit */signed char) (~(var_11)));
                        arr_20 [i_3] [i_1] [10] [(signed char)4] [i_3] [9] = arr_12 [i_3];
                        arr_21 [i_0] [(short)2] [i_3] [(signed char)4] [i_0] |= ((/* implicit */signed char) arr_5 [i_5] [i_1]);
                    }
                }
            }
        } 
    } 
}
