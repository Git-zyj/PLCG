/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/662
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
    var_20 = ((/* implicit */_Bool) (-(max((((-2697426288487445220LL) & (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (short)-20670)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) : (var_18)))))));
    var_21 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_11 [i_1] = ((/* implicit */int) arr_3 [23ULL] [i_1] [i_1]);
                        var_22 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-128)), ((unsigned short)65533)))), (max((14U), (((/* implicit */unsigned int) arr_9 [i_0] [i_1]))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) var_13))))), (0LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1] [i_1]))))) : (-1427356430015195459LL));
                        arr_13 [i_0] |= ((/* implicit */_Bool) 4294967281U);
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) 1526535787);
                        arr_16 [i_1] [i_1] = ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))) : (((/* implicit */int) arr_2 [i_2 + 1] [i_1])));
                    }
                    for (int i_5 = 3; i_5 < 24; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((4294967281U), (4294967281U))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) ((((unsigned int) arr_6 [i_5] [i_5])) < (arr_14 [i_0] [i_1] [18ULL] [i_5] [i_0])));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_5] [i_5 - 1] [i_6])) ? (4294967281U) : (arr_14 [i_0] [i_2] [i_2] [i_5 - 3] [i_0])));
                        }
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                        {
                            arr_24 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 3] [i_1] [i_1] [i_2 - 1] [i_7])) ? (((/* implicit */int) ((signed char) 43U))) : (((/* implicit */int) var_16))));
                            var_27 = (+(((((((/* implicit */_Bool) arr_9 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) -1005120144754051683LL)) : (arr_6 [i_7] [i_2]))) / (((/* implicit */unsigned long long int) min((22U), (16U)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) max((max((var_19), (((/* implicit */short) (unsigned char)2)))), (((/* implicit */short) ((var_18) < (min((-6489367440024551539LL), (((/* implicit */long long int) arr_5 [i_1])))))))));
                                var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(2061713707)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-3132))) | (((11U) << (((/* implicit */int) (unsigned short)0)))))) : (1802540995U)));
                                var_30 = ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) var_10)) == (max((((/* implicit */long long int) arr_0 [i_0] [i_9])), (arr_23 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_1])))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1599736000), (((/* implicit */int) (unsigned char)103))))) ? ((-(((/* implicit */int) arr_3 [13U] [(signed char)15] [i_0])))) : (((/* implicit */int) (unsigned short)15621))))) + (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_2] [i_2]))))), (min((18446744073709551603ULL), (((/* implicit */unsigned long long int) 2061713697))))))));
                    var_32 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) max((-1224699799), (((/* implicit */int) (unsigned char)236))))), (4294967295U))), (((arr_21 [i_2 + 1] [i_0] [i_2] [1U] [(unsigned char)5]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 1] [(short)0] [i_0] [i_1] [i_0])))))));
                    var_33 = ((/* implicit */short) arr_20 [i_0] [24LL] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
