/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88725
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
    var_18 = ((/* implicit */short) var_12);
    var_19 |= ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((~(-6472030419929543606LL))))))));
        arr_3 [13] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_20 = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) 11812068882777382915ULL)) ? (((/* implicit */unsigned long long int) 6472030419929543606LL)) : (18446744073709551615ULL)))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_1 [i_0]))), (((/* implicit */unsigned long long int) var_16)))) < (((14760248963768427843ULL) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_22 = ((/* implicit */short) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3730724671U)) ? (5U) : (4294967292U)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [i_1])))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_23 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) arr_0 [i_2])) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_2]))))))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        arr_23 [0] [i_5] [i_5] [i_5] [(unsigned short)11] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4]))) != (var_8)))), (arr_0 [i_6])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_6])) || (((/* implicit */_Bool) var_10)))) ? (var_7) : ((~(var_17)))))) : (((var_15) >> (((var_3) - (14886553510325529196ULL)))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (signed char)56))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_4] [i_5] [i_5] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((4294967290U), (1U)))) ? (max((18014398508433408ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (unsigned short)65166)))))));
                        var_26 ^= arr_21 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] [i_7];
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_2] [i_2] = ((/* implicit */unsigned short) (!((_Bool)1)));
                        var_27 = ((/* implicit */unsigned int) max((var_27), ((-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36374)))) ? (((var_8) >> (((arr_0 [i_2]) - (6736678239784514705LL))))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_14)))))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                    {
                        var_28 &= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_33 [i_2] [i_2] [i_2] [i_9] [i_2] = ((/* implicit */unsigned int) arr_10 [i_2] [i_2]);
                    }
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [6] [i_10] [i_10]))) : (18133534163769646070ULL)))) ? (min((8746268051228461591ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((arr_21 [i_2] [i_3] [i_4] [i_4] [i_5] [i_10] [i_10]) ? (arr_29 [i_2] [5U] [i_2] [i_2] [i_2]) : (arr_13 [i_2] [i_4] [i_5] [i_10])))))) == (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_24 [i_5])))), ((~(((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_5] [i_10] [i_10])))))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) -1998198270)) <= (14042539475016591126ULL))) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) var_6)))) : ((+(arr_10 [i_5] [i_5]))))))))));
                        arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = min((((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)239)))), (((/* implicit */int) arr_7 [i_2])));
                    }
                }
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_14))));
                var_32 ^= max((((/* implicit */int) (!(arr_21 [i_2] [i_2] [i_2] [i_2] [14] [i_2] [(unsigned short)13])))), (((((/* implicit */_Bool) (unsigned char)250)) ? (arr_27 [i_2] [i_3] [7LL] [i_4]) : (arr_27 [i_2] [i_3] [i_3] [i_4]))));
                arr_37 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) arr_11 [i_2] [2LL] [(unsigned short)5])) : (var_14)))));
            }
            var_33 = ((/* implicit */int) arr_1 [i_2]);
        }
        arr_38 [i_2] [i_2] = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_8 [i_2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))));
        arr_39 [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_29 [(short)4] [i_2] [i_2] [i_2] [(_Bool)1])) ? (((/* implicit */int) min((arr_16 [i_2] [11U] [7LL] [i_2] [i_2] [i_2]), (((/* implicit */signed char) var_2))))) : ((~(((/* implicit */int) (_Bool)1)))))) + (2147483647))) >> (((var_8) - (191645163U)))));
    }
    var_34 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (var_15) : (var_15)))));
}
