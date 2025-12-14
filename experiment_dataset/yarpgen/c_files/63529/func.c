/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63529
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((var_2), (((/* implicit */short) var_12)))))));
    var_21 = ((/* implicit */unsigned char) 432345564227567616ULL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [18LL] [i_1] [i_1] [i_1] [i_1] [i_3])) ^ (arr_4 [i_0] [i_0] [i_0] [i_0])));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-29798)) & (((/* implicit */int) var_19)))))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_11 [i_1] [i_0] [i_1] |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 3064572048068798796LL)))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_18)), (var_7)))) ? (arr_6 [(short)0] [i_1] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_14))))))));
                        var_25 = ((/* implicit */int) ((unsigned long long int) (~(((-3064572048068798797LL) + (arr_4 [i_0] [i_0] [i_0] [i_0]))))));
                        var_26 -= ((/* implicit */short) var_17);
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 4; i_5 < 18; i_5 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_5 - 4] [i_5] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) <= (arr_4 [i_1] [i_1] [i_1] [i_1]))) || (((/* implicit */_Bool) arr_6 [i_0] [i_5 - 3] [i_0] [i_0]))));
                        var_27 = ((unsigned int) (~(1U)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_17);
                    }
                    for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            arr_21 [(short)16] [(short)16] [i_1] [i_2] [i_6 - 3] [i_1] [i_7] = ((/* implicit */short) var_5);
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(var_13))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 4; i_8 < 17; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) (unsigned char)188)), (3064572048068798798LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_10 [i_8] [18U] [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8] [i_8 - 2] [i_8] [i_8 + 2] [i_8 - 3] [15]))))))))));
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_6] [(short)16] [i_8 - 3])), (((unsigned long long int) 2115777066084198288ULL)))))));
                            var_31 -= ((/* implicit */unsigned int) var_2);
                        }
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (((!(((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [4U] [i_0] [i_0] [2ULL]), (((/* implicit */unsigned long long int) 0LL))))))) ? (((((/* implicit */_Bool) arr_10 [9LL] [i_6 - 1] [i_6 - 2] [4ULL] [i_6] [i_6 - 2])) ? (arr_10 [i_6] [9U] [i_6 - 1] [i_6] [11ULL] [i_6]) : (131071ULL))) : (((/* implicit */unsigned long long int) 2548531175U)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_33 |= ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_8)), (var_1))))))))));
                                arr_31 [i_9] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_29 [i_10] [(unsigned short)0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_0] [i_0] [i_10])) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(unsigned char)0] [i_1] [i_1] [i_9] [(signed char)15] [i_10])) && (((/* implicit */_Bool) (unsigned char)80)))))))));
                                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_30 [(signed char)15] [(signed char)15] [i_2] [i_9] [i_10])), ((unsigned short)57035)))) ? (((/* implicit */long long int) arr_23 [i_1] [i_2] [i_0])) : ((~(0LL))))), (((/* implicit */long long int) ((((/* implicit */int) var_18)) & (((/* implicit */int) (signed char)-21))))))))));
                                arr_32 [i_10] [i_9] [i_2] [i_2] [i_1] [(unsigned char)11] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((578050334) ^ (((/* implicit */int) arr_19 [i_2]))))))))));
                                var_35 ^= ((/* implicit */short) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) 1LL))))))), (((((/* implicit */_Bool) arr_9 [i_9] [i_10])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 6040187010869413104ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)81))))))));
                            }
                        } 
                    } 
                }
                for (short i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    var_36 = (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 3; i_12 < 17; i_12 += 1) 
                    {
                        var_37 ^= ((/* implicit */signed char) arr_20 [i_0] [i_0] [i_0] [i_0] [(signed char)3]);
                        var_38 *= ((/* implicit */short) ((_Bool) (~(((/* implicit */int) (_Bool)0)))));
                    }
                    for (unsigned short i_13 = 2; i_13 < 15; i_13 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) (short)-32764))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) (short)-1)) ? (213259430754534692LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13] [i_13] [i_13 + 1] [i_0]))))))))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((0LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))) : (((((/* implicit */_Bool) (signed char)20)) ? (-213259430754534670LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [5ULL] [i_13] [i_13 - 1] [i_13 - 1] [i_13 + 2])))))));
                        var_41 = ((/* implicit */long long int) max((var_41), (-3064572048068798796LL)));
                    }
                    arr_41 [7ULL] [7ULL] [7ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((int) (signed char)3)), (((/* implicit */int) max((arr_12 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_15))))))))));
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_11] [i_0] [i_0] [i_0])))) ? ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_9))))) : (((/* implicit */unsigned long long int) (~(min((arr_37 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_17)))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 4) 
                {
                    var_43 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(unsigned char)6] [i_1] [i_1] [i_1] [(unsigned short)14])) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned short)14))))) ? (((/* implicit */int) arr_35 [i_0] [i_1] [i_1] [i_14 - 1])) : (((/* implicit */int) arr_1 [i_14 + 4]))))) ? (max((((int) (signed char)-12)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [8] [8] [i_14 + 1] [i_14] [3]))))))) : (((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) arr_12 [i_14] [i_14 - 2] [i_14 + 4] [7U])))))));
                    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) min(((-(max((((/* implicit */int) (_Bool)1)), (arr_7 [i_0] [i_0] [i_0] [17LL] [i_0] [i_0]))))), (1492914483))))));
                }
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 4) 
                    {
                        for (signed char i_17 = 0; i_17 < 19; i_17 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned short) (((~((+(((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                                var_46 = ((/* implicit */unsigned char) (~(1372270010)));
                                var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [7U] [(signed char)10] [i_15]), (((/* implicit */int) arr_55 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [10]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65408))))) : (((((/* implicit */_Bool) arr_8 [i_15] [i_16 + 2] [i_17])) ? (0U) : (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1])))))))));
                                var_48 -= ((/* implicit */unsigned char) (((-(((unsigned int) var_1)))) / (max((max((var_7), (var_7))), ((-(var_3)))))));
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_15])) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_18 [15LL] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_18 [i_0] [i_15] [i_15] [i_15])))) : (((/* implicit */int) var_14))));
                }
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned int) var_9);
    var_51 ^= ((/* implicit */unsigned char) ((1492914504) ^ (((/* implicit */int) (signed char)75))));
}
