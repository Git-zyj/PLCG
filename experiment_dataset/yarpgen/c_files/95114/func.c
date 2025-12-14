/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95114
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
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) max((((/* implicit */unsigned int) var_11)), (var_0)))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)39226)) ? (var_3) : (((/* implicit */int) (unsigned short)26310)))) / ((-(((/* implicit */int) (unsigned short)28191))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))) : ((+(var_0))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 9921061288858004909ULL)) && (((/* implicit */_Bool) arr_4 [(signed char)10]))))), (arr_2 [(unsigned char)8]))));
                                arr_16 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) min((arr_9 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_2)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2541466065U)), (arr_0 [i_0])))) ? ((~(((/* implicit */int) var_10)))) : (((int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((int) (~(arr_0 [i_0]))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)26310))))) | ((-(var_0)))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_0] [i_2] = ((/* implicit */int) arr_3 [i_0]);
                    arr_19 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((4006859229U) <= (3265046668U))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39226))) : (arr_6 [i_0] [i_1] [i_1]))) : (arr_6 [i_0] [i_2 + 1] [(signed char)7])))));
                    var_15 = ((/* implicit */int) min((var_15), ((-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (signed char)-41))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_5 - 2] [i_2 + 1] [11] [i_0] = ((/* implicit */_Bool) arr_20 [i_2] [i_5]);
                                var_16 = ((/* implicit */int) var_0);
                                arr_27 [i_0] [5] [i_5 - 1] [(unsigned char)7] [5U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)13932))))) ? (arr_22 [i_2 + 1] [i_6] [i_6 - 3]) : (((/* implicit */int) arr_13 [i_5 - 2] [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1] [i_0])))) - (((/* implicit */int) (unsigned short)8755))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_9 [i_6] [(unsigned short)2]))));
                                var_18 -= ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_2] [i_5] [8ULL])), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
