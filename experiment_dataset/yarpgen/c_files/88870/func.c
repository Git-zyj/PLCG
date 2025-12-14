/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88870
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
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 652072664U)) ? ((~(((/* implicit */int) var_18)))) : (((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_2 [i_0 + 2]);
        var_21 = ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 - 1]));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (arr_4 [i_1] [i_0] [i_0 - 2]) : (((/* implicit */int) (signed char)-34))))) * (arr_2 [i_0 - 4])));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) var_18);
                var_23 = ((/* implicit */unsigned int) var_9);
            }
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (((~(750902643U))) / (((/* implicit */unsigned int) var_14)))))));
                        var_25 = ((/* implicit */unsigned short) ((int) (~(750902643U))));
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))));
                    }
                    var_27 &= ((/* implicit */unsigned char) var_1);
                }
                for (short i_6 = 2; i_6 < 18; i_6 += 3) 
                {
                    arr_20 [i_1] [i_1] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [6ULL] [i_1] [(signed char)14]))))) & (((arr_13 [i_0 - 4] [i_1] [i_0 - 4] [i_6] [i_1] [i_6]) ? (((/* implicit */unsigned long long int) arr_10 [i_1])) : (var_11)))));
                    var_28 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (arr_2 [i_0 - 3])));
                }
                for (unsigned short i_7 = 3; i_7 < 16; i_7 += 1) 
                {
                    var_29 *= ((/* implicit */unsigned int) var_15);
                    arr_23 [i_0 - 2] [i_1] [16] = ((/* implicit */unsigned short) ((unsigned char) var_8));
                }
                arr_24 [i_0] [i_1] [i_0] [(_Bool)1] = ((arr_6 [i_0] [i_1]) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_10)));
                arr_25 [i_3] [i_1] [i_1] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 - 3] [i_0 - 1] [i_0 + 2]))) / (((long long int) arr_19 [(unsigned short)6] [i_1] [i_1] [i_3]))));
            }
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_8] [i_1] [i_1] [i_9])) ? ((+(((/* implicit */int) (short)32767)))) : (((((/* implicit */int) (unsigned short)4197)) * (((/* implicit */int) var_5))))));
                        var_31 |= arr_1 [i_0 + 2];
                    }
                    for (signed char i_11 = 4; i_11 < 18; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((arr_19 [i_0] [i_1] [i_8] [i_9]) ? (((/* implicit */int) arr_30 [i_0 + 1] [i_0 + 1] [i_8] [i_9] [i_11] [i_0 + 1])) : (((/* implicit */int) arr_3 [(short)2] [(short)2]))))) < (((unsigned int) var_18))));
                        var_33 = ((/* implicit */int) (~(((750902643U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        var_34 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9109319254705134100LL)) ? (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_1] [i_8] [i_9] [i_11])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((_Bool) var_15))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))));
                        arr_35 [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_1] [(short)9] [i_0 - 4] [i_11 - 3])) < (((/* implicit */int) arr_30 [i_11 - 4] [i_11 + 1] [(unsigned short)19] [i_1] [i_0 - 1] [i_0 - 2]))));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_6 [i_8] [i_1]))) || ((!(((/* implicit */_Bool) var_7))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_39 [i_0 - 3] [i_1] [i_8] [i_9] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
                        var_36 = ((/* implicit */unsigned char) (~(arr_2 [i_0 - 1])));
                    }
                    var_37 -= ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_0 - 4] [i_0 + 2] [i_0] [(unsigned char)8] [i_0] [i_0] [i_0]))));
                    var_38 = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_0 - 1]));
                }
                for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    var_39 = ((/* implicit */signed char) var_0);
                    /* LoopSeq 1 */
                    for (int i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        arr_44 [i_1] [i_1] = ((unsigned char) ((-9109319254705134104LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-71)))));
                        arr_45 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_8] [i_14 - 2] [i_14] [i_0 + 2])) < (((/* implicit */int) arr_14 [i_0 - 4] [i_0 + 1]))));
                    }
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_26 [i_0] [i_0 - 2] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 4]))));
                }
                var_41 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_36 [i_0 - 2] [(signed char)2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))));
            }
            var_42 = ((/* implicit */signed char) (-(arr_2 [i_0 - 4])));
        }
        var_43 = ((/* implicit */unsigned long long int) (-(var_14)));
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 1) 
    {
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)15761), (((/* implicit */short) (unsigned char)147))))) ? (((((/* implicit */_Bool) arr_47 [i_15])) ? (((/* implicit */int) arr_47 [i_15])) : (((/* implicit */int) arr_47 [(unsigned char)3])))) : (((((/* implicit */int) arr_47 [i_15])) >> (((((/* implicit */int) arr_47 [i_15])) - (47372)))))));
        var_45 = ((/* implicit */signed char) arr_47 [i_15]);
        var_46 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [(short)10]))))) ? (max((((/* implicit */int) var_7)), (arr_46 [i_15]))) : (((int) arr_47 [(unsigned short)15])))) + (2147483647))) >> (((((/* implicit */int) var_7)) + (28)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            arr_50 [i_15] [i_16] = ((/* implicit */unsigned long long int) (-(var_3)));
            arr_51 [i_15] [i_16] [i_16] = ((/* implicit */int) (~(arr_49 [i_16])));
        }
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_46 [i_15])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) ((_Bool) (unsigned short)4214)))));
            /* LoopSeq 1 */
            for (int i_18 = 1; i_18 < 22; i_18 += 1) 
            {
                arr_58 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_18 - 1] [i_18 + 3] [i_18 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_47 [i_18 + 1]))));
            }
            var_49 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_15])) ? (arr_48 [i_15] [i_15] [i_15]) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)113))) | (-9109319254705134104LL)))));
        }
        var_50 = (!(((/* implicit */_Bool) (~(arr_48 [i_15] [i_15] [i_15])))));
    }
}
