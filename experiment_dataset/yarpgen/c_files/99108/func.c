/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99108
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) 2838292393U))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) var_3))));
    }
    for (short i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_13 &= ((/* implicit */unsigned char) max((min((arr_6 [i_1] [i_1 - 1] [i_1] [i_1]), (arr_6 [i_3] [(unsigned char)2] [(unsigned char)2] [i_1 - 1]))), (arr_6 [i_3] [i_2] [i_1 + 1] [i_1])));
                var_14 = max((((/* implicit */unsigned int) (~(-58312348)))), (max((arr_6 [i_3] [3ULL] [i_2] [i_1 - 2]), (arr_6 [i_1 - 1] [i_3] [i_3] [i_1 - 3]))));
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) -1205987636)) < (var_8)))) - ((~(-400305246)))));
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((2147483647) - (((/* implicit */int) (unsigned char)128))))) + (((unsigned long long int) 4294967266U))))) ? (arr_9 [i_4] [i_4] [i_4] [i_4]) : (((((/* implicit */int) arr_7 [i_1] [i_1] [2])) - (((/* implicit */int) ((var_3) > (-58312353)))))))))));
                    var_17 ^= ((/* implicit */unsigned char) (short)-1);
                    arr_10 [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)-7)), (max((1774574863), (((/* implicit */int) arr_7 [i_4] [i_3] [i_1]))))))) == (max(((+(4219776604U))), (((/* implicit */unsigned int) arr_8 [i_1 - 3] [i_1] [i_1]))))));
                    arr_11 [i_1] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_0)))) ? (max((((/* implicit */int) var_4)), (var_3))) : (min((((/* implicit */int) (signed char)-4)), (-400305217)))))));
                }
                for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    arr_14 [i_1] [i_1] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */int) arr_5 [i_1] [i_2] [i_2])), (var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_1 - 1] [i_1] [i_1]))))) : (var_2)));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8481398223771381204ULL)) && (((/* implicit */_Bool) arr_2 [i_2])))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) var_1)) : (var_8))))), (((/* implicit */long long int) var_2)))))));
                    arr_15 [i_1] [i_1 - 3] [i_1] = ((/* implicit */short) 1774574860);
                    arr_16 [i_1] [i_1] [i_1] [i_1] [(unsigned char)12] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_1) : (var_1)))) : ((~(11631463236566294861ULL)))))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    arr_21 [i_1] [i_2] [i_1] [i_6] = ((arr_12 [i_1] [i_1] [i_1 - 3] [i_1] [i_1 - 3]) % (var_0));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_3] [(unsigned char)13] [(unsigned char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) : (255ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)-1029)) : (((/* implicit */int) var_6))))) : ((~(arr_6 [i_6] [i_3] [i_2] [i_1])))));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 12; i_7 += 1) 
                {
                    var_21 *= ((/* implicit */_Bool) ((unsigned char) (signed char)16));
                    arr_25 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483626)) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [(unsigned char)3]))))) >> (((arr_12 [i_2] [i_2] [i_7 + 1] [i_7 - 1] [i_2]) - (551933064)))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((~(var_0))) : (arr_12 [i_7 + 1] [i_3] [i_1] [i_1 - 3] [i_1])));
                }
            }
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [i_1] [i_1 - 3] [i_1 - 3] [i_1 + 2]))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) var_9)))))));
                            arr_36 [i_1] [i_2] [i_1] [i_9] [0ULL] [i_10] = ((/* implicit */int) (signed char)35);
                        }
                        for (int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_9))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1774574862)) ? (arr_18 [i_9 - 2] [i_9] [i_9 - 1] [i_9 - 1] [i_9]) : (454163726)))), (((((/* implicit */_Bool) arr_18 [i_9 - 1] [i_9] [i_9 - 2] [i_9 - 1] [i_9])) ? (6815280837143256758ULL) : (((/* implicit */unsigned long long int) arr_18 [i_9 + 1] [i_9] [i_9] [i_9 - 2] [i_9])))))))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_9 + 1] [i_9 + 1] [i_1] [i_9 + 1] = ((/* implicit */unsigned int) ((5055121135449356814ULL) > ((~(6815280837143256768ULL)))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((var_0) - (2008270387)))));
                            arr_43 [i_1] [i_9] [i_2] [i_8] [i_8] [4ULL] |= ((/* implicit */signed char) ((((arr_3 [i_9]) != (((/* implicit */int) (unsigned char)131)))) ? (var_3) : (((/* implicit */int) ((signed char) var_4)))));
                            arr_44 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_18 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_9 - 2] [i_9]));
                        }
                        arr_45 [i_1] [i_2] [i_1] [0LL] = ((/* implicit */signed char) 1752487052);
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((((/* implicit */_Bool) arr_31 [i_1 + 2] [i_1] [i_1] [i_1 - 2] [i_1])) || (((/* implicit */_Bool) arr_31 [i_1 - 3] [6] [i_1] [i_1] [i_1 - 2])))), ((!(((/* implicit */_Bool) arr_31 [i_1 - 3] [i_1 - 3] [i_1] [i_1] [i_1])))))))));
    }
    for (unsigned char i_13 = 1; i_13 < 17; i_13 += 2) 
    {
        var_30 = ((((/* implicit */_Bool) ((short) (unsigned char)207))) ? (arr_48 [i_13]) : (((/* implicit */int) (short)32745)));
        var_31 = arr_48 [i_13];
        var_32 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
    }
    /* vectorizable */
    for (short i_14 = 4; i_14 < 18; i_14 += 2) 
    {
        var_33 ^= ((/* implicit */int) var_9);
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            for (int i_16 = 0; i_16 < 19; i_16 += 4) 
            {
                {
                    arr_59 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) ((unsigned short) arr_54 [i_16])))));
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))));
                    arr_60 [(unsigned char)14] [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_14 - 4])) ? (var_3) : (var_0)));
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) 56001909);
        arr_61 [i_14] = ((/* implicit */short) 9463130977426732812ULL);
    }
    var_36 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (max((8720465271482184729ULL), (((/* implicit */unsigned long long int) var_1)))))))));
}
