/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89665
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
    var_14 = ((/* implicit */unsigned int) 17215032316316253933ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */int) max((arr_0 [i_1 - 2] [i_1 + 3]), (arr_0 [i_1 + 3] [i_1])))) == (((/* implicit */int) ((((/* implicit */_Bool) 2182938463U)) && (((/* implicit */_Bool) arr_0 [i_1 - 2] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 4]))))) < (((/* implicit */int) min((((/* implicit */short) arr_4 [i_1 + 2])), (var_1))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                arr_15 [i_4] [i_1] [i_1] [0U] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (unsigned char)243)), (var_10))), (16U)));
                                var_17 ^= ((/* implicit */_Bool) -1775780489);
                                var_18 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_14 [i_3] [i_1] [i_1 + 2] [i_3 - 2] [i_1] [i_3])) ? (((/* implicit */int) arr_14 [i_2] [i_0] [i_1 - 1] [i_3 - 2] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_14 [i_2] [i_1 + 3] [i_1 + 3] [i_3 - 1] [i_4] [i_1 + 3])))), (((/* implicit */int) ((unsigned short) arr_11 [i_1 - 1] [i_1 + 4] [i_1 + 1])))));
                            }
                            for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
                            {
                                arr_18 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_6 [i_3 + 1] [i_5 + 2]), (arr_6 [i_3 + 1] [i_5 - 1]))))));
                                arr_19 [i_1] [i_1 + 1] = (i_1 % 2 == zero) ? (((/* implicit */short) max((((arr_5 [i_1] [i_3 + 1] [i_1 - 1] [i_3 - 1]) << (((arr_5 [i_1] [i_3 - 1] [i_1 + 3] [2U]) - (340634841))))), (((/* implicit */int) var_6))))) : (((/* implicit */short) max((((((arr_5 [i_1] [i_3 + 1] [i_1 - 1] [i_3 - 1]) + (2147483647))) << (((((arr_5 [i_1] [i_3 - 1] [i_1 + 3] [2U]) + (340634841))) + (1604541498))))), (((/* implicit */int) var_6)))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                            {
                                var_19 = ((/* implicit */unsigned long long int) 2422588100U);
                                arr_22 [i_6] [i_1] [i_3] [i_2] [i_1 + 3] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [(signed char)10] [(signed char)10]))) ? ((+(2422588100U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [(signed char)3] [(signed char)13])))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_14 [i_1] [i_6] [i_3 + 1] [i_3 + 1] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))));
                            }
                        }
                    } 
                } 
                arr_23 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-113)) ? (26U) : (0U))), (((/* implicit */unsigned int) arr_1 [i_1 + 1]))));
                arr_24 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) arr_12 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 + 4] [i_1 - 1])));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 16U))) ? (var_9) : (((/* implicit */int) var_1))));
}
