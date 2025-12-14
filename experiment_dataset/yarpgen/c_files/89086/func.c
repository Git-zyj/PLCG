/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89086
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), (var_14))))) % (max((3758400993U), (((/* implicit */unsigned int) (short)-19276))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 536566307U)) ? (536566298U) : (3758400990U)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_21 &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) >= (((((/* implicit */_Bool) 6344292528853424711LL)) ? (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [(_Bool)1])) : (536566303U))))))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    var_22 ^= ((/* implicit */short) max((((((/* implicit */_Bool) (~(1969810427)))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (short)-12058)) : (((/* implicit */int) (signed char)40)))) : ((~(1928212844))))), (((/* implicit */int) var_0))));
                    var_23 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 2095510031)) ? (10) : (((int) (short)-25153)))));
                }
                for (short i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned int) ((unsigned short) -8791807195823140212LL));
                                var_25 = ((/* implicit */signed char) min((((((/* implicit */long long int) 3758400993U)) | (2LL))), (((/* implicit */long long int) var_3))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-13)), (var_5)))))))) * (536566307U)));
                                var_27 = (!(((/* implicit */_Bool) ((int) (short)25172))));
                                var_28 += ((/* implicit */long long int) arr_1 [i_3] [i_1 + 1]);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) var_9);
                }
                /* LoopSeq 1 */
                for (long long int i_6 = 3; i_6 < 10; i_6 += 4) 
                {
                    var_30 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((17592186044415LL) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [3U] [i_1])))))) ? (((/* implicit */int) ((_Bool) arr_14 [(short)10] [(short)10]))) : (((/* implicit */int) arr_10 [i_6 + 2]))))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) * (645387091U))), (((/* implicit */unsigned int) arr_5 [i_6 - 1] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1969810427)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)186))))));
                    var_31 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3U)))) ? (max((arr_9 [i_6 - 3] [i_1] [i_1 + 1] [i_0]), (((/* implicit */unsigned int) arr_4 [i_0] [i_1 - 3])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [0] [i_1]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_18 [i_0])), (-14LL)))) ? (((/* implicit */int) max((arr_10 [i_6]), (((/* implicit */signed char) var_17))))) : (((((((/* implicit */int) (short)-18735)) + (2147483647))) << (((((/* implicit */int) var_2)) - (1)))))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) ((536566286U) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_14))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8])) | (var_13)));
                            var_35 = ((/* implicit */long long int) arr_18 [i_0]);
                            var_36 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_7] [i_7])) ? (((/* implicit */int) arr_7 [i_6 - 2] [i_6 - 2] [i_7])) : (((/* implicit */int) arr_21 [(unsigned char)1] [(unsigned char)1] [i_6 - 3] [(unsigned char)1]))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_13)) & (arr_0 [i_1 - 3])));
                        }
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_6 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_9] [i_6 - 1])) ? (((/* implicit */int) arr_1 [i_1] [i_6 - 3])) : (((/* implicit */int) arr_1 [i_0] [i_6 + 1])))) : (((/* implicit */int) arr_1 [(signed char)5] [i_6 + 1])))))));
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_17 [i_9] [i_6 - 1] [i_0] [i_0])), (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & (536566330U))) >> (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)41)))))))))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_1 + 1] [i_1] [i_0] [i_1] [i_7] [i_7]))))) && (((((/* implicit */_Bool) arr_0 [i_1 - 1])) && (((/* implicit */_Bool) arr_0 [i_1 + 2]))))));
                            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) arr_24 [i_7] [i_6] [i_6 - 1] [i_9] [i_9] [i_0]))));
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) arr_25 [i_6] [i_6] [i_6] [i_0] [i_7 + 2]))));
                        }
                        var_43 += ((/* implicit */unsigned short) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) arr_26 [i_11] [i_10] [i_1] [i_1] [i_0]))));
                                arr_31 [i_0] [(unsigned char)2] [i_6 - 3] [i_10] [i_11] &= ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 93943929206920916LL)))))))) ? (((((/* implicit */_Bool) (short)-25172)) ? (((/* implicit */int) arr_23 [i_1 - 2] [i_1] [i_11] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_23 [i_1 - 1] [i_1] [8] [i_1] [i_11])))) : (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (_Bool)1))))));
                                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (short)-25197)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [(unsigned short)8] [i_1 + 2] [i_6] [i_10])))))))));
                                var_46 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [(short)6]);
                            }
                        } 
                    } 
                    var_47 += ((/* implicit */_Bool) 2416202845339238937LL);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
    {
        arr_34 [i_12] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_12])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_12] [i_12] [i_12] [i_12])) * (26)))) ? (((/* implicit */int) max((arr_7 [i_12] [i_12] [i_12]), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_12] [i_12] [7LL])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (_Bool)1))))))));
        var_48 += ((/* implicit */_Bool) var_19);
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_14 = 4; i_14 < 11; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    var_49 = ((/* implicit */short) var_13);
                    var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (-(((/* implicit */int) (short)25197)))))));
                    arr_45 [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_43 [i_14 - 1]))));
                    arr_46 [i_15] [i_14] [i_13] = ((/* implicit */signed char) arr_43 [i_13]);
                }
            } 
        } 
        var_51 += ((/* implicit */unsigned short) arr_28 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        var_52 -= ((0LL) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (536566309U)))));
    }
}
