/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93898
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
    var_18 += ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
            var_19 = ((/* implicit */int) min((var_19), (((int) var_3))));
            arr_7 [i_0] [i_1] [(unsigned short)3] = ((/* implicit */int) arr_4 [i_0] [i_0]);
            var_20 = ((/* implicit */int) (+(arr_3 [i_1] [i_1])));
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_21 = ((long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2]))) : (arr_8 [i_2] [i_0])));
            var_22 = ((int) ((3797689770698131085ULL) | (arr_11 [i_0])));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_0])) >= (arr_3 [i_0] [2ULL])))) < (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_10 [(unsigned short)8] [i_0]))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (-376849901272901826LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [13LL] [i_3] [i_0])))))));
        }
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_10 [i_0] [i_4])))))));
                var_25 |= ((/* implicit */unsigned long long int) ((unsigned char) arr_18 [i_0] [i_0] [i_5]));
                var_26 ^= ((/* implicit */int) var_10);
                arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) >= (arr_0 [i_0])));
            }
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_10 [i_0] [i_0]))));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_7] [i_7 + 1] [i_7] [i_7] [(_Bool)1] [i_7] [i_6 - 1]))));
                        }
                        var_29 = ((/* implicit */_Bool) arr_5 [12ULL] [i_4] [i_6]);
                    }
                } 
            } 
            arr_30 [i_4] [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (-3783589920532021486LL))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(arr_24 [i_0] [i_0] [i_4]))) : (6834846296822807304LL)));
        }
        arr_31 [(unsigned char)6] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((((unsigned long long int) arr_22 [i_0] [i_0] [i_0])) - (92ULL)))));
        var_31 = arr_20 [i_0] [i_0];
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_0 [i_0]))))))));
    }
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        var_33 = ((((/* implicit */int) arr_10 [i_9] [i_9])) < (min((((/* implicit */int) var_14)), (((((/* implicit */int) arr_18 [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_18 [i_9] [i_9] [i_9])))))));
        arr_34 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)77)), (var_11))))))) ? (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) arr_27 [i_9] [i_9])) : (max((((/* implicit */unsigned long long int) arr_19 [22ULL] [i_9])), (arr_15 [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) arr_12 [i_9])) || ((_Bool)1))), (var_12)))))));
    }
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        arr_38 [i_10] = ((/* implicit */_Bool) arr_22 [i_10] [10] [i_10]);
        var_34 = ((/* implicit */int) var_14);
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10] [i_10] [i_10]))) : (arr_2 [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)30)) <= (((/* implicit */int) var_12)))))) : ((-(max((((/* implicit */long long int) (unsigned char)179)), (3983422391116903677LL)))))));
    }
}
