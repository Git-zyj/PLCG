/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75554
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 -= ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)43475)) : (var_6)))), (((/* implicit */unsigned long long int) min((((unsigned short) (unsigned short)65535)), (((/* implicit */unsigned short) var_2)))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_1] [i_1] [i_0] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (var_8)))))) ? (var_15) : (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (short)9729)) : (-1449974430)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 1] [i_3] = ((/* implicit */int) ((unsigned char) (unsigned short)65535));
                            arr_15 [i_0] [3ULL] [i_2 - 2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1)) ? (1784347755908454732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))));
                            var_17 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned short)1011)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), ((unsigned short)65535)));
                            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned short) (unsigned short)65535));
                            var_19 = ((unsigned short) var_5);
                        }
                        for (int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_3 - 1] [i_6] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (signed char)127)), (((((/* implicit */unsigned long long int) var_15)) + (8860429570870307856ULL))))), (((/* implicit */unsigned long long int) max((max((772393825), (((/* implicit */int) (unsigned short)0)))), (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (signed char)(-127 - 1))))))))));
                            var_20 = ((int) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)1))))));
                            var_21 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26267)) ? (((/* implicit */long long int) 1542847776)) : (-4040312420735336838LL)))), (max((((/* implicit */unsigned long long int) 4294967295U)), (0ULL))))));
                            var_22 = ((/* implicit */unsigned short) 0ULL);
                        }
                        arr_24 [i_3 - 1] = ((/* implicit */unsigned char) (unsigned short)43422);
                        arr_25 [i_0] [(short)1] = ((/* implicit */signed char) ((unsigned short) ((unsigned short) max((8992409821572005195ULL), (((/* implicit */unsigned long long int) var_13))))));
                    }
                    for (long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((long long int) (unsigned short)41843)) - (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))));
                        var_24 = ((/* implicit */unsigned char) (unsigned short)24);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)7239)) : (((/* implicit */int) (unsigned short)1011))));
    var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_10), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */int) (unsigned short)1011)) + (((/* implicit */int) var_10))))))) / (max((((/* implicit */unsigned long long int) (signed char)102)), (18446744073709551593ULL)))));
}
