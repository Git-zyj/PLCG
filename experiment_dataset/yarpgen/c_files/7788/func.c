/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7788
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)39119)), (((((/* implicit */_Bool) (unsigned short)39142)) ? (arr_2 [i_2 - 1] [i_0 + 1]) : (arr_2 [i_2 - 2] [i_0 + 2])))));
                    var_12 &= ((/* implicit */signed char) ((var_4) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2] [i_1 + 1]))) : (arr_2 [i_0] [i_2 - 2]))))));
                    arr_7 [i_1 + 2] [i_2 - 2] = (-(((((/* implicit */int) var_6)) % (min((((/* implicit */int) arr_5 [i_2 + 1] [i_1 - 3] [i_2 + 1] [i_2 - 3])), (var_9))))));
                }
            } 
        } 
        var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min(((unsigned short)36841), (((/* implicit */unsigned short) (signed char)-1))))) ? (max((arr_2 [i_0] [i_0 - 2]), (((/* implicit */unsigned int) (unsigned char)245)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)75), (var_5)))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_14 -= ((/* implicit */_Bool) (~(arr_9 [i_3])));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7782913150607095863LL)) ? (((/* implicit */int) arr_11 [i_3] [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) arr_11 [i_3] [i_4] [i_5 + 1]))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_3] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_4]))));
                    var_17 ^= arr_9 [i_4];
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)26388)) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)247)) != (((/* implicit */int) arr_11 [i_3] [i_3] [i_3])))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) (+(arr_9 [i_3])));
        var_19 = ((/* implicit */unsigned int) (unsigned short)28686);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 1345292172)), (min((((/* implicit */unsigned int) (unsigned short)26394)), (arr_13 [i_6] [i_6] [i_6] [i_6])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(arr_13 [i_6] [i_7] [i_8 + 1] [i_8 - 1]))))));
                            arr_30 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)26417)) ? (((/* implicit */int) arr_18 [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246)))))));
                            arr_31 [i_6] [i_7] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_10] = ((/* implicit */unsigned short) (unsigned char)207);
                            var_21 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_9 + 1]))));
                        }
                    } 
                } 
            } 
            arr_32 [i_6] [i_6] [i_6] = ((/* implicit */signed char) arr_26 [i_6] [i_6] [i_6] [i_6] [i_7]);
        }
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            for (int i_12 = 2; i_12 < 17; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) arr_36 [i_11] [i_12 - 2] [i_12 - 2]);
                        var_23 = ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_14 = 3; i_14 < 17; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_39 [i_6] [i_6] [i_6] [i_6] [i_15]), (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28683)) ^ (((/* implicit */int) arr_36 [i_6] [i_6] [i_15]))))))) ? (((/* implicit */unsigned long long int) ((int) -7782913150607095846LL))) : (max((((/* implicit */unsigned long long int) var_0)), (arr_39 [i_15] [i_14 - 3] [i_15] [i_14 - 3] [i_14 - 3])))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        for (unsigned char i_17 = 1; i_17 < 18; i_17 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_18 [i_6])) >> (((((/* implicit */int) arr_26 [i_17 - 1] [i_16] [i_15] [i_14 - 1] [i_6])) - (53934))))) : (((/* implicit */int) ((signed char) min((arr_37 [i_6] [i_6] [i_6]), (((/* implicit */unsigned short) arr_41 [i_6] [i_15]))))))))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) max((arr_42 [i_14] [i_17 + 1] [i_14]), (arr_42 [i_6] [i_17 - 1] [i_17 - 1])))) ^ (((/* implicit */int) max((arr_42 [i_15] [i_17 - 1] [i_17 - 1]), (arr_42 [i_17 - 1] [i_17 - 1] [i_17 - 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 4) 
    {
        arr_54 [i_18 - 1] [i_18 + 1] = ((/* implicit */int) ((min((arr_47 [i_18] [i_18 - 1] [i_18 - 1] [i_18 - 1]), (((/* implicit */int) (unsigned short)36841)))) < (max((((((/* implicit */int) arr_36 [i_18 + 1] [i_18 + 1] [i_18 + 1])) | (((/* implicit */int) (short)-6066)))), (((/* implicit */int) min((arr_53 [i_18 + 1]), (((/* implicit */unsigned short) var_0)))))))));
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_18 - 1] [i_18 + 1])) ? (((/* implicit */int) arr_23 [i_18 + 1] [i_18 + 1])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_23 [i_18 - 1] [i_18 - 1])));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_18] [i_18 + 1] [i_18 + 1])) << (((((-1) + (24))) - (14)))))) ? (((/* implicit */int) min(((short)29012), (((/* implicit */short) arr_18 [i_18 - 1]))))) : (((((/* implicit */int) min(((unsigned char)24), ((unsigned char)17)))) - (((((/* implicit */int) arr_41 [i_18 + 1] [i_18 + 1])) ^ (((/* implicit */int) var_6))))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_18] [i_18 - 1])) - (((/* implicit */int) (unsigned char)68))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_59 [i_19] = ((/* implicit */unsigned char) arr_47 [i_19] [i_19] [i_19] [i_19]);
        /* LoopSeq 2 */
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_19] [i_19] [i_19] [i_19])) && (((/* implicit */_Bool) var_10))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_64 [i_19] [i_19] [i_19])) >= (((/* implicit */int) arr_19 [i_19]))));
                var_32 += ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-26412))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30720))) == (380330042U)))) : (((/* implicit */int) (signed char)-76)));
                arr_66 [i_21] = ((/* implicit */unsigned char) arr_39 [i_19] [i_19] [i_20] [i_20] [i_19]);
            }
            for (short i_22 = 0; i_22 < 16; i_22 += 2) 
            {
                var_33 &= ((/* implicit */signed char) arr_57 [i_19]);
                arr_71 [i_19] [i_20] = (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_19] [i_20] [i_19] [i_22] [i_22])) >= (((/* implicit */int) (unsigned char)59)))) ? ((-(-9223372036854775800LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95)))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_23 = 0; i_23 < 16; i_23 += 4) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (short i_25 = 1; i_25 < 15; i_25 += 3) 
                    {
                        {
                            arr_79 [i_23] [i_24] [i_20] [i_20] [i_23] &= ((/* implicit */short) (signed char)95);
                            arr_80 [i_25 + 1] [i_24] [i_24] [i_24] [i_19] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_68 [i_25 - 1] [i_25 + 1] [i_25 + 1] [i_25 + 1])) && (arr_49 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1])))), (min((((/* implicit */unsigned short) arr_49 [i_20] [i_25 - 1] [i_25 + 1] [i_25 - 1])), (arr_68 [i_25 + 1] [i_25 - 1] [i_25 - 1] [i_25 + 1])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_26 = 0; i_26 < 16; i_26 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_27 = 2; i_27 < 13; i_27 += 3) 
            {
                for (unsigned short i_28 = 0; i_28 < 16; i_28 += 4) 
                {
                    {
                        var_34 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_26] [i_27 + 2] [i_26]))));
                        var_35 = ((/* implicit */signed char) var_1);
                        arr_90 [i_27 - 2] = max((((/* implicit */unsigned long long int) min((((arr_42 [i_26] [i_26] [i_26]) ? (3011219953U) : (((/* implicit */unsigned int) arr_76 [i_27] [i_26] [i_19] [i_28] [i_28] [i_28] [i_27 + 2])))), (((3011219953U) >> (((((/* implicit */int) var_3)) - (49)))))))), (((min((((/* implicit */unsigned long long int) arr_28 [i_19] [i_26] [i_27 + 3] [i_28])), (arr_12 [i_19] [i_19] [i_28]))) / (((/* implicit */unsigned long long int) arr_13 [i_27 - 1] [i_27 - 2] [i_26] [i_19])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (unsigned long long int i_30 = 3; i_30 < 12; i_30 += 3) 
                {
                    for (long long int i_31 = 0; i_31 < 16; i_31 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned int) arr_75 [i_19] [i_31] [i_29] [i_31] [i_31] [i_30 + 1])) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)39136)) < (((/* implicit */int) arr_96 [i_19] [i_29] [i_19] [i_29] [i_31]))))))))) : ((+(arr_78 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])))));
                            arr_97 [i_29] [i_30 + 2] [i_29] [i_29] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)3)) << (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_49 [i_19] [i_19] [i_19] [i_19])), ((unsigned char)9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)11))))) : (((/* implicit */int) arr_64 [i_19] [i_19] [i_29]))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (unsigned short)39119))));
        }
    }
}
