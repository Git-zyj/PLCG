/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78902
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) (signed char)111)) ? (arr_0 [i_0]) : (((/* implicit */int) (short)27255)))))), (-1027778893)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */int) ((arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 1]) == (((/* implicit */unsigned long long int) ((var_0) | (arr_2 [i_0] [i_0] [i_0])))))))));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)27280)) & (((/* implicit */int) (short)15872))))) ? (min((-1027778901), (arr_0 [i_0 - 3]))) : (-1831540424)));
            arr_4 [i_0 - 1] [i_1] [i_0] = 1033007152U;
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_20 = arr_2 [i_0] [i_1] [i_0];
                var_21 = ((/* implicit */int) var_1);
                arr_7 [i_0] = ((/* implicit */_Bool) ((int) min((var_3), (((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 2] [i_0 - 2])))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */int) min((((short) (-9223372036854775807LL - 1LL))), ((short)27255)))), (((((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) (short)-27284))))) << (((((2788480097U) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775807LL))) + (31LL))))) - (1073741820U))))))))));
            }
            for (int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((arr_3 [i_0] [i_1] [i_3]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-27255))))))))));
                arr_11 [i_0] [i_1] [i_1] [i_3] = arr_1 [i_3];
                var_24 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_3]);
                var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (647457440)))) : (((var_15) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_3]))))))));
            }
        }
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned int) arr_3 [i_0] [i_4] [i_4]);
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                arr_17 [i_0] = ((((/* implicit */_Bool) max((15636070441269044341ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0 - 3] [i_0 + 2]))) + (1750041484U)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11))));
                var_27 = ((/* implicit */unsigned char) max((min((((/* implicit */int) (short)27280)), (var_0))), ((~(((/* implicit */int) var_13))))));
            }
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) << ((((-(((/* implicit */int) (_Bool)1)))) + (21)))))) || (((/* implicit */_Bool) ((1627462019) % (1027778892))))));
        }
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0 - 3] [i_0]), (((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_0] [(short)5])))))) ? (min((arr_12 [(_Bool)1]), ((~(((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */int) ((arr_2 [i_0] [i_0 + 1] [i_0]) == (((/* implicit */int) (short)-15873))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (long long int i_6 = 3; i_6 < 19; i_6 += 4) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */_Bool) (-(9459109104239065132ULL)));
        var_30 = ((/* implicit */unsigned int) var_14);
        arr_23 [i_6] [i_6] = ((/* implicit */int) var_14);
        arr_24 [i_6] = ((/* implicit */int) ((1141173407U) << (((254U) - (230U)))));
    }
    for (int i_7 = 1; i_7 < 16; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_6))) ? (min((arr_3 [i_7 + 1] [8U] [i_9]), (((/* implicit */unsigned long long int) (unsigned char)61)))) : (((/* implicit */unsigned long long int) ((unsigned int) max(((short)-27255), (((/* implicit */short) (_Bool)1))))))));
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_19 [i_7 + 1]))));
                var_33 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (705789300U)));
            }
            arr_33 [i_8] = (~(((((int) var_7)) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_7] [i_8] [i_7] [i_7]))))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                var_34 = ((/* implicit */_Bool) max((var_34), ((!(arr_14 [i_7] [i_7] [(_Bool)1])))));
                arr_38 [i_7] [i_8] [i_8] [1U] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)127)))) | (((unsigned long long int) 536862720ULL))))));
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    arr_41 [i_10] [i_8] [i_10] [i_11] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((arr_9 [i_7] [i_10] [i_11]) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_14)))) + (2147483647))) >> (((/* implicit */int) arr_5 [i_10] [i_8] [i_7 - 1]))))) | (var_11)));
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8] [i_8]))) / (((unsigned int) ((((/* implicit */_Bool) arr_18 [i_12])) || (((/* implicit */_Bool) arr_21 [(short)20] [(short)20])))))));
                        var_36 = ((/* implicit */unsigned long long int) (!(((_Bool) (signed char)96))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */signed char) min(((short)27280), (((/* implicit */short) ((_Bool) (unsigned char)175)))));
                        arr_46 [i_13] [i_13] [i_8] [i_11] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-32741)), (((((/* implicit */int) (short)-32757)) ^ (((/* implicit */int) var_13))))))) + (8182782518011468346ULL)));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */int) var_12);
                        arr_49 [i_8] [i_14] [i_14] [i_14] [i_14] [i_14] [(short)13] = ((/* implicit */signed char) (~(-1953843059)));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 1098974756864LL)))) <= (((unsigned int) (-(arr_1 [i_7]))))));
                        var_40 = ((/* implicit */unsigned int) var_4);
                    }
                    var_41 += ((/* implicit */unsigned char) max((((/* implicit */short) (_Bool)1)), ((short)-27256)));
                    var_42 = ((/* implicit */short) max((((long long int) ((((/* implicit */_Bool) 16998160543314853750ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [i_10]))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
                }
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */long long int) var_6);
                    arr_54 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_7 + 1] [13ULL] [13ULL])) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -1881506108)) ? (var_2) : (((/* implicit */unsigned long long int) var_0))))))) ? (max((min((arr_48 [i_7] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) arr_34 [i_7] [i_8] [i_10] [i_8])))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32757))) > (var_12)))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
                }
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
                {
                    arr_57 [i_7] [i_7] [i_8] [i_7 + 1] [i_7] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-32741)))))) >= (arr_29 [i_7 - 1] [i_8])));
                    /* LoopSeq 2 */
                    for (short i_17 = 2; i_17 < 16; i_17 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) (!(arr_16 [i_7] [i_7 - 1] [i_17 + 1]))))));
                        var_45 -= ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_28 [i_7 + 1] [i_8] [i_10])) % (681807066U)))) <= (var_10))), (((var_0) <= (((/* implicit */int) var_16))))));
                        arr_60 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_16] [i_8] = ((/* implicit */unsigned int) ((unsigned char) var_9));
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 15; i_18 += 1) 
                    {
                        var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_8])) ? (arr_48 [i_8] [i_8] [i_8] [(signed char)3] [(signed char)3]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) != (var_2))))));
                        arr_64 [i_7] [i_8] [i_10] [i_8] [i_16] [i_16] [i_18 - 1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_3)))))) ? (min(((((_Bool)1) ? (3823778208U) : (var_7))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3736884613U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)32767)) ? (2751252909U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        arr_65 [i_7 - 1] [i_7 - 1] [i_8] [(unsigned char)6] [i_7] = ((/* implicit */long long int) var_4);
                    }
                }
                var_47 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)2001)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_16 [i_7] [i_8] [i_10])), (var_7)))) : (arr_3 [i_7 + 1] [i_8] [i_10]))));
                var_48 = (i_8 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) << (((arr_40 [i_8] [i_7] [i_7 + 1]) - (814063977U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) -1531401870)))))) : (((var_4) >> (((arr_40 [i_8] [i_7 - 1] [i_7 + 1]) - (814063957U)))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) << (((((arr_40 [i_8] [i_7] [i_7 + 1]) - (814063977U))) - (621949343U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) -1531401870)))))) : (((var_4) >> (((((arr_40 [i_8] [i_7 - 1] [i_7 + 1]) - (814063957U))) - (621949339U))))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_68 [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) 0U);
                arr_69 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_36 [3U] [13])) & (arr_1 [i_7 - 1])));
            }
        }
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
        {
            arr_74 [i_20] = ((/* implicit */int) (!(((arr_73 [i_20 - 1]) != (arr_73 [i_20 - 1])))));
            var_49 &= ((/* implicit */long long int) (-2147483647 - 1));
        }
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
        {
            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (1531401870)))) ? (((/* implicit */int) arr_50 [i_21] [i_21 - 1])) : (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (_Bool)1)) : ((~(arr_53 [i_7] [i_21] [i_7])))))));
            /* LoopSeq 2 */
            for (int i_22 = 3; i_22 < 16; i_22 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_7 + 1] [i_7 - 1] [i_7 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_62 [i_7] [i_7] [i_7] [i_22])) * (((/* implicit */int) (_Bool)1))))) : (3589178002U))))));
                arr_80 [i_21] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)-12)), (2077917185)))) : (var_12))) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            }
            for (int i_23 = 3; i_23 < 16; i_23 += 1) /* same iter space */
            {
                var_52 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((min((var_4), (((/* implicit */unsigned long long int) arr_62 [i_7] [(_Bool)1] [i_7] [i_7])))) <= (((/* implicit */unsigned long long int) min((arr_72 [i_7 - 1] [i_21] [i_23 - 3]), (((/* implicit */long long int) (_Bool)1))))))))));
                arr_83 [i_7] [i_21] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */long long int) -1531401870)) - (arr_36 [i_7 - 1] [i_21])))) ? (min(((((_Bool)1) ? (((/* implicit */unsigned int) 2077917185)) : (4012897970U))), (((/* implicit */unsigned int) (!((_Bool)0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_70 [i_23 - 2] [i_7 - 1]), (arr_70 [i_23 + 1] [i_7 + 1]))))));
                var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) var_11))));
            }
        }
        /* LoopSeq 1 */
        for (int i_24 = 0; i_24 < 17; i_24 += 2) 
        {
            var_54 = ((/* implicit */int) min((var_54), (var_15)));
            var_55 = ((/* implicit */unsigned int) ((var_2) == (((/* implicit */unsigned long long int) min((178122489948947842LL), (((/* implicit */long long int) (_Bool)1)))))));
            arr_86 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) -98426569206269790LL);
        }
    }
    var_56 = ((/* implicit */long long int) (((+(min((var_10), (((/* implicit */unsigned long long int) var_13)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
}
