/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60451
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((((/* implicit */int) (signed char)7)) != (((/* implicit */int) (unsigned char)255)))) ? (17780242323179236451ULL) : (6ULL)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((min(((-(arr_2 [i_0]))), (((/* implicit */long long int) (-(-533254115)))))) / (((((/* implicit */_Bool) (unsigned short)54436)) ? (-9115184223005275475LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40426)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [(unsigned short)1]), (((/* implicit */long long int) var_8))))))))) : (((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)65535))))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)5])) ? (arr_2 [i_0]) : (arr_2 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((-(((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) var_0)))))) : (min((((((/* implicit */int) (signed char)-65)) / (-1))), (((/* implicit */int) arr_4 [i_1]))))));
        var_13 *= ((/* implicit */unsigned short) var_7);
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)47642)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)255))))));
        var_14 += ((/* implicit */unsigned long long int) arr_4 [(short)5]);
        var_15 = max(((-(((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_2])))))), (((/* implicit */int) ((((long long int) var_9)) >= (min((arr_6 [i_2]), (((/* implicit */long long int) arr_5 [10LL]))))))));
        arr_10 [i_2] = ((/* implicit */signed char) (unsigned char)232);
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((6477677937941275847LL), (((/* implicit */long long int) (unsigned char)228))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_17 [i_3] = (+(((/* implicit */int) (signed char)45)));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_17 += ((/* implicit */long long int) ((((arr_13 [i_3]) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) arr_5 [i_3])))) / (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) arr_13 [i_3]))))));
                var_18 = ((/* implicit */unsigned short) arr_8 [i_5]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    var_19 = ((/* implicit */signed char) 6661105809575222285LL);
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (unsigned char)31)))));
                        var_21 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_18 [(unsigned short)0] [i_4] [i_7])) >= (((/* implicit */int) var_0)))) ? (((arr_11 [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_4] [i_5] [(signed char)5] [i_7]))) : (9451629977996485446ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0)))))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_5 [i_3]))));
                    }
                }
                /* vectorizable */
                for (long long int i_8 = 3; i_8 < 14; i_8 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) ((arr_11 [i_3]) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) arr_11 [i_3]))));
                    var_25 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3]))));
                    var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)13386))) < (-1725913657476197077LL)));
                    arr_29 [i_3] [i_4] [(signed char)4] = -2657122332232497077LL;
                    arr_30 [i_4] [i_5] [2LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_8 - 3])) ? (((/* implicit */int) arr_28 [1ULL] [i_4] [(unsigned char)1] [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))));
                }
            }
            for (short i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (arr_32 [i_4] [i_4] [i_4])));
                arr_34 [i_3] [i_4] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5))) << ((((~(max((((/* implicit */long long int) arr_4 [i_3])), (arr_14 [i_3] [i_4] [i_9]))))) + (17378LL)))));
                arr_35 [i_3] [i_4] [(signed char)14] [(unsigned short)5] = var_3;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    arr_39 [i_10] [i_10] [(unsigned char)6] [16ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)30)) != (((/* implicit */int) (unsigned short)21015))));
                    var_28 = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_3] [(short)1] [i_9] [i_10])) ^ (((/* implicit */int) var_4))));
                }
            }
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [2ULL]) + (arr_7 [i_3])))) ? (((((/* implicit */_Bool) arr_6 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_7 [0LL]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_7 [i_3])))));
    }
}
