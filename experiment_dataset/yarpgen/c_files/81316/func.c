/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81316
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > ((-9223372036854775807LL - 1LL))))) & (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_3 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */long long int) arr_5 [i_1])), (arr_2 [i_1]))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_22 |= ((/* implicit */unsigned long long int) ((min((min((arr_4 [i_0] [(unsigned char)22] [i_2]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))) / (arr_1 [i_2])));
                var_23 = ((/* implicit */unsigned char) max((arr_4 [i_1] [i_1] [i_1]), (((/* implicit */long long int) max((arr_7 [i_0] [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_2]))))));
            }
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
        {
            arr_12 [i_0] [i_3] [i_3] = ((/* implicit */long long int) (((~(var_2))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) ^ ((~(((/* implicit */int) var_5)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) (((~(arr_1 [(_Bool)1]))) >= (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_0] [i_3] [i_0])))))));
                var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0]))));
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) < (-5840050980314356624LL)))) / ((~(((/* implicit */int) arr_14 [i_0] [i_3] [i_3] [i_4]))))));
            }
            for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            arr_22 [22LL] [i_3] [i_0] [(_Bool)0] = ((/* implicit */unsigned char) var_19);
                            arr_23 [i_0] [(unsigned char)14] [i_5 + 1] [i_0] [(unsigned char)15] [i_6] [(unsigned char)14] = ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)));
                        }
                    } 
                } 
                arr_24 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) max((arr_10 [i_5 + 1] [i_0] [i_5 + 4]), (arr_10 [i_5 + 2] [i_0] [i_5 + 3])))) << (((min((var_13), (arr_9 [i_5 - 1] [i_0] [i_5 + 1]))) - (405667367427200035LL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) max((arr_10 [i_5 + 1] [i_0] [i_5 + 4]), (arr_10 [i_5 + 2] [i_0] [i_5 + 3])))) << (((((min((var_13), (arr_9 [i_5 - 1] [i_0] [i_5 + 1]))) - (405667367427200035LL))) + (8100243854937145618LL))))));
                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) arr_5 [i_0])))) ^ (((/* implicit */int) arr_5 [i_0]))));
            }
        }
        var_29 = ((/* implicit */unsigned char) ((var_11) >> ((((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) <= (arr_9 [i_0] [i_0] [i_0])))))) + (6)))));
        var_30 = min((((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */int) arr_8 [i_0])) > (((/* implicit */int) var_5))))), (max((((/* implicit */short) arr_10 [i_0] [i_0] [i_0])), (var_17)))))), (arr_9 [i_0] [i_0] [i_0]));
    }
    var_31 |= ((/* implicit */short) ((var_16) && (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_13)))))) < (min((var_2), (((/* implicit */unsigned int) var_6))))))));
}
