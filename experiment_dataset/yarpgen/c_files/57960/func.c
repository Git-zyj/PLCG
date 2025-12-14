/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57960
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (unsigned short)41021);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [(unsigned char)5] [i_0]) : (((/* implicit */long long int) 2147483647))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) var_1)), (arr_1 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_6 [(unsigned short)9] = max((arr_0 [7LL] [(unsigned short)4]), (((/* implicit */unsigned long long int) var_11)));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_14 [i_1] [(short)6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-1828))))))), ((~(var_10)))));
                        arr_15 [13ULL] = ((/* implicit */unsigned short) var_2);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5]))) : (arr_7 [21ULL] [21ULL])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)7914)), (var_3)))) : (((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 3] [i_5 + 3] [i_3 - 1]))))), (((((/* implicit */_Bool) arr_1 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) 2147483646)) : (arr_0 [i_3 + 1] [i_3 - 2])))));
                            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_3 - 2])) && (((/* implicit */_Bool) arr_4 [i_3 + 1])))) ? (((/* implicit */long long int) 2147483646)) : ((~(arr_4 [i_3 - 2])))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_20 [i_1] [22LL] [i_1] [11LL] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_1] [(short)4]))));
                            arr_21 [1ULL] [14LL] [(unsigned short)10] [14LL] [14LL] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_11 [i_3 - 1] [i_3 + 1]) != (arr_11 [i_3 - 2] [i_3 - 1])))) != (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (_Bool)0)) : (arr_11 [i_3 - 1] [i_3 - 2])))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) ((max((var_13), (var_6))) == (((/* implicit */unsigned long long int) ((int) (unsigned char)144))))))));
                            arr_26 [(signed char)21] = max(((((!(var_2))) ? (arr_18 [i_7 - 1] [i_3 - 2] [14] [14] [(unsigned short)21]) : (((/* implicit */long long int) max((arr_8 [3] [15]), (((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((6045793320803299560ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (arr_22 [12] [i_3 - 2] [(signed char)4] [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41952)))))));
                            arr_27 [(unsigned char)0] [(unsigned short)0] [i_1] [10ULL] [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (unsigned short)45165)) ? (((/* implicit */int) (unsigned short)45160)) : (((/* implicit */int) (unsigned short)41930)))) : ((+(((/* implicit */int) arr_19 [(unsigned short)18] [(unsigned short)18] [(short)12] [(unsigned char)0] [(short)12])))))), (((/* implicit */int) max((var_11), (var_4))))));
                            var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(1589271883U)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))), (((/* implicit */long long int) arr_25 [(unsigned short)21] [(_Bool)1] [4LL] [i_7 + 2] [i_7 + 2]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        for (short i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 3; i_11 < 13; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 15; i_12 += 2) 
                        {
                            {
                                arr_41 [2] [14ULL] [(signed char)3] [0LL] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_13 [i_9 + 1] [(unsigned short)18] [i_9 + 1]) >= (arr_13 [i_9 + 1] [(unsigned char)13] [i_9 - 1])))), (((3599409480641802853ULL) << (((arr_13 [i_9 - 1] [(unsigned short)11] [i_9 + 1]) - (411578910)))))));
                                arr_42 [7U] [4ULL] [(unsigned short)10] [2U] [(_Bool)1] [(_Bool)1] [i_12] = ((/* implicit */unsigned char) (unsigned short)65529);
                                arr_43 [8U] [15LL] [i_12] [i_12] = ((/* implicit */short) arr_11 [i_11 + 1] [i_11 - 1]);
                                arr_44 [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((max(((unsigned short)20370), (((/* implicit */unsigned short) (unsigned char)125)))), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (var_8)))))))));
                                arr_45 [i_12] [2U] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_9 [(signed char)6])), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_16 [(unsigned short)9] [10LL] [10LL] [10LL] [10LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))), ((+(var_7)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((long long int) (short)-31347));
                    arr_46 [10U] [10U] [(unsigned char)13] [(short)15] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_8 [i_9 + 1] [6ULL])), (min((1141350474548488143ULL), (((/* implicit */unsigned long long int) arr_29 [i_9])))))), (max((max((((/* implicit */unsigned long long int) arr_18 [3LL] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [(unsigned short)17])), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483638)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            {
                                arr_53 [(unsigned short)9] [(unsigned short)5] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (1510863702) : (((/* implicit */int) (unsigned short)65522)))), (((/* implicit */int) (_Bool)1))))), (var_7)));
                                arr_54 [(unsigned char)12] [7ULL] [9ULL] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_9 + 1] [i_9 - 1] [(unsigned short)2] [i_9 - 1] [i_9 + 1]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-13367))));
                            }
                        } 
                    } 
                    arr_55 [14ULL] [14ULL] [(unsigned short)4] = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_11)), (arr_1 [10ULL] [10ULL]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [20LL] [(_Bool)1] [i_9 + 1] [i_9 + 1] [(_Bool)1])) && (((/* implicit */_Bool) var_1)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)46574)), ((~(((var_10) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775806LL))) + (34LL)))))))));
}
