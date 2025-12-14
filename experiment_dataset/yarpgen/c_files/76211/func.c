/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76211
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0 + 3] [i_0 + 3] = max((((/* implicit */unsigned long long int) (signed char)-97)), ((((!(((/* implicit */_Bool) 2582008740U)))) ? (max((((/* implicit */unsigned long long int) (signed char)26)), (4555245704671264014ULL))) : (((/* implicit */unsigned long long int) 1071644672)))));
        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) 2304352339646325092LL)), (var_1))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 + 2]))))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_6))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                arr_9 [i_2] [i_2] [i_2] = ((((/* implicit */int) arr_3 [i_1] [i_2 - 2])) != (((/* implicit */int) var_9)));
                arr_10 [i_1] [i_2 + 2] [i_3] &= ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0)))))));
            }
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
            {
                var_13 *= ((/* implicit */signed char) ((((/* implicit */long long int) var_8)) != (2304352339646325092LL)));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            arr_18 [i_1] [i_2 - 1] [i_4] [i_5] [i_6] |= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)104))))) == (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) | (2304352339646325100LL)))));
                            arr_19 [i_1] [i_2 + 2] [15U] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_2 - 2] [22]))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) 2582008745U))));
            }
        }
        for (unsigned long long int i_7 = 2; i_7 < 23; i_7 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(arr_15 [i_7 + 2] [i_7 + 2] [i_7 - 2] [i_7] [i_7 + 1]))))));
            arr_23 [i_7] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) arr_16 [i_1] [i_1] [i_7 - 1] [i_7 - 2] [i_7 + 1]));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_16 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)32)) > (((/* implicit */int) (signed char)(-127 - 1)))))) >= (((/* implicit */int) arr_22 [i_8]))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_8] [i_8])) ? (arr_8 [3] [i_8] [i_8] [3]) : (arr_8 [i_1] [i_1] [i_1] [i_8])));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (+(var_3))))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                arr_28 [i_1] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-1071644652) : (((/* implicit */int) arr_12 [i_1] [i_8] [i_8]))));
                arr_29 [i_1] [i_8] [(signed char)23] [i_8] = ((/* implicit */unsigned int) arr_25 [i_1] [i_8] [i_9]);
            }
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                arr_33 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) (~(arr_5 [i_8])));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) var_5);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_30 [i_1] [i_1] [i_1] [i_1])))) / (((((/* implicit */_Bool) 1779089489U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    arr_36 [i_11] [i_11] [i_10] [i_10] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((unsigned long long int) var_3))));
                    arr_37 [i_10] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_8))))));
                }
                /* LoopSeq 2 */
                for (short i_12 = 4; i_12 < 23; i_12 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) var_8);
                    arr_40 [(_Bool)1] [i_8] [i_8] [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(arr_8 [i_1] [i_8] [i_10] [i_12 - 1])))) / ((-(arr_14 [i_12 - 4] [i_10] [i_1] [i_1])))));
                }
                for (unsigned short i_13 = 3; i_13 < 22; i_13 += 2) 
                {
                    arr_44 [i_13] [i_10] [i_8] [i_1] |= ((/* implicit */unsigned int) var_1);
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        var_22 = ((unsigned int) (_Bool)1);
                        arr_49 [i_1] [i_1] [i_1] [9U] [i_1] [(short)15] [i_1] |= ((/* implicit */short) ((arr_16 [i_10] [i_13 - 3] [i_13 + 2] [i_13 + 2] [i_13 + 2]) == (((/* implicit */unsigned long long int) var_2))));
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 0U)) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [i_10] [2U]))) & (arr_41 [i_1] [i_10] [i_13] [i_14])))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_2)))) ? (arr_8 [i_13] [i_13 - 2] [20LL] [i_13 + 3]) : (1071644672)));
                    }
                    for (unsigned int i_15 = 2; i_15 < 24; i_15 += 4) /* same iter space */
                    {
                        arr_53 [i_1] = ((/* implicit */unsigned int) var_2);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_52 [i_1] [i_13 + 2] [i_15 - 2] [i_1] [i_15]))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 24; i_16 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-23)) != ((+(((/* implicit */int) (signed char)14))))));
                        arr_56 [i_1] [i_1] [i_1] [i_13] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_16] [i_8])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_13])) : (((/* implicit */int) arr_3 [17U] [17U]))))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) var_4)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))));
                        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_11 [i_1] [i_8] [i_10]))));
                    }
                }
                var_29 += ((/* implicit */signed char) 1712958558U);
            }
        }
        for (unsigned char i_17 = 1; i_17 < 23; i_17 += 3) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */unsigned long long int) (~(1712958550U)))) > (((arr_12 [i_17] [i_17] [(_Bool)1]) ? (arr_57 [i_1] [i_1]) : (arr_45 [i_1] [i_1] [i_1] [i_1] [4U] [i_17] [i_17])))))));
            var_31 ^= ((/* implicit */int) var_7);
        }
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (signed char)-59))));
    }
    for (long long int i_18 = 0; i_18 < 22; i_18 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned short) -1071644673);
        var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_41 [i_18] [(unsigned short)1] [23U] [i_18]))) ? (4212541118U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) 4212541118U)) ? (82426180U) : (1712958550U))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)22)))))))))))));
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 22; i_19 += 2) /* same iter space */
    {
        var_36 = (-((((_Bool)1) ? (((/* implicit */int) (short)497)) : (1071644672))));
        var_37 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_58 [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_19] [i_19] [i_19]))));
    }
    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */long long int) (_Bool)0)), (202182013737909013LL)))))))))));
    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) var_4)) : (((235443683) & (-235443683))))) > (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)255)))))))))));
}
