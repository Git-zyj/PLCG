/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79678
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((min((var_1), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (var_7))))))) >= (min((((((/* implicit */unsigned long long int) (-2147483647 - 1))) / (13ULL))), (max((((/* implicit */unsigned long long int) var_1)), (var_0)))))));
            var_16 = ((/* implicit */signed char) min((((min((var_0), (var_4))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) (((~(var_4))) == (((var_4) + (var_4))))))));
            var_17 ^= ((max((((/* implicit */unsigned long long int) min((var_11), (var_6)))), (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (13ULL) : (20ULL))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))) : (18446744073709551603ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8557))) : (12ULL))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-72))))) * (max((max((var_0), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((7958747181834906926LL), (((/* implicit */long long int) 2124621431U)))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_19 = ((/* implicit */long long int) (+(min((min((var_1), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) ((var_6) & (((/* implicit */int) var_2)))))))));
            arr_8 [i_0] [i_2] = ((/* implicit */int) min((max((((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
        }
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14)))) ? (max((var_7), (((/* implicit */int) var_12)))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_10)))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
        var_21 = ((/* implicit */_Bool) var_4);
        var_22 |= ((/* implicit */int) max((((((var_5) >= (((/* implicit */long long int) var_3)))) ? (((/* implicit */unsigned long long int) (+(var_11)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : (var_0))))), (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) var_10)), (var_14))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((min((max((((/* implicit */long long int) var_3)), (var_5))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_10)), (var_9)))))), (((/* implicit */long long int) max((((((/* implicit */int) var_9)) & (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        arr_18 [(signed char)6] [i_5] [i_5] [(signed char)6] [i_5] = ((/* implicit */int) max((var_10), (((/* implicit */short) min((((var_1) > (var_3))), (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7)))))))));
                        arr_19 [i_6] [11LL] [i_4 - 2] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58))) : (4U)))) || (((/* implicit */_Bool) var_9))));
                        var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (var_4))))))) ? (((/* implicit */long long int) min((var_6), (max((var_11), (var_11)))))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */long long int) var_11)), (var_14))))));
                    }
                    arr_20 [i_5] = ((/* implicit */signed char) (+(min((((/* implicit */int) ((var_14) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (min((var_6), (((/* implicit */int) var_8))))))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_3))))) ? (max((((/* implicit */long long int) var_11)), (var_14))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) max((min((var_4), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((2207802914U), (((/* implicit */unsigned int) (unsigned short)35197))))))))));
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (var_6)))), (min((((/* implicit */unsigned long long int) var_1)), (var_4)))))));
        var_27 *= ((/* implicit */unsigned short) min((806466820403485442ULL), (12ULL)));
        arr_21 [i_3] = ((max((max((17640277253306066173ULL), (((/* implicit */unsigned long long int) (signed char)-61)))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_9))))))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((var_10), (var_10)))), (max((((/* implicit */long long int) var_7)), (var_14)))))));
    }
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551595ULL)) || (((/* implicit */_Bool) -1304202512))))) : (((/* implicit */int) var_13))));
    var_29 = ((/* implicit */short) (~(min((((((/* implicit */unsigned long long int) var_3)) ^ (var_4))), (((/* implicit */unsigned long long int) max((var_5), (var_14))))))));
    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((var_14) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))), (max((((/* implicit */int) var_2)), (var_11)))))) ? (((((/* implicit */_Bool) var_6)) ? (max((var_5), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) (+(var_7)))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (var_14))))))))))));
}
