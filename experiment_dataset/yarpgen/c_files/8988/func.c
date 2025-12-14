/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8988
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */int) arr_7 [(signed char)18] [i_0] [(signed char)18]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        var_14 ^= ((((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_0 [i_0 - 1]))) + (((unsigned int) ((((/* implicit */_Bool) (unsigned char)186)) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [14ULL] [(unsigned char)16] [14ULL])))))));
                        arr_11 [13U] [11] [i_2] [i_0] [i_1] = (~(((((/* implicit */int) arr_7 [i_1] [i_3 + 2] [i_3 - 1])) & (((/* implicit */int) var_6)))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */int) var_12);
                        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) arr_7 [i_1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_4 - 1] [i_4 - 1]))) : (var_12)))));
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) min((((/* implicit */long long int) (unsigned char)178)), (var_7))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 18446744073709551615ULL))))))))));
                        arr_18 [9U] [9U] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)44869))));
                    }
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 2] [18ULL] [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) max((((_Bool) var_10)), (((3732552544719194437ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))))));
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_13 [i_1] [i_2] [i_1] [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned int) (signed char)-22);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) min((var_5), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)20667)))))))))));
                            var_21 = ((/* implicit */unsigned int) arr_8 [i_0] [8U]);
                        }
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) var_11);
                            var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_11)))));
                            arr_29 [2U] [2U] [i_1] [2U] [i_1] = min((((unsigned long long int) 9223688953375221612ULL)), (18446744073709551600ULL));
                            arr_30 [i_0] [i_0] [(_Bool)1] [i_6] [i_6 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 - 1] [21ULL]))) == (min((var_7), (((/* implicit */long long int) var_6))))));
                            var_24 -= ((/* implicit */unsigned short) arr_24 [i_0] [i_2] [i_8]);
                        }
                        for (signed char i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) var_5);
                            var_26 = ((((/* implicit */int) (unsigned char)178)) == (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)78)) && (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) max((var_2), (var_1))))))));
                            arr_34 [(unsigned char)4] [i_6] [i_1] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((unsigned short) 531447295U));
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((arr_28 [i_0 + 1] [i_0 + 1] [13U] [i_2] [13U] [i_6] [i_6]), (((/* implicit */unsigned long long int) var_0))))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1161928922U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (arr_14 [16ULL] [i_1] [i_2] [i_6])))));
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_27 [i_6] [i_6] [(_Bool)1] [i_6 - 1] [(unsigned char)10] [i_6] [i_2])), (arr_20 [i_0] [16U] [i_0] [i_6 - 1])))) % (((17748283264301243641ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~((~(var_5))))))));
                            var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) != (((var_5) >> (((((/* implicit */int) var_0)) - (26)))))));
                            var_31 ^= ((/* implicit */unsigned long long int) (signed char)-95);
                            var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [(unsigned char)10])), ((unsigned char)255))))));
                        }
                        arr_39 [i_1] [20ULL] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3980738974U)))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (412316860416ULL)))))) ? (((/* implicit */unsigned long long int) (-(arr_21 [i_0 - 2] [i_0 - 1] [i_2] [i_0 - 2])))) : ((~(((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_0 - 1])) ? (arr_26 [i_0] [(_Bool)1] [i_1] [i_2] [i_2] [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(_Bool)1] [i_0] [(_Bool)1] [24ULL] [(_Bool)1] [i_2] [(_Bool)1]))))))));
                    }
                }
            } 
        } 
    } 
    var_33 *= max((((/* implicit */unsigned long long int) var_3)), (4761603437928382926ULL));
    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_8))));
}
