/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72163
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
    var_16 = var_9;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((/* implicit */signed char) (!(arr_5 [i_1 - 2] [i_1 - 2])))), (arr_2 [(signed char)16]))))));
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-2)), (arr_4 [(unsigned short)14] [i_1 + 1])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1]))) * (arr_8 [i_1 - 2] [i_1 - 2])))));
                arr_10 [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])))))), (max(((-(arr_7 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536862720U)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (unsigned short)47866)))))))));
            }
            arr_11 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [15U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_7 [i_1])))) && (((/* implicit */_Bool) arr_0 [i_1 + 1])))))) : ((((-(536862720U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1])))))));
            arr_12 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? ((+(arr_7 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1])) : (arr_4 [i_0] [i_1 + 2]))))));
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 2])) && (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 2])))))));
                arr_15 [i_0] [i_1 + 1] [i_3] [i_3] = ((_Bool) arr_5 [i_0] [i_1]);
                arr_16 [6] [i_3] = ((/* implicit */int) arr_0 [i_0]);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_1 + 2])), (arr_6 [i_1] [i_1] [i_1 + 1] [i_3 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_6 [i_1] [i_1] [i_1 - 2] [i_3 + 1]) : (arr_6 [i_0] [i_0] [i_1 + 1] [i_1]))) : (arr_6 [i_0] [i_0] [i_1 + 2] [i_1 - 1]))))));
                arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-32));
            }
            for (short i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_24 [i_0] [(unsigned short)4] [(unsigned short)4] [4] [(signed char)0] [i_0] [i_0] |= ((/* implicit */long long int) min(((-(arr_4 [i_1 - 1] [i_5]))), (((/* implicit */int) ((short) arr_4 [i_4 - 1] [i_1 + 1])))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~((+(arr_6 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_4 - 1]))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_3 [i_6] [i_5]))));
                            arr_25 [i_4] [(short)5] [i_4] [(_Bool)1] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) arr_23 [i_1 - 2] [i_1 + 1])), (((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_23 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_23 [i_1 - 2] [i_1 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) max((min((arr_8 [i_1 + 1] [i_4 + 2]), (((/* implicit */unsigned long long int) arr_29 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_4 + 1])))), (((arr_7 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0]))))))))));
                            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_13 [i_4 + 2] [i_4] [i_4] [i_0]), (arr_13 [i_4 - 1] [i_4] [i_4] [(signed char)14]))))));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (int i_10 = 3; i_10 < 18; i_10 += 4) 
            {
                {
                    arr_40 [i_0] [i_0] [i_9] [i_10] = arr_13 [i_10 - 2] [i_0] [i_10 + 1] [i_10 - 1];
                    var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [13ULL] [(short)11] [i_9] [i_9] [i_10 - 1])) ? (((/* implicit */int) arr_29 [6] [i_0] [i_0] [6] [i_10])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [13ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [(short)12]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_9]))))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_21 [(short)0] [i_9] [i_10 - 2])) : (((/* implicit */int) arr_38 [i_0] [i_9] [i_10] [17LL])))))));
                }
            } 
        } 
        var_26 -= ((/* implicit */signed char) max(((~(((long long int) (signed char)-32)))), (((/* implicit */long long int) (_Bool)1))));
        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [(_Bool)1] [i_0]))));
    }
    var_28 = ((/* implicit */int) var_5);
}
