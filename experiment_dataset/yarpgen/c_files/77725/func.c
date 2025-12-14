/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77725
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
        var_14 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            arr_7 [i_1] [i_2 + 1] = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_2 + 1] [i_2 + 1]));
            var_15 -= ((/* implicit */unsigned long long int) 3175748555U);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        {
                            arr_17 [i_3] [i_2] [i_2 - 1] [i_4] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)25828)) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)8])))))));
                            arr_18 [i_3] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) << (((3175748555U) - (3175748544U)))));
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) var_9));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 + 1]))))));
            var_17 = ((/* implicit */unsigned short) ((arr_3 [i_2 + 1]) >= (arr_3 [i_2 - 1])));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            arr_24 [i_1] [i_1] = ((/* implicit */unsigned char) arr_15 [i_1] [i_1] [i_1] [4U] [i_1] [(signed char)6]);
            /* LoopSeq 2 */
            for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) var_11);
                arr_29 [(signed char)0] = ((/* implicit */unsigned char) (short)-3665);
            }
            for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 2) 
            {
                var_19 += ((/* implicit */short) ((-6) > (((/* implicit */int) (signed char)27))));
                var_20 ^= var_8;
            }
        }
        var_21 = ((/* implicit */unsigned short) (unsigned char)255);
        var_22 *= min((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1] [i_1])) / (((/* implicit */int) (short)21))))), (1119218741U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1])), (3175748555U)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)31694)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (var_11)))));
        arr_34 [i_1] [i_1] &= ((/* implicit */unsigned char) ((int) min((min((((/* implicit */long long int) var_6)), (var_12))), (((/* implicit */long long int) ((_Bool) var_7))))));
    }
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) min((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_7)))), ((_Bool)1)))) >= (((/* implicit */int) var_0)))))));
    var_24 = ((/* implicit */short) max((var_12), (((/* implicit */long long int) ((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_9))))) ^ (((/* implicit */int) ((unsigned char) var_5))))))));
    var_25 = ((/* implicit */unsigned short) var_4);
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) var_0)))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-25828))))))));
}
