/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66845
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) * (min((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_12)))), (((long long int) var_16))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_2]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))))) > ((+(var_4)))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((var_7), (((/* implicit */long long int) var_16)))) + (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) ((unsigned short) var_14)))))) : (((((((var_13) + (9223372036854775807LL))) >> (((var_15) - (2042802109))))) >> (((var_2) + (1982811393371262336LL)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-124)), (arr_5 [i_0] [i_4])))) <= (max((((/* implicit */unsigned long long int) var_11)), (var_6))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))) / (((var_13) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) ((long long int) min((var_7), (var_14))))) : (max((var_6), (((/* implicit */unsigned long long int) ((7349909039637162914LL) != (var_17))))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (var_6))) ^ (((/* implicit */unsigned long long int) ((arr_4 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_1]))))))))) && (((/* implicit */_Bool) min((max((arr_6 [0U] [i_4]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((var_15), (((/* implicit */int) var_8))))))))));
                        }
                        for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((_Bool) var_4))) : (arr_11 [i_1] [i_1] [i_5 - 2])))), (max((18446744073709486080ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))))));
                            var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_2])), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [(unsigned char)6] [i_1]))) & (((long long int) var_13))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (((+(((var_16) ? (((/* implicit */unsigned long long int) var_17)) : (var_6))))) - (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))))))))))));
                            var_27 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (var_15)))) < (((unsigned int) var_3)))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_2))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_3 [i_0 - 3] [i_1])), (var_1)))), (min((((/* implicit */unsigned long long int) var_2)), (65536ULL)))))));
                            var_28 = ((/* implicit */_Bool) min((((var_13) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) ((unsigned char) var_1))), (min((((/* implicit */long long int) var_9)), (var_14)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_6 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_15)) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((910602710U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [2LL] [i_0 - 2] [i_6 + 2]))))))));
                            var_31 = ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_3))))) == (((arr_10 [(signed char)10] [(signed char)8] [(_Bool)1] [i_3] [(_Bool)1] [i_6 - 1] [i_1]) ? (arr_5 [i_1] [2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_32 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_14)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (_Bool)1))))) : (1883862337)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (0U)))), (var_13)))));
                            var_33 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_3)), (var_14))), (((((/* implicit */_Bool) (+(var_17)))) ? (min((var_17), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) min((var_15), (((/* implicit */int) (signed char)123)))))))));
                        }
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned short) var_13);
        var_35 &= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_17)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0] [i_0]))))) : (8301814326141462206LL))), (max((((/* implicit */long long int) ((_Bool) var_15))), (((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    }
    for (unsigned char i_8 = 1; i_8 < 9; i_8 += 1) 
    {
        var_36 *= ((/* implicit */unsigned long long int) (+(max((var_14), (((((/* implicit */_Bool) 65536ULL)) ? (var_4) : (var_7)))))));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_15)) == (max((((/* implicit */unsigned int) var_8)), (3604049811U))))))) * (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */int) var_9))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_4)))))));
        var_38 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) * (min((max((var_2), (((/* implicit */long long int) arr_0 [i_8 + 2])))), (max((arr_16 [i_8] [i_8] [(signed char)7] [i_8] [i_8]), (((/* implicit */long long int) (_Bool)1))))))));
    }
    var_39 = ((/* implicit */unsigned char) var_3);
}
