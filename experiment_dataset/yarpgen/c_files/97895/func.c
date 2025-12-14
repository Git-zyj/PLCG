/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97895
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
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((signed char) (signed char)120)));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (short)27776)) : (((/* implicit */int) (signed char)-122))));
                                arr_15 [i_3] [i_1] [(short)12] [(short)17] [(signed char)15] [i_4] = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((short) 8528929532720746119ULL))), (max((9677876095709726538ULL), (((/* implicit */unsigned long long int) arr_17 [i_0 + 1]))))));
                        arr_18 [i_2] [i_2] [i_2] [4ULL] = ((/* implicit */signed char) var_0);
                        arr_19 [i_0] [i_1] [i_2] [(short)1] [i_2] [i_5] = ((/* implicit */short) var_1);
                        arr_20 [i_0] [(short)5] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_4), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_11)) ? (15795718154671235748ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (0ULL) : (14556315496062530147ULL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [(signed char)12] [i_1] [i_1] [i_2] [(signed char)5])), (arr_7 [(short)12] [i_1] [(signed char)3] [14ULL])))))))));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            arr_25 [(signed char)4] [i_6] [(signed char)16] [(signed char)7] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_1 - 2])), (((((/* implicit */int) var_9)) - (((/* implicit */int) var_13)))))))));
                            var_17 = ((/* implicit */unsigned long long int) min((max((((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) (signed char)-10))))), (arr_16 [(short)14] [i_1] [i_1] [i_1] [i_1 - 1]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14)))))));
                            var_18 = max((((/* implicit */unsigned long long int) ((signed char) arr_23 [i_6]))), (min((((/* implicit */unsigned long long int) var_13)), (13649737188206433585ULL))));
                            var_19 = ((/* implicit */signed char) arr_3 [i_1] [i_2] [(short)13]);
                            arr_26 [(short)1] [i_6] [i_6] = ((/* implicit */signed char) max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_6 [i_0] [i_0] [i_0])), (var_2)))) <= (((/* implicit */int) var_7)))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_31 [(short)8] [(signed char)13] [i_2] [i_2] [i_2] [(signed char)0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (min((((/* implicit */unsigned long long int) (signed char)-33)), (12421236007863286677ULL)))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [4ULL])) > (((/* implicit */int) max(((signed char)-69), ((signed char)-117))))))), (var_10)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_21 = var_3;
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_2))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_2] [i_9] [(short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (short)27776)) & (((/* implicit */int) (signed char)126)))) : ((~(((/* implicit */int) arr_0 [i_1]))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5871723891052237428ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)107))))) ? (var_11) : (var_8)));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27787)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_35 [i_0 - 2] [i_1 - 2] [i_2] [i_9]))));
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 2) 
                    {
                        arr_41 [13ULL] [i_1] [i_1] [(signed char)8] = ((/* implicit */unsigned long long int) ((signed char) var_8));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) min(((signed char)-117), (arr_6 [i_10 - 2] [(short)17] [(short)16])))) : (((/* implicit */int) ((signed char) (signed char)-125)))));
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            {
                                var_26 += min((var_10), (((/* implicit */unsigned long long int) ((signed char) max((arr_2 [i_11]), (((/* implicit */unsigned long long int) (short)-32762)))))));
                                var_27 = ((short) min((min((var_5), (((/* implicit */unsigned long long int) (short)-18213)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-25083)))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_33 [(signed char)6])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_9)))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((((/* implicit */_Bool) (short)20680)) && (((/* implicit */_Bool) (short)-1308))))))), (((/* implicit */int) (signed char)123))));
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((signed char) var_14)))) && (((/* implicit */_Bool) (signed char)68))));
    var_31 = min((min((var_5), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2820)) / (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)72)))) : (((/* implicit */int) var_4))))));
}
