/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84920
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_10 = ((/* implicit */short) min((((((/* implicit */int) (unsigned short)18173)) - (((/* implicit */int) (signed char)127)))), (((/* implicit */int) (unsigned short)45793))));
                    arr_8 [i_0] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) != (((((/* implicit */int) arr_1 [i_0] [8U])) << (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_1))) ^ (max((((((/* implicit */int) var_3)) + (((/* implicit */int) (_Bool)1)))), (arr_6 [(short)12] [i_1] [i_2])))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)21985))));
                                var_12 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4]);
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) 8517827293208183587LL)))) && (((/* implicit */_Bool) (unsigned char)193))));
                                arr_17 [i_4] [i_4] [i_3] [i_4] [(unsigned short)13] [i_3 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 + 2] [i_4] [i_3 - 3])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [1LL] [i_1] [1LL]))))));
                            }
                        } 
                    } 
                    var_13 = arr_5 [(short)19] [i_1] [i_1];
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_3])) : (var_4)))) ? (159131260U) : (((/* implicit */unsigned int) var_4))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 2) 
                    {
                        var_15 = (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
                        arr_20 [i_0] = ((/* implicit */int) (~(arr_5 [i_6 + 1] [i_3 - 1] [i_3 - 1])));
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_3 + 1])) ? (arr_7 [i_0] [i_1] [i_0] [2U]) : (arr_13 [i_1]))))));
                        arr_22 [i_6] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-32)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_6 [i_3 - 2] [i_1] [i_0]) : (arr_13 [i_1])))) : (arr_18 [i_3 - 1] [i_3] [13] [i_6 + 1] [i_6 - 3] [i_6 - 2])));
                    }
                }
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)255)))) | (((/* implicit */int) (!(((/* implicit */_Bool) 4135836064U)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)53)), (var_3))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58623)) ? (arr_12 [(unsigned short)0] [(signed char)6] [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */int) (signed char)21))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) var_4))))))));
                var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (short)-17)) : (((/* implicit */int) (signed char)55)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-42)))))));
                var_18 = arr_9 [i_0] [i_1] [i_1];
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((17ULL), (((/* implicit */unsigned long long int) ((signed char) ((unsigned char) var_4))))));
    var_20 = ((/* implicit */_Bool) var_0);
}
