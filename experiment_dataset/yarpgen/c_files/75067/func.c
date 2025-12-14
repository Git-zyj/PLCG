/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75067
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
    var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_19 = ((((/* implicit */int) arr_1 [i_0 + 1])) >> (((((/* implicit */int) arr_1 [i_0 - 2])) - (75))));
        var_20 = ((/* implicit */int) var_9);
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_1] [i_4] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                            var_22 += ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_5] [i_5] [i_5 - 1]))) < (((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_5])) : (var_2)))) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_4 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3] [i_1])) > (((/* implicit */int) (unsigned char)0))))))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_16 [i_1 + 1] [i_4 + 2] [i_6 - 1] [i_6 - 1] [i_6])) <= (((/* implicit */int) arr_16 [i_1 - 2] [i_4 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))))));
                            var_25 += ((/* implicit */unsigned char) arr_3 [i_1]);
                            arr_19 [i_1 + 1] [i_4] [i_3] [i_4] = 619533685;
                            var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_6 - 1])))))));
                        }
                        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_27 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 + 1]))), (((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (arr_7 [i_1 - 2]) : (arr_7 [i_1 - 2])))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) max((-619533686), (((/* implicit */int) ((short) 619533694)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4 - 3] [i_1 - 2])) && (((/* implicit */_Bool) arr_6 [i_4 - 3] [i_1 - 2]))))) : (((((/* implicit */_Bool) var_13)) ? (arr_22 [i_1] [i_1] [i_4] [i_3]) : (((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_2] [i_2])))))))));
                        }
                        var_29 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_13)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))))), (((/* implicit */long long int) (unsigned char)36)))) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    }
                } 
            } 
            var_30 &= ((/* implicit */unsigned char) var_11);
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_2] [i_1])))) ? (max((((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1])), (-619533673))) : (((/* implicit */int) max((arr_11 [i_1] [i_1] [i_2] [i_2]), (var_0))))))) && (((/* implicit */_Bool) arr_3 [i_1]))));
            arr_23 [i_2] [i_2] = ((/* implicit */int) arr_8 [(signed char)10] [(signed char)10]);
        }
        var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_11 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_1 - 1])))) < (((((/* implicit */int) arr_6 [i_1] [i_1])) ^ (((/* implicit */int) (_Bool)1))))))) : ((+(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 2]))))));
        var_33 += ((/* implicit */unsigned long long int) ((long long int) var_14));
    }
    var_34 = min((((/* implicit */int) var_9)), (min((((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) >= (var_16)))), (((((/* implicit */_Bool) var_9)) ? (619533694) : (((/* implicit */int) var_9)))))));
}
