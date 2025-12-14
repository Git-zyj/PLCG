/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67357
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
    var_16 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) 3311299219U)) ? (((/* implicit */unsigned long long int) -3232321033615250890LL)) : (var_2)))))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) var_0))))));
    var_18 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) 983668081U)) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) 749910108)))) != (((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */signed char) arr_9 [i_1] [i_1] [i_3]);
                        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_1] [i_2] [i_3]))) ? (((/* implicit */long long int) min((var_4), (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0] [i_0]))) : (-5604033646824075592LL))))), (((/* implicit */long long int) var_1))));
                    }
                } 
            } 
            arr_12 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((21ULL) & (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]))))))) ? ((~(1073741568U))) : (((((/* implicit */_Bool) (~(2147475456ULL)))) ? (3311299215U) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (3311299215U)))))));
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_21 |= (-(arr_6 [i_0] [i_4]));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_22 |= ((/* implicit */unsigned short) (signed char)109);
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) >= (max((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_1)), (var_8)))))))));
                            arr_24 [i_7] = ((/* implicit */short) var_4);
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((unsigned long long int) 3311299219U)) == (((13130367532024193619ULL) % (((/* implicit */unsigned long long int) arr_0 [i_4]))))));
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    arr_27 [i_5] [i_5] = ((((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_8] [i_8] [i_8])) == (min((arr_20 [i_4]), (((/* implicit */int) ((unsigned char) (unsigned char)254))))));
                    var_25 = ((/* implicit */signed char) ((int) var_3));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_30 [i_8] [i_4] [i_5] [i_8] [i_9] = ((/* implicit */long long int) var_3);
                        arr_31 [i_4] [i_5] [i_8] [i_9] = ((/* implicit */short) max(((-(arr_7 [i_9] [i_8] [i_5] [i_4] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_12))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (min((max((max((((/* implicit */unsigned long long int) var_11)), (3533717722280257736ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31842))) & (var_2))))), (((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
                        arr_32 [i_8] = ((/* implicit */unsigned short) ((983668081U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((arr_19 [11LL] [i_4] [10] [11LL]) ? (((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_5))));
                        var_28 += ((/* implicit */unsigned short) (signed char)37);
                    }
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_0] [i_4] [i_5] [i_8] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) 1197503553U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : (4294967295U)));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) -1883957134)), (3232321033615250889LL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_25 [i_8] [i_4] [i_5] [i_8])) < (((/* implicit */int) arr_4 [i_11] [i_5] [i_4]))))) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_7)))))));
                        var_30 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_11] [i_8] [i_5])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)112)))), (((/* implicit */int) arr_3 [i_0] [i_4] [i_5]))));
                    }
                    arr_40 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) max((min((827833730843401075ULL), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_19 [i_0] [i_4] [i_0] [i_0]), (arr_29 [i_4] [i_4])))) != (((((/* implicit */int) var_0)) % (((/* implicit */int) (short)8)))))))));
                }
            }
        }
        arr_41 [i_0] = ((/* implicit */int) (~(min((((/* implicit */long long int) ((arr_19 [i_0] [i_0] [(_Bool)1] [i_0]) ? (arr_6 [i_0] [i_0]) : (((/* implicit */int) arr_29 [i_0] [i_0]))))), (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43291)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) min((min((((6655474425390639494ULL) % (((/* implicit */unsigned long long int) -1281905155666204542LL)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [(unsigned char)7] [i_12] [i_13] [i_13]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)40))))) < (((((/* implicit */int) (unsigned short)9)) % (((/* implicit */int) arr_17 [i_0] [i_0] [i_12] [i_13])))))))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0])), (var_2))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                arr_51 [i_12] |= ((/* implicit */short) var_9);
                                arr_52 [i_0] [i_12] [i_0] [i_14] [i_13] = ((/* implicit */_Bool) var_3);
                                arr_53 [i_15] [i_13] [(unsigned short)24] [i_13] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((4560459463771647396ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_13] [i_13] [i_0])))))) < (((((/* implicit */int) var_12)) % (111868298))))) ? (((/* implicit */int) min((arr_3 [i_15] [i_13] [i_0]), (((/* implicit */short) arr_9 [i_12] [i_13] [i_14]))))) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_0] [i_12])) == (((/* implicit */int) arr_44 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_16 = 1; i_16 < 21; i_16 += 3) 
        {
            for (signed char i_17 = 2; i_17 < 24; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    {
                        arr_60 [(unsigned char)16] [(unsigned char)16] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0]))) : (4816740999970245943LL)));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_0)) % (((/* implicit */int) arr_44 [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_16] [24]))))) ? (((/* implicit */unsigned long long int) (~(arr_42 [i_16 + 4] [i_16 + 3] [i_16 - 1])))) : ((~((~(var_2)))))));
                        arr_61 [i_17] [i_17] [i_16] [i_17] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_16 + 2] [i_16])) : (((/* implicit */int) var_7)))), (((/* implicit */int) min(((unsigned char)30), ((unsigned char)21)))))), ((+(((/* implicit */int) var_9))))));
                        /* LoopSeq 4 */
                        for (int i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
                        {
                            arr_64 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-90))));
                            arr_65 [i_0] [i_16 + 3] [i_0] [i_0] [i_19] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(-3092164856402395577LL)))) == (max((min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_18 [i_0] [i_16] [i_17] [(_Bool)1]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (arr_25 [i_0] [i_16 + 3] [i_18] [i_16 + 3]))))))));
                        }
                        for (int i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
                        {
                            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 9LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6430))) : (23LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (_Bool)0)))))))))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((arr_9 [i_20] [i_18] [i_17]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -23LL)))) : (min((((/* implicit */unsigned long long int) -4816740999970245950LL)), (3419783742180513232ULL))))))));
                            var_36 = ((/* implicit */_Bool) arr_14 [i_17 + 1] [i_16 + 1] [i_16 + 1]);
                            arr_69 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_20] [i_20] [i_20])) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_17 - 2] [i_16 + 1] [i_18])) ? (arr_18 [i_18] [i_17 - 1] [i_16 + 4] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_17 - 1] [i_16 + 2] [i_17 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-632086938) >= (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) ((2197872471801811604LL) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_16] [(short)18] [i_16] [i_16]))))))))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_18] [i_17]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_63 [i_0] [i_0] [14LL] [i_17] [i_18] [i_18] [i_18]), (((/* implicit */short) (_Bool)1)))))) : (((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                            var_38 |= ((/* implicit */long long int) arr_56 [i_16 - 1] [i_17] [i_17 - 2] [i_17 + 1]);
                            arr_72 [i_0] [i_16] [i_16 + 4] [i_16] [i_0] [i_18] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)12537)) >= (((/* implicit */int) (signed char)10))));
                        }
                        /* vectorizable */
                        for (long long int i_22 = 0; i_22 < 25; i_22 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((+(3311299219U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)230)))))));
                            var_40 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                        }
                    }
                } 
            } 
        } 
    }
}
