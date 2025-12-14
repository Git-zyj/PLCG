/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68089
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) max((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))), (arr_1 [i_0 + 2])));
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(2147483647)))) <= (((arr_1 [i_0 + 1]) - (((/* implicit */long long int) (-2147483647 - 1)))))));
        var_12 = ((/* implicit */short) ((((int) 2147483647)) * (((/* implicit */int) ((2581973860U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) arr_1 [i_1]))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
        var_13 += ((((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1])))) != (((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1])))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
            var_15 = ((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_2 [i_2])) + (((/* implicit */int) arr_4 [i_2])))) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [i_2] [i_2]))))))));
            arr_11 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_3 + 1] [i_3 + 2])))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / (arr_7 [i_3 - 2] [i_3 + 1])))));
        }
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                arr_18 [i_4] [i_4] [i_5] = ((((unsigned int) arr_13 [i_4] [i_4] [i_4])) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 1]))));
                var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1])) : (2147483621)));
                var_17 = ((/* implicit */short) 0);
            }
            for (long long int i_6 = 3; i_6 < 14; i_6 += 4) 
            {
                arr_21 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) max((max((6305597377275508812LL), (((/* implicit */long long int) 524280)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)1490)) ? (((((/* implicit */_Bool) -2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (14U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_6 [i_2]))))))))));
                arr_22 [i_2] [i_2] [i_4 + 2] [i_4] = ((/* implicit */unsigned short) arr_13 [i_4] [i_4] [i_4]);
                var_18 = ((/* implicit */unsigned int) ((6) >> (((long long int) ((arr_19 [i_4] [i_4] [i_4]) || (((/* implicit */_Bool) (unsigned char)9)))))));
            }
            for (short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                arr_27 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_4 [i_2])))) : (max((2), (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-20)), ((short)-9149)))) ? (min((((/* implicit */unsigned long long int) arr_9 [(short)12] [i_4])), (arr_16 [i_7] [6U] [6U]))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) : (arr_8 [i_2])))))));
                var_19 = ((/* implicit */unsigned short) arr_15 [i_2] [i_7]);
            }
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((long long int) (unsigned short)1023)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9250)) ? (((/* implicit */int) (short)256)) : (((/* implicit */int) var_0)))))))) >= (((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) : ((+(var_9)))))));
        }
        var_21 = ((/* implicit */_Bool) var_9);
        arr_28 [8LL] = ((/* implicit */unsigned int) ((arr_1 [i_2]) + (max((((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) (_Bool)1))))), (1275126105090095159LL)))));
        var_22 = ((/* implicit */short) ((unsigned short) ((9705910142394749062ULL) | (((/* implicit */unsigned long long int) 6)))));
    }
    var_23 = ((/* implicit */unsigned int) ((var_4) ? (var_3) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) -8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))))));
}
