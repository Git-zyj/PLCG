/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69129
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
    var_10 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (var_0) : (var_1)))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)7)) ? (var_4) : (var_4)))))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned char) arr_0 [i_2]);
                        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 20751011)) || (((/* implicit */_Bool) arr_0 [i_3 + 1])))))));
                    }
                    for (signed char i_4 = 4; i_4 < 11; i_4 += 3) 
                    {
                        var_12 = (~(((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 2] [(short)6] [i_4 + 1])));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (unsigned char)5)))))));
                        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [i_0] [i_0] [7U]) : (((/* implicit */int) arr_3 [i_4] [i_1] [(signed char)6]))))));
                    }
                    var_15 = arr_4 [i_0] [i_0] [i_0];
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_0] [i_0])) ? (((((/* implicit */_Bool) (short)32756)) ? (arr_12 [i_0] [i_0] [i_0] [(unsigned short)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)4] [i_0] [i_1] [i_0] [9ULL])) ? (3991494172U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201)))))))))));
                }
                var_17 = ((/* implicit */signed char) arr_4 [i_1] [2ULL] [i_1]);
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 4; i_6 < 11; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_21 [0U] [i_6] [i_7] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_6] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)28))))) ? ((~(((/* implicit */int) arr_3 [i_1] [i_5] [2U])))) : ((+(((/* implicit */int) (signed char)41))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -585151931298489730LL)) ? (-41869788) : (((/* implicit */int) (unsigned char)116))))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (6884620671950035255ULL) : (arr_16 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28)))))));
                                var_18 = ((/* implicit */long long int) (signed char)93);
                                var_19 |= ((/* implicit */unsigned char) (~((-((-(((/* implicit */int) (short)(-32767 - 1)))))))));
                                arr_22 [i_0] [i_1] [i_0] [i_6 - 3] [i_7] |= ((/* implicit */int) 2316526514U);
                                arr_23 [i_1] = ((/* implicit */unsigned long long int) arr_3 [11ULL] [i_6 - 4] [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
