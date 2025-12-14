/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99779
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)38291)), (min((-3330743690720429112LL), (((/* implicit */long long int) (_Bool)1)))))))));
                arr_6 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)21125)), ((unsigned short)65535)))), (18446744073709551593ULL)));
                var_12 = ((/* implicit */long long int) 3275917954U);
                /* LoopSeq 4 */
                for (int i_2 = 3; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned int) max((max(((unsigned short)64667), (((/* implicit */unsigned short) arr_4 [i_0] [i_2 - 3])))), (((/* implicit */unsigned short) (short)21128))));
                    var_14 -= ((/* implicit */long long int) min((arr_8 [i_0 + 3] [i_1] [i_2 - 1] [i_1]), (max((arr_8 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0]), (arr_8 [i_0 + 1] [i_1] [i_2 + 2] [i_0 + 1])))));
                }
                for (int i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [i_3 - 1] [i_0] |= ((/* implicit */short) (_Bool)0);
                        arr_15 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) max((min((arr_2 [i_0]), (3652689040057075805ULL))), (min((min((3652689040057075805ULL), (((/* implicit */unsigned long long int) 463145664U)))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_9 [i_0 - 1] [i_0] [i_0]), (arr_9 [i_0 + 2] [i_0] [i_0])))), (max((17293822569102704640ULL), (((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_16 |= ((/* implicit */long long int) (short)15117);
                        var_17 -= ((/* implicit */long long int) (unsigned short)896);
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 4; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) arr_12 [i_0] [i_1] [i_3] [i_6] [i_1] [i_1]);
                                arr_28 [i_7] = ((/* implicit */unsigned int) min((arr_21 [i_0] [i_0] [i_3] [i_6] [i_7]), (((/* implicit */long long int) (unsigned short)868))));
                            }
                        } 
                    } 
                }
                for (int i_8 = 3; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) max((max((arr_19 [i_0] [i_1] [i_8] [3ULL] [i_0 + 1] [i_0]), (arr_19 [18LL] [18LL] [i_8] [i_0] [i_0 + 1] [i_1]))), (max((arr_19 [i_0] [i_1] [i_1] [i_1] [i_0 + 1] [i_8]), (arr_19 [i_1] [i_1] [i_1] [i_1] [i_0 + 1] [i_0 + 3])))));
                    arr_31 [i_0] [i_1] [i_8] = ((/* implicit */short) arr_30 [i_8] [i_1]);
                }
                for (int i_9 = 3; i_9 < 18; i_9 += 2) /* same iter space */
                {
                    arr_35 [18LL] |= ((/* implicit */int) 3652689040057075826ULL);
                    var_20 = 2021462578U;
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_7))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (min((((/* implicit */unsigned int) min(((unsigned short)879), ((unsigned short)65507)))), (max((((/* implicit */unsigned int) max(((short)-17227), (var_1)))), (2021462583U)))))));
}
