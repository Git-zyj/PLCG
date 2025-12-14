/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83145
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
    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (3264272935U)))) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) var_4))))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 17332460399001852431ULL))))))) : (((((/* implicit */_Bool) ((unsigned char) (signed char)119))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)49199)) : (((/* implicit */int) (unsigned short)16346)))) : (((/* implicit */int) (unsigned short)49187)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)16346)), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49212))))), (((/* implicit */unsigned long long int) var_6))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) max(((unsigned short)49199), (((/* implicit */unsigned short) var_4))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (var_9)));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)5), (((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) (short)-10340)) : (((/* implicit */int) ((unsigned char) var_11)))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        var_18 &= ((/* implicit */unsigned short) ((var_11) >> (((arr_15 [i_0] [i_1]) - (2484821192U)))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_4 + 1])) : (((/* implicit */int) arr_5 [i_4 + 2] [i_4 - 1]))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */short) 1957191812U);
                        var_21 = ((/* implicit */short) arr_3 [i_0]);
                    }
                }
            } 
        } 
        arr_19 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) var_2)))) + (2147483647))) >> ((((((_Bool)0) ? (((/* implicit */int) arr_14 [i_0] [(unsigned char)14] [i_0] [i_0])) : (arr_11 [i_0] [i_0] [i_0]))) - (29899467)))))) ^ (((max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0])), (2337775483U))) >> (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (((((~(((/* implicit */int) var_2)))) + (2147483647))) >> ((((((((_Bool)0) ? (((/* implicit */int) arr_14 [i_0] [(unsigned char)14] [i_0] [i_0])) : (arr_11 [i_0] [i_0] [i_0]))) - (29899467))) - (1011565763)))))) ^ (((max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0])), (2337775483U))) >> (((/* implicit */int) (_Bool)0)))))));
        var_22 = ((/* implicit */int) (_Bool)1);
    }
}
