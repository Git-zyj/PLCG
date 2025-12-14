/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73826
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned long long int) (+(((arr_0 [i_0 + 1]) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 6471215721425170884ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-11175))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_5 [i_1]))) ? (((/* implicit */unsigned long long int) (~(-6290220332234865558LL)))) : (min((6471215721425170866ULL), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), (arr_6 [i_0] [i_0 - 1] [i_0 - 1]))))))));
                arr_8 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */unsigned long long int) 0U)) : (6881503468494941133ULL)));
                var_17 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (var_5))))))));
            }
            arr_9 [i_0] [i_0 - 1] [i_1] = ((((/* implicit */int) (unsigned char)30)) % (((/* implicit */int) (short)11163)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned long long int) ((min((6290220332234865558LL), (5735513829056609195LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1])))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned short) (short)11551);
                        arr_18 [i_0] [i_5] = ((/* implicit */unsigned short) 7806795120304930156LL);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            arr_21 [i_0] [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_3 [i_6] [i_4] [i_0]))))));
                            arr_22 [i_6] [i_5] [i_4] [i_5] [i_0 + 1] = ((((_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_3] [i_5 + 1] [i_6])))) : (arr_19 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]));
                        }
                        for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_3] [i_0] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */short) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) ((-2147483639) != (((/* implicit */int) arr_20 [i_0] [i_3] [i_7] [i_5 + 1] [i_7] [i_5] [i_0]))))) <= ((+(((/* implicit */int) (_Bool)0)))))))));
                            var_19 = ((/* implicit */short) min((min((((((/* implicit */int) arr_5 [i_0 - 1])) % (((/* implicit */int) arr_4 [i_5])))), (((((/* implicit */int) (signed char)4)) - (((/* implicit */int) arr_6 [i_4] [i_4] [i_0])))))), ((~(((((/* implicit */int) arr_16 [i_3])) & (((/* implicit */int) arr_16 [i_5 + 1]))))))));
                            arr_28 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) 16057838554730000585ULL);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_20 += ((/* implicit */unsigned long long int) (+((-2147483647 - 1))));
                            arr_33 [i_5 + 1] [i_8] [i_8] [i_8] [i_8] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) / (-6290220332234865558LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])) + (arr_29 [i_8] [i_8] [i_8] [i_4] [i_8] [i_0]))))));
                        }
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned short i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
        {
            arr_36 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_9] [i_0 + 1] [i_9 - 2]))) == (((((/* implicit */_Bool) (short)5862)) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) 2035532073))) > (min((arr_31 [i_9] [i_9 - 2] [i_0] [i_0 - 1] [i_0 + 1] [i_0]), (((/* implicit */unsigned long long int) 7806795120304930156LL)))))))));
            var_22 += ((/* implicit */unsigned char) (-((-((~(3118098129U)))))));
        }
        for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) /* same iter space */
        {
            arr_39 [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_14))))), ((~(-7806795120304930156LL)))))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_30 [i_0] [i_10] [i_0 - 1] [i_0]))))) ? (max((7933529117756121919ULL), (((/* implicit */unsigned long long int) arr_25 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0])))) : ((+(arr_14 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))))), (min((arr_34 [i_0 + 1] [i_10 + 1]), (arr_34 [i_0 - 1] [i_10 - 1]))))))));
            arr_40 [i_10] [i_0] [i_0 - 1] |= ((/* implicit */long long int) (unsigned short)0);
        }
        arr_41 [i_0] = (~(((/* implicit */int) var_6)));
    }
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        arr_44 [i_11] = ((/* implicit */unsigned char) ((min((arr_43 [i_11]), (((arr_43 [i_11]) | (((/* implicit */unsigned long long int) 1443946401U)))))) | (((unsigned long long int) var_13))));
        arr_45 [i_11] = ((/* implicit */int) 4294967269U);
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((10ULL), (((/* implicit */unsigned long long int) arr_46 [i_12] [i_12])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) -401476581)))))))))) : (((unsigned long long int) arr_47 [i_12]))))));
        arr_49 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6290220332234865548LL)) ? (((/* implicit */int) (signed char)44)) : (((((/* implicit */_Bool) -8198006495728102701LL)) ? (((/* implicit */int) (signed char)-95)) : ((-2147483647 - 1))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 11975528352284380732ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_48 [i_12])))))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            arr_52 [i_13] [i_12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((arr_50 [i_12] [i_12] [i_12]) <= (((/* implicit */int) var_9))))) / (-1369583843)))));
            arr_53 [i_12] [i_13] = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) arr_47 [i_12])) ? (var_3) : (((/* implicit */long long int) -1468804451)))))), (((/* implicit */long long int) 3563371743U))));
            /* LoopSeq 2 */
            for (int i_14 = 1; i_14 < 17; i_14 += 4) 
            {
                var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_56 [i_14 - 1] [i_14] [i_14 + 2] [i_12]))))), (min((((/* implicit */unsigned long long int) (~(1075398701)))), (arr_51 [i_14 - 1] [i_14 + 2] [i_14 + 2])))));
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1])) || (((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_12] [i_12] [i_12] [i_14 + 2])))))))))))));
                arr_58 [i_14 - 1] [i_13] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_57 [i_14 - 1] [i_12] [i_13] [i_12]))));
            }
            for (int i_15 = 1; i_15 < 15; i_15 += 4) 
            {
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)193)) ? (min((arr_56 [i_15 + 1] [i_15 + 4] [i_13] [i_12]), (arr_47 [i_13]))) : ((-(((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20267))) : (((arr_60 [i_15 + 3] [i_15 + 2] [i_15 + 4]) / (18446744073709551609ULL)))));
                var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11877725)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_51 [i_15] [i_15] [i_15])))) || ((!(((/* implicit */_Bool) arr_57 [i_12] [i_12] [i_12] [i_13])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37848)) ? (((/* implicit */int) ((short) arr_48 [i_12]))) : (-401476598))))));
            }
        }
    }
    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_10) : (var_10)))), (((((/* implicit */long long int) 4294967291U)) - (9223372036854775805LL))))), (((/* implicit */long long int) var_9)))))));
}
