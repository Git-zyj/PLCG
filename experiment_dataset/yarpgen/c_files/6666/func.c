/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6666
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
    var_19 = (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_17))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_20 *= (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)32765))))) ? (max((4294967295U), (arr_6 [i_2] [(_Bool)1] [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)24917))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        var_21 ^= ((/* implicit */signed char) var_8);
                        arr_11 [i_1] [14LL] [i_2] [14LL] [(_Bool)1] [i_2] |= ((/* implicit */unsigned int) ((signed char) arr_8 [(_Bool)1] [i_0] [(_Bool)1] [i_3 - 3]));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_22 -= ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32766))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8367))) : (arr_6 [i_0] [i_2] [i_4 + 1]))))) >> (((/* implicit */int) max((((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), ((_Bool)0))))));
                        var_23 = ((/* implicit */unsigned int) -8989773289345786882LL);
                    }
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [i_0 + 1]))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2] [i_5 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1] [i_5 + 1])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1] [i_5 - 1]))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [(_Bool)1])) ? (arr_5 [i_0 - 1] [i_0]) : (arr_5 [i_0 + 1] [i_0])));
                        var_27 -= (_Bool)1;
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_28 = ((/* implicit */int) -8989773289345786882LL);
                        arr_21 [i_0] [i_2] [9ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)40631), (((/* implicit */unsigned short) (signed char)49)))))))))));
                    }
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))))));
                    arr_22 [i_2] [i_2] = ((/* implicit */long long int) (signed char)-9);
                    arr_23 [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_18 [i_0 - 1])))));
                }
                for (int i_7 = 3; i_7 < 14; i_7 += 4) 
                {
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (18446744073709551596ULL) : (18446744073709551615ULL))))));
                    arr_27 [i_0 + 1] [i_7 - 3] = var_18;
                    arr_28 [i_7] [i_0] [i_0] = ((/* implicit */signed char) min((min(((-(9223372036854775807LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)24919))))))), (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (short)13327))))), (((((/* implicit */_Bool) 452521136)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_32 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1)))) : (min(((-(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65515)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40619))))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 15; i_9 += 2) 
                    {
                        for (int i_10 = 1; i_10 < 14; i_10 += 3) 
                        {
                            {
                                arr_37 [i_0] [i_1] [(signed char)7] [i_9 - 1] [i_10] [i_0] [i_9 - 1] = ((/* implicit */unsigned long long int) (+(min((arr_10 [i_10] [i_9 - 2] [i_0] [i_1] [i_0]), (((/* implicit */long long int) (signed char)125))))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((((unsigned int) arr_35 [i_0 + 2] [i_1] [i_10] [i_9] [i_1] [i_8] [(signed char)12])) - (209388158U)))))) ? ((~(arr_7 [i_8 - 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_8] [i_8 - 1] [i_10] [i_8])))))));
                                var_32 += (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (short)8367)))), (((/* implicit */int) arr_18 [i_1]))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-25)) != (((/* implicit */int) arr_18 [i_0 + 2])))) && (((/* implicit */_Bool) (unsigned short)65535))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                    {
                        var_34 = ((((/* implicit */_Bool) (unsigned short)45987)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (max((((var_15) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) 1757195867U)))));
                        arr_40 [3LL] [i_8 - 1] [i_11] = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (var_3)))));
                        arr_41 [2U] [i_1] [i_8] [i_11] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)40608)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8367))) : (4294967295U)))), ((+(13286411983395361106ULL)))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        var_35 &= ((/* implicit */int) min((((/* implicit */long long int) (+((-(((/* implicit */int) arr_17 [i_0] [i_1] [i_8 - 1] [i_12 + 1] [i_1] [i_1]))))))), ((-(((((/* implicit */_Bool) 9223372036854775778LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_44 [i_0] [i_0] [(signed char)10] [i_8 - 1] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2895)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8356))) : (1073741823U)))) != (((long long int) -9223372036854775797LL)))))) & ((-(18446744073709551615ULL)))));
                        var_36 *= ((unsigned long long int) (signed char)114);
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (unsigned short)48769))));
                    }
                }
                var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0 - 1] [i_0] [i_0 + 1] [8U])) ? (((/* implicit */int) arr_26 [i_0] [i_0 + 1] [i_0 + 1] [i_1])) : (((((/* implicit */_Bool) 523142624U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) & (min((12390620854946836594ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                arr_45 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_18 [i_1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)8348))))) != (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775805LL))) + (33LL))))))));
                var_39 = (((~(((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [14]))))) & (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_40 = ((/* implicit */_Bool) ((signed char) 9223372036854775807LL));
    var_41 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483635))) + (14)))));
}
