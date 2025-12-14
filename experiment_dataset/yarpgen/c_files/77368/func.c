/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77368
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
    var_19 = ((/* implicit */int) 808805720U);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1389343277))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-22007)))))) > (((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (4745200685185296540ULL)))))), (min((((long long int) var_2)), (min((-1LL), (arr_0 [i_0])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 4])) ? (min((((/* implicit */long long int) (short)22002)), (-8845545980261339677LL))) : (arr_0 [i_1 + 1])))) % (((((((/* implicit */long long int) ((/* implicit */int) (short)21999))) <= (arr_0 [i_1]))) ? (((/* implicit */unsigned long long int) (+(arr_5 [i_1 + 3])))) : (((((/* implicit */unsigned long long int) var_14)) % (arr_4 [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) ((long long int) max((arr_5 [7]), (((/* implicit */unsigned int) (unsigned char)54))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min(((signed char)112), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6188981301338184087ULL)) ? (arr_3 [i_1] [i_2]) : (arr_3 [7ULL] [i_1 + 1])))) && (((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))))))))))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) (short)22002)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (+(arr_5 [i_1])))) ? ((+(3984081698U))) : (var_2)))));
        }
        for (int i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? ((+(((long long int) (_Bool)1)))) : (((/* implicit */long long int) -933976899))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-22007)) ? (((arr_9 [i_1] [i_3 + 2]) & (((/* implicit */unsigned int) (~(arr_8 [i_1] [i_1] [i_3])))))) : (((unsigned int) var_0))));
            arr_12 [i_3] [i_1 + 4] [i_3] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) -1LL)))));
        }
        var_26 = ((/* implicit */long long int) ((arr_7 [i_1] [i_1] [i_1 + 3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (short)22002)) | (var_15)))) % (((((/* implicit */_Bool) arr_15 [i_6])) ? (arr_15 [i_6]) : (arr_15 [i_6]))))))));
                arr_20 [i_6] &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) 808805745U)) ^ (((unsigned long long int) 3486161575U)))));
            }
            for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_25 [i_4 - 1] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))) == (0ULL)));
                var_28 &= 1990641726;
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_8 = 2; i_8 < 10; i_8 += 2) 
                {
                    arr_28 [i_4] [i_4 + 3] [9U] [i_5] [i_4 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_4 + 3] [i_4 + 4] [i_4 + 4] [i_8 - 2]))));
                    arr_29 [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) var_1))));
                    arr_30 [i_8] [i_5] [(unsigned char)6] [i_5] [i_5] [(_Bool)1] = ((/* implicit */signed char) (_Bool)0);
                }
                var_29 = ((/* implicit */unsigned int) min((var_29), (max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) ^ (var_2))), (((/* implicit */unsigned int) (unsigned short)42256))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    arr_33 [4] [i_5] &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (short)21996)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_14 [i_4]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 2; i_10 < 8; i_10 += 3) /* same iter space */
                    {
                        arr_36 [i_4] [i_4] [i_5] [i_7] [i_9] [i_10] = ((/* implicit */long long int) ((unsigned short) (~(933976898))));
                        var_30 = 3817443458U;
                        var_31 |= ((((/* implicit */_Bool) -933976896)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_4 + 3] [i_5] [i_7]))) : (0ULL));
                    }
                    for (unsigned int i_11 = 2; i_11 < 8; i_11 += 3) /* same iter space */
                    {
                        var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11 + 1] [i_4 - 1] [i_4 - 1] [i_4])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189)))));
                        var_33 = ((/* implicit */long long int) 10ULL);
                    }
                    /* LoopSeq 4 */
                    for (long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                    {
                        var_34 = (+(((/* implicit */int) var_16)));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (arr_7 [i_4 + 3] [5U] [i_4 + 4])));
                        arr_42 [9U] [i_5] [i_5] [i_9] [i_12] = ((/* implicit */long long int) var_6);
                        arr_43 [i_5] [i_5] [i_5] [i_7] [i_9] [i_12 + 1] = ((/* implicit */long long int) arr_4 [4LL]);
                    }
                    for (unsigned int i_13 = 1; i_13 < 9; i_13 += 2) 
                    {
                        arr_46 [(short)1] [i_9] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1)))))));
                        arr_47 [i_13] [i_9] [i_5] [i_5] [i_4] [i_4] = ((/* implicit */long long int) ((808805720U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                        arr_48 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)-46))))) ? (((/* implicit */unsigned int) 933976898)) : (((((/* implicit */_Bool) -1990641726)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (808805745U)))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) (unsigned char)255);
                        var_37 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) % (var_14))) | (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4 + 2] [i_4 + 1] [i_14] [i_5] [i_14])))));
                    }
                    for (short i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_11)) : (arr_34 [i_5])))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)7)))))));
                        arr_53 [i_4] [i_5] = ((/* implicit */unsigned char) (-(-8667427229819214438LL)));
                        var_39 = (unsigned char)214;
                        arr_54 [i_4] [i_5] [i_5] [i_9] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) 15LL))));
                    }
                    arr_55 [i_4 + 4] [i_5] [i_4] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) -1LL)) * (17290318511597299094ULL))) / (((/* implicit */unsigned long long int) ((-4026726672541959141LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))))))));
                    var_40 |= ((/* implicit */unsigned int) -1);
                }
            }
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((11423739472348998332ULL) * (max((var_18), (((((/* implicit */_Bool) -933976899)) ? (((/* implicit */unsigned long long int) -8105183136811146140LL)) : (9007198180999168ULL))))))))));
        }
        var_42 = (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_16)))))));
        arr_56 [i_4 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_11 [i_4] [i_4 - 1] [i_4]) ^ (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1614139777U)) - (-4718180491153190856LL)))) : (min((arr_40 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4]), (((/* implicit */unsigned long long int) -59090250)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_4 + 2])))));
        arr_57 [i_4] [5U] = ((/* implicit */unsigned long long int) var_11);
        var_43 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-115)) && (((/* implicit */_Bool) (signed char)-30)))))) / (min((((/* implicit */long long int) 4294967292U)), (-868976910216921533LL)))))) ? (((long long int) (+(arr_45 [i_4] [i_4 + 4] [8U] [2U] [i_4 + 3])))) : (((/* implicit */long long int) ((((arr_51 [i_4] [i_4] [4LL] [i_4 + 2] [i_4 + 2] [i_4] [i_4]) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (unsigned char)53)))) >> (((-3) + (22))))))));
    }
    for (unsigned char i_16 = 2; i_16 < 14; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((arr_58 [i_16 - 1]) / (((/* implicit */int) (signed char)-114))))) > (max((((((/* implicit */_Bool) arr_63 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) : (var_0))), (arr_64 [i_16] [i_16 - 1] [i_17]))))))));
            var_45 *= ((/* implicit */short) ((unsigned long long int) ((9965873) & (((/* implicit */int) arr_63 [i_16 - 2])))));
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_20 = 2; i_20 < 16; i_20 += 3) 
                    {
                        var_46 += max((((/* implicit */unsigned long long int) min((min(((short)-19649), (((/* implicit */short) (unsigned char)126)))), (((/* implicit */short) (signed char)119))))), (max((((/* implicit */unsigned long long int) arr_64 [i_16 + 2] [i_20 - 2] [i_20 - 1])), (((unsigned long long int) var_2)))));
                        arr_76 [i_17] [i_17] [i_18] [i_19] [i_17] = ((/* implicit */unsigned int) (+(((8105183136811146139LL) << (((1587860036) - (1587860036)))))));
                    }
                    arr_77 [i_16] [i_16 - 1] [i_16] [i_17] [i_16 + 1] [i_16 + 2] = ((/* implicit */signed char) var_9);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        arr_80 [i_21] [i_17] [i_18] [i_16 + 1] [i_17] [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (108086391056891904ULL) : (((/* implicit */unsigned long long int) -1LL)))) ^ (((/* implicit */unsigned long long int) -933976899))));
                        var_47 = arr_71 [16U] [i_19] [(_Bool)1] [i_17] [i_16];
                    }
                    /* vectorizable */
                    for (long long int i_22 = 4; i_22 < 14; i_22 += 2) 
                    {
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-32)) ? (((7023004601360553283ULL) + (((/* implicit */unsigned long long int) 2490120441700698545LL)))) : (11423739472348998333ULL))))));
                        arr_85 [i_17] [i_17] [i_18] [i_19] [i_22] = ((/* implicit */unsigned char) arr_66 [i_16 - 2] [i_17] [i_16 - 2]);
                    }
                    for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        arr_88 [i_16] [i_17] [i_18] [i_19] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) arr_84 [i_16] [i_17] [i_17] [i_16])) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) 6430353115804554345LL)) : (18338657682652659712ULL)))))))));
                        var_49 ^= ((/* implicit */_Bool) -9965874);
                    }
                    var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_73 [i_17] [i_19]))))));
                }
                var_51 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) << (((min((((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */unsigned int) 9965873))))), (max((((/* implicit */unsigned long long int) (unsigned short)19550)), (arr_79 [i_16 + 1] [i_16] [i_17] [7U]))))) - (1366243151ULL)))));
            }
        }
        arr_89 [i_16 + 1] = ((/* implicit */unsigned long long int) (signed char)-32);
        arr_90 [i_16 - 2] = ((/* implicit */unsigned char) max((arr_72 [i_16 + 2] [i_16 - 2] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-104)) / (2090876393))))));
        var_52 *= ((/* implicit */unsigned int) 14782437348852638786ULL);
        arr_91 [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(min((-2490120441700698539LL), (-3129823499543076391LL)))))) > ((+(max((((/* implicit */unsigned long long int) arr_60 [i_16 + 1])), (18338657682652659697ULL)))))));
    }
}
