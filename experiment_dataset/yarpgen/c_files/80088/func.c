/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80088
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
    var_10 += ((short) 17ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_11 = ((((/* implicit */_Bool) 17510699804560789063ULL)) ? ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2])))) : (-744846963));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)12])) || (((/* implicit */_Bool) 744846962)))))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_13 ^= ((/* implicit */short) arr_7 [i_0] [i_1] [i_2]);
                    var_14 = ((((/* implicit */_Bool) arr_2 [i_3] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) : ((-(17510699804560789063ULL))));
                }
                arr_11 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_2]))));
            }
            for (int i_4 = 4; i_4 < 19; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] [i_1] [i_4] [i_1] [(unsigned char)13] = ((/* implicit */short) 17510699804560789065ULL);
                            arr_22 [i_0] [i_1] [i_4 - 4] [i_5] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_4 + 1] [11] [i_4 - 4]))));
                            var_15 = ((/* implicit */unsigned short) (~(-656495369)));
                            arr_23 [i_1] [i_1] [i_4] [(unsigned char)11] [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_4] [i_4] [i_6] [(short)15]))) + ((+(arr_6 [i_0] [i_1] [i_1] [i_6])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_4 - 1]))));
                    arr_27 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_6) : (-744846960))) ^ (arr_20 [i_1] [16U] [i_4] [16U] [i_0] [i_4] [i_7])));
                }
                var_17 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]);
            }
            arr_28 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)24902)) > (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
        }
        arr_29 [i_0] = ((/* implicit */short) arr_14 [(short)3] [i_0] [15U] [i_0]);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])) ? (-459250078) : (var_6))))));
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_0] [(signed char)2] [i_0] [i_0] [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) (~(arr_2 [i_0] [i_0] [i_0])));
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                var_20 += ((/* implicit */short) arr_13 [i_0] [i_8] [i_9]);
                var_21 += ((/* implicit */int) var_7);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8])) ? (arr_12 [i_8]) : (arr_12 [i_0]))))));
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_10])) ? (((/* implicit */int) arr_5 [i_11])) : (((/* implicit */int) arr_5 [i_10])))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (arr_20 [i_11] [i_11] [i_11] [i_10] [i_10] [i_8] [i_11]) : (var_6)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103)))))));
                    arr_43 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 17510699804560789063ULL));
                }
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -459250078)) ? (((/* implicit */int) (short)-3248)) : (((/* implicit */int) (signed char)-41))))) ? (((/* implicit */unsigned long long int) (~(arr_35 [(unsigned short)13])))) : (arr_41 [i_0] [i_12] [i_0] [i_8] [i_0] [i_0]))))));
                    var_26 -= ((/* implicit */short) arr_3 [i_8]);
                }
                for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    arr_48 [i_0] [i_8] [i_0] [(short)16] [i_13] [i_13] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_40 [6U] [i_8] [6U] [6U]))))));
                    arr_49 [i_8] [i_10] [i_8] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_8] [i_0] [i_13])))));
                    var_27 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_1)))))) > (var_5)));
                }
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_38 [i_0] [i_0] [i_8] [(signed char)3]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [13U] [i_0])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_0))))) : ((~(arr_37 [i_10])))));
                /* LoopSeq 1 */
                for (short i_14 = 1; i_14 < 19; i_14 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) (~(arr_54 [i_14 - 1] [i_14 - 1] [i_15] [(short)6] [i_15] [i_14])));
                        var_30 += ((/* implicit */signed char) arr_40 [i_0] [i_10] [i_8] [i_0]);
                        var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)40633)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44614))) : (16810376351871818662ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned short)30773)))))));
                    }
                    for (int i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14] [i_0] = ((/* implicit */int) (~(4271430489U)));
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -166771769)) ? (13ULL) : (((/* implicit */unsigned long long int) 0U))))) ? (((((/* implicit */_Bool) arr_3 [i_14])) ? (-744846963) : (((/* implicit */int) arr_57 [i_0] [i_0] [i_10] [i_14] [i_0] [i_16 + 1])))) : (((/* implicit */int) arr_14 [i_0] [i_8] [i_0] [i_0])));
                    }
                    for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        arr_63 [(short)18] [i_8] [i_10] [i_10] [i_14] [i_8] [i_17] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29755)) ? (((/* implicit */int) arr_15 [i_14] [i_14])) : (((/* implicit */int) var_1))))) <= (arr_4 [i_14] [i_14 + 1] [i_14])));
                        var_33 ^= ((/* implicit */signed char) (unsigned short)40643);
                        var_34 += ((/* implicit */unsigned int) (signed char)-41);
                    }
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (~(var_6))))));
                    /* LoopSeq 2 */
                    for (short i_18 = 1; i_18 < 19; i_18 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_18] [i_18 + 1] [i_18] [i_18]))) % (arr_52 [i_10] [i_10] [i_10] [i_10] [i_10]))))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_18 + 1])) ? (((/* implicit */int) var_3)) : ((~(arr_36 [i_0] [i_14] [i_18 + 1]))))))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        arr_69 [i_0] [i_0] [i_14] = var_2;
                        arr_70 [i_10] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_19] [i_14] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [15] [i_8] [i_8] [i_14] [i_8] [i_8] [i_8]))) : (var_5)));
                    }
                    var_38 = var_3;
                }
            }
            var_39 *= var_0;
            arr_71 [i_8] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (arr_45 [i_8] [i_8] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        }
        for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
        {
            var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_20] [i_20] [i_20])) ? (((((/* implicit */_Bool) arr_51 [i_20] [(unsigned short)4] [(unsigned short)4] [i_20] [i_0])) ? (arr_41 [i_0] [i_20] [(unsigned char)19] [i_0] [i_20] [13ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_20] [i_20] [i_20] [i_20])))));
            var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)56460)) ? (-1032230604739873480LL) : (((/* implicit */long long int) -1328197997))));
        }
        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 4) /* same iter space */
        {
            arr_78 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)10);
            var_42 &= ((/* implicit */short) arr_39 [i_0] [i_21] [i_0] [i_0]);
        }
    }
    for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) 
    {
        arr_81 [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) -797367746)), (866526311U)))) ? (((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (806579586U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (656495385)))))));
        var_43 += ((min((((/* implicit */unsigned int) (signed char)-74)), (1979058813U))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))));
        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) min((max((((((/* implicit */_Bool) (signed char)43)) ? (656495368) : (-2147483620))), (((((/* implicit */_Bool) arr_44 [i_22] [i_22])) ? (((/* implicit */int) var_7)) : (arr_80 [i_22] [i_22]))))), (((((/* implicit */_Bool) (~(-72048944)))) ? (((((/* implicit */int) arr_50 [i_22] [i_22] [i_22] [i_22] [i_22] [(short)12])) >> (((((/* implicit */int) var_7)) - (200))))) : ((~(656495369))))))))));
    }
    var_45 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)29492))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned int) -2033866363)) > (var_5)))))) : (((/* implicit */int) var_3))));
}
