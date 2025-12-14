/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58425
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
    var_16 |= ((/* implicit */long long int) ((unsigned short) (((!(((/* implicit */_Bool) var_10)))) && (var_4))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            var_17 += ((((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_12) - (4165059866U))))))) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] &= ((/* implicit */unsigned char) arr_3 [i_2]);
                            arr_15 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_3))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_8 [i_0] [i_1 - 3] [11LL] [i_1]))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (36027697507336192LL) : (-36027697507336193LL)))));
                            arr_16 [i_0] [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_8))) % (((/* implicit */int) var_6))));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))))) ? (min((-36027697507336193LL), (-36027697507336193LL))) : (((/* implicit */long long int) ((max((var_12), (((/* implicit */unsigned int) arr_3 [i_1 - 3])))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))))))));
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */int) (signed char)-12)) & (((/* implicit */int) arr_20 [i_1] [i_1] [i_5]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (var_13)));
                }
                var_20 = ((/* implicit */int) ((((arr_7 [i_5 - 2] [i_1] [i_5 - 2]) | (((/* implicit */int) var_3)))) >= ((+(((/* implicit */int) (short)18519))))));
                arr_24 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (signed char)-93)))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_12))) - (3967544767U))))) == (((/* implicit */int) var_14))));
                arr_25 [i_1] [i_1 + 2] [i_1] = ((/* implicit */unsigned short) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            for (long long int i_7 = 4; i_7 < 12; i_7 += 3) 
            {
                arr_28 [i_1] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) -36027697507336193LL)) ? (36027697507336187LL) : (((/* implicit */long long int) 0)))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_1] [i_7])))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_31 [i_0] [i_7] [i_0] [i_0] [i_0] [i_8] &= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_7] [i_8] [i_0])))))))) ? (((((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [(signed char)2] [i_1])) - (((/* implicit */int) var_3)))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_27 [i_1])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_6)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_9 = 4; i_9 < 14; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) ((_Bool) var_4))) : (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [i_7] [i_8] [i_9])))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_7 - 4] [i_7 - 4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_7] [i_0] [12ULL])) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1))))));
                        arr_34 [i_1] [i_1] [i_1 - 1] [13] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_13)))) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_8] [i_9] [i_8])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_1 - 2] [1ULL])))))));
                    }
                }
                var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((long long int) var_13))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_19 [i_7 - 4] [i_7 - 4] [i_7 - 1] [i_7 - 2]) : (arr_19 [i_7] [i_7 - 2] [i_7] [i_7]))) : ((((-(-13))) * (((/* implicit */int) arr_13 [(unsigned short)0] [i_7 + 3] [(signed char)13] [11ULL]))))));
                arr_35 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_7])) ? (((((((/* implicit */_Bool) 36027697507336192LL)) ? (((/* implicit */long long int) 0)) : (-36027697507336177LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7 - 1]))))) : (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65519)) / (-1)))) * (min((((/* implicit */long long int) var_14)), (arr_26 [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
        var_25 = ((/* implicit */unsigned short) (((((~(36027697507336186LL))) <= (0LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29410))) : (((((/* implicit */_Bool) 18014398475927552ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) 28)) : (var_13)))))));
        var_26 = ((/* implicit */int) var_2);
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-93)) + (2147483647))) >> (((36027697507336201LL) - (36027697507336182LL)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [2U])) : (((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        arr_36 [i_0] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0]);
    }
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_15))))))))))));
}
