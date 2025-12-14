/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98298
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_5 [i_1] [i_1]))))), (min((3759218042873716703LL), (((/* implicit */long long int) var_7))))))) ? (((((/* implicit */int) min((((/* implicit */short) (unsigned char)130)), ((short)-31541)))) * ((-(((/* implicit */int) (signed char)0)))))) : (min((min(((-2147483647 - 1)), (((/* implicit */int) arr_5 [i_0] [i_0])))), (var_9))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 = (~(((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3 - 2])) + (((/* implicit */int) arr_7 [i_1] [i_1] [i_2] [i_0])))));
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [9ULL] [i_2] |= var_13;
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_15)) != (-3759218042873716706LL))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_22 [(short)7] [i_1] [i_5] [i_6] = arr_19 [(short)3];
                        /* LoopSeq 1 */
                        for (short i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            arr_26 [i_0] |= ((/* implicit */short) (-(-3759218042873716730LL)));
                            var_22 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_7 [i_7 + 4] [i_7] [i_7 + 4] [i_7 + 2])))), (((((/* implicit */int) arr_7 [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 1])) / (((/* implicit */int) arr_7 [i_7 + 4] [i_7] [i_7 - 1] [i_7 + 4]))))));
                            var_23 = (((((~(arr_9 [i_5] [i_5] [(short)7]))) + (9223372036854775807LL))) >> (((((int) var_12)) - (768126044))));
                            var_24 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_3)), (18446744073709551606ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)242)))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_4 [i_1] [i_5] [i_7]))))) & (((/* implicit */int) ((_Bool) 9223372036854775781LL)))));
                        }
                        arr_27 [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_8))));
                        /* LoopSeq 4 */
                        for (int i_8 = 3; i_8 < 14; i_8 += 4) 
                        {
                            arr_30 [(unsigned short)13] [i_0] [i_1] [i_0] [i_5] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)65520), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (((5600086524252441708ULL) / (((/* implicit */unsigned long long int) 3759218042873716703LL))))));
                            arr_31 [i_0] [i_1] [(unsigned short)13] [i_6] [10ULL] = ((/* implicit */long long int) arr_18 [i_6] [13ULL] [i_1] [i_0]);
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((arr_15 [i_0] [i_0] [1U] [i_6] [(short)5]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(signed char)12] [i_0] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [1ULL] [i_6]))) : (1517577995U)))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (5600086524252441708ULL))))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)164))))), (arr_4 [i_8 - 1] [i_8 - 3] [i_8 - 3])))));
                            arr_33 [i_1] [i_5] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 - 3] [i_8 - 2])) ? (arr_28 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 - 3]) : (arr_28 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 - 3])))), (9507975062026565944ULL)));
                            var_26 = ((/* implicit */long long int) min((((unsigned long long int) (!(((/* implicit */_Bool) var_3))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 12; i_9 += 4) 
                        {
                            var_27 = ((((/* implicit */_Bool) (+((-(arr_29 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((1517577981U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))) : (0LL))));
                            arr_38 [i_0] [i_1] [i_1] [i_5] [i_0] [i_6] [6LL] = ((((/* implicit */_Bool) arr_14 [i_0] [4] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)242)) : ((-(((/* implicit */int) (short)32767)))));
                            arr_39 [i_0] [i_1] [i_1] [i_5] [i_5] [i_6] [i_9 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9 + 1] [i_9 + 2] [i_9 + 1] [i_9 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_5])) ? (var_12) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                            arr_40 [4LL] [i_9 + 1] [i_6] [i_5] [i_1] [4LL] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) var_5)), (max((arr_9 [i_9 - 1] [i_9 - 2] [i_9 + 2]), (((/* implicit */long long int) (signed char)(-127 - 1)))))));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) var_14);
                            var_29 = ((/* implicit */unsigned short) var_0);
                        }
                        /* vectorizable */
                        for (short i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            arr_45 [i_0] [i_1] [i_0] [i_0] [5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)64952))));
                            arr_46 [(_Bool)0] [(_Bool)0] [i_6] [i_11] = ((/* implicit */int) (signed char)0);
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11 + 1] [i_6] [i_5] [i_1] [i_0]))) != (3759218042873716691LL)))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-31541)) : (var_12))))))));
                        }
                    }
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        arr_49 [i_0] [(unsigned char)6] [12ULL] [i_12] = ((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)0)), (arr_43 [i_0] [i_1] [i_1] [(unsigned short)3] [i_0] [(unsigned char)3] [i_12]))), (((((/* implicit */int) var_7)) ^ (arr_43 [i_0] [(unsigned char)9] [i_12] [i_0] [i_0] [i_5] [(unsigned char)9])))));
                        var_31 ^= ((/* implicit */unsigned char) var_6);
                        arr_50 [i_0] [i_0] [i_1] [i_5] [i_12] = ((/* implicit */unsigned char) (-(18446744073709551615ULL)));
                        var_32 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)41751)) / ((+(((/* implicit */int) arr_19 [i_5]))))));
                    }
                    var_33 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65515)), ((-(((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_1] [i_5]))))));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) min(((short)32465), (((/* implicit */short) var_8)))))) ^ (min((359285882240805577LL), (((/* implicit */long long int) (unsigned char)13)))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
}
