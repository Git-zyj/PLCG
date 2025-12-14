/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86921
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (min((arr_2 [i_0] [i_1]), (arr_0 [i_0] [i_0]))))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [17LL])) ? ((~(max((arr_3 [i_0] [(unsigned short)16]), (arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((int) max((arr_3 [(signed char)7] [(signed char)7]), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_1] [i_3]))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned long long int) arr_6 [i_0] [15] [i_0])), (arr_11 [i_2] [i_1] [i_2 - 1] [i_3] [(unsigned short)11] [i_2]))))), (min((arr_3 [2U] [i_2]), (((/* implicit */unsigned int) ((int) arr_3 [i_0] [i_4])))))));
                                arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)163))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]))) : (min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(min((-1317505670), (((/* implicit */int) (unsigned short)14622))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (max((arr_2 [i_0] [i_3]), (arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
                                var_23 = ((((/* implicit */_Bool) min((arr_9 [(unsigned short)17] [(unsigned short)17] [i_2 - 1] [(unsigned short)17] [i_4]), (arr_9 [(unsigned short)8] [(unsigned char)20] [i_2 - 1] [i_3] [i_4])))) ? (max((arr_9 [i_3] [i_4] [i_2 - 1] [i_3] [i_1]), (arr_9 [(signed char)18] [22U] [i_2 - 1] [i_3] [i_4]))) : (arr_9 [i_0] [i_1] [i_2 - 1] [i_1] [i_4]));
                            }
                            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                            {
                                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */int) min((max((((/* implicit */long long int) ((unsigned short) arr_16 [i_0] [i_1] [(unsigned short)13] [i_3] [i_5]))), (min((((/* implicit */long long int) arr_0 [5ULL] [i_0])), (arr_14 [i_2] [i_0] [7] [i_0] [2]))))), (max(((+(arr_15 [(unsigned short)21] [i_0] [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [13ULL])) ? (arr_0 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
                                var_24 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_8 [4ULL] [i_1] [i_2] [i_3])) ? (arr_15 [i_0] [i_0] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [1U] [(unsigned char)15]))))), (((/* implicit */long long int) min((arr_2 [i_3] [i_5]), (arr_0 [i_0] [i_0])))))), (((/* implicit */long long int) max(((!(arr_5 [i_0] [i_0]))), ((!(arr_5 [i_0] [i_1]))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned int) (+(1666919403054518675ULL)));
                                var_26 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [(signed char)22] [i_1])) ? (((/* implicit */int) arr_19 [i_3] [i_3] [i_2 + 1] [i_0] [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_3] [13]))))));
                                arr_21 [i_1] [i_0] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_2] [i_0] [5])))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [(unsigned short)1] [i_1] [i_2 - 1] [i_3] [i_6])) ? (arr_16 [(unsigned short)1] [i_1] [i_2] [i_3] [8ULL]) : (arr_16 [i_0] [i_1] [i_6] [i_6] [i_6])));
                                var_28 = ((/* implicit */int) ((unsigned long long int) arr_14 [i_2 + 1] [i_2] [i_2 + 1] [i_0] [i_2 + 1]));
                            }
                        }
                    } 
                } 
                var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [(_Bool)1] [6] [i_0])) ? (((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1] [i_0]))) ? (min((arr_15 [i_0] [16U] [(unsigned char)22] [i_1]), (((/* implicit */long long int) arr_7 [i_0] [16])))) : (min((arr_14 [i_0] [i_0] [i_1] [(unsigned short)12] [i_1]), (((/* implicit */long long int) arr_7 [i_0] [i_0])))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_0] [i_1] [i_1]))))), (arr_0 [(unsigned short)8] [(unsigned short)8]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) var_14);
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -984908622)) ? (12LL) : (((/* implicit */long long int) -1845130081))));
    var_32 = min((7518323573813719482ULL), (1666919403054518675ULL));
}
