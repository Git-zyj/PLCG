/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71079
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] [i_1 - 1] = ((/* implicit */short) var_16);
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_0 + 2]))) ? ((-(arr_5 [i_0 + 2] [i_1 + 1]))) : (min((arr_5 [i_0 + 1] [i_1 - 1]), (arr_5 [i_0 + 3] [i_1 + 1])))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_20 = var_15;
                    var_21 = ((/* implicit */short) min((((/* implicit */long long int) (-(((var_19) + (((/* implicit */int) (short)(-32767 - 1)))))))), (((((/* implicit */_Bool) 1905936777)) ? (4611686018427387903LL) : (((/* implicit */long long int) -1905936761))))));
                    arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 + 1]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) max((arr_9 [i_0 + 1] [i_1] [i_1 + 1] [i_2]), (arr_9 [1U] [i_0 + 3] [i_1 + 1] [i_2])))), (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) (short)-27384))))))) : ((-(max((-857797602), (((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_0]);
                                var_22 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_1] [(unsigned char)6])))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0 - 1] [i_2] [i_5] [i_1] = ((/* implicit */short) ((unsigned long long int) (short)-5756));
                                arr_24 [i_6] [i_1] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) (short)27385);
                                var_23 = ((/* implicit */unsigned short) ((min((15ULL), (((/* implicit */unsigned long long int) 857797605)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_0 - 1]))))))));
                                arr_25 [i_1] = ((/* implicit */short) (~(((long long int) arr_10 [i_5] [i_1] [i_5 - 1]))));
                            }
                        } 
                    } 
                }
                arr_26 [i_1] [i_1] = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 - 1] [i_1 + 1])))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)49)))))));
            }
        } 
    } 
    var_24 = (((+(((/* implicit */int) ((((/* implicit */_Bool) 3825307312U)) && (((/* implicit */_Bool) -2147483643))))))) <= (((/* implicit */int) var_11)));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(var_18))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) ((unsigned long long int) var_0)))));
}
