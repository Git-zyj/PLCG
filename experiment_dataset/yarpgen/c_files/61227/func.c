/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61227
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
    var_19 = var_11;
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((((((/* implicit */int) (unsigned char)156)) <= (((/* implicit */int) (_Bool)1)))), ((_Bool)0))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)61324)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
                                var_24 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_14)))) ? ((~(var_15))) : (((/* implicit */long long int) ((/* implicit */int) (short)-15544))))))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_7 [(short)20])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (var_0))))));
                }
                for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0 + 3]))))));
                                var_28 = ((/* implicit */int) min((var_28), ((((+(((arr_9 [i_0] [(short)15]) - (((/* implicit */int) (_Bool)1)))))) - (((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_6] [i_7])) ? (((/* implicit */int) arr_23 [i_0 + 3] [i_1 - 1] [i_0 + 3] [(signed char)5] [14ULL])) : (((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((arr_8 [i_0] [(unsigned short)0] [(unsigned short)0] [i_0]), (arr_10 [i_5])))))) : (((unsigned long long int) 558805941)))))));
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3369839548612189950LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)32767))))) ? ((+(((/* implicit */int) var_13)))) : ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)105)))))) - (((/* implicit */int) (signed char)-114))));
                    var_31 = ((/* implicit */int) max((var_31), (max((((((/* implicit */int) arr_10 [i_0 + 1])) & (((/* implicit */int) arr_10 [i_0 + 2])))), (((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_13))))))));
                }
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) max((1336848545U), (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_22 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])))) <= (((/* implicit */int) (unsigned char)77))))))))));
                arr_25 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (~((+(((long long int) var_12))))));
            }
        } 
    } 
}
