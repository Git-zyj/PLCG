/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76612
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)1008)))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2725335207U)))) ? (((var_10) & (((/* implicit */long long int) ((arr_1 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) != ((~(arr_0 [i_0] [i_0])))))))));
        var_14 = ((/* implicit */signed char) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) 0LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_0 [i_0] [i_1 - 3])) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((~(var_6)))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_1]);
            var_16 = min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)31491))))), (arr_1 [2U]));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1] [i_0]);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_5), (((arr_10 [i_2]) - (arr_9 [i_2])))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) arr_10 [i_2]))))));
            arr_13 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-17502)) * (((/* implicit */int) (signed char)6))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                {
                    var_19 = arr_16 [i_4 + 1] [i_4 + 1];
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_6))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(var_10))))));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                {
                    var_22 |= ((/* implicit */unsigned int) var_1);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((-620376752195971858LL) < (((/* implicit */long long int) ((/* implicit */int) var_1)))))) == (((/* implicit */int) arr_24 [i_4 - 1] [i_4 - 1] [i_2] [i_4 + 1]))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */unsigned long long int) (-(var_10)))) : (arr_9 [i_2])));
                }
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */long long int) ((unsigned int) var_6));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_23 [i_5]))));
                    var_27 *= ((/* implicit */unsigned char) (~(arr_28 [(_Bool)0] [i_5] [i_4 + 1] [(_Bool)0])));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)31491)) < (((/* implicit */int) (unsigned short)43364))));
                }
                var_29 ^= ((((/* implicit */_Bool) arr_12 [18U])) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)43364))))));
            }
            for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_2])), (16213985629929738391ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_2] [i_4 - 1] [i_2] [i_10])) >> (((4031826589U) - (4031826583U)))))) : (min((var_4), (((/* implicit */unsigned long long int) 935086620))))))) ? ((((-(0ULL))) * (var_6))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)-17502)) ^ (((/* implicit */int) (_Bool)1))))))));
                    var_31 |= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_26 [i_4 - 1] [i_10] [i_9 - 1] [i_10] [i_2])) || (((/* implicit */_Bool) arr_15 [i_4 - 1]))))));
                    var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) 4031826589U)))));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_11))));
                }
                for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    arr_37 [20ULL] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((var_7) >> (((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2])))))) + (var_10))) + (1282881205722481683LL)))));
                    var_34 ^= (-((-(3855250579U))));
                    arr_38 [i_2] [i_4] [i_9] [i_11] [i_2] [i_11] = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned int i_12 = 1; i_12 < 20; i_12 += 3) 
                {
                    arr_42 [16U] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9 + 3] [i_4] [i_9] [(signed char)16])) ? (arr_28 [i_12 + 2] [i_12 - 1] [i_12 + 3] [6U]) : (arr_28 [i_2] [i_4 - 1] [i_9] [10U])))) ? (((unsigned long long int) (+(66023963521808190ULL)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_17 [i_9] [i_2] [i_2])), (915991004U))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        arr_45 [i_13] [i_2] [i_9] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4 - 1] [i_2] [i_12] [i_13])) ? (var_5) : (2784147446780283198ULL))))))), ((+(((((/* implicit */_Bool) var_5)) ? (15662596626929268417ULL) : (arr_21 [i_2] [i_2] [i_2] [i_2])))))));
                        var_35 -= (~((+(arr_40 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [(unsigned char)10]))));
                        arr_46 [i_9 + 3] [i_9] [i_9] [i_9] [i_9] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_40 [i_13] [i_4] [(_Bool)1] [i_12] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)86)))))) < (var_4)))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) == (var_6)))) : ((~(((/* implicit */int) (unsigned short)21974))))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (3878535819U)))) : (arr_44 [i_2] [i_2])));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) 18446744073709551598ULL))));
                    }
                    for (unsigned short i_14 = 1; i_14 < 22; i_14 += 3) 
                    {
                        var_38 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21974))) - (3878535830U));
                        var_39 = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_28 [i_9] [i_9] [i_9 + 2] [i_2]) != (arr_28 [i_9] [i_9] [i_9 + 3] [i_2])))) != (((arr_19 [i_2] [i_14] [i_2]) >> (((arr_28 [i_9 - 1] [i_9 - 1] [i_9 + 3] [i_2]) + (6916454965239093073LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_28 [i_9] [i_9] [i_9 + 2] [i_2]) != (arr_28 [i_9] [i_9] [i_9 + 3] [i_2])))) != (((((arr_19 [i_2] [i_14] [i_2]) + (2147483647))) >> (((((arr_28 [i_9 - 1] [i_9 - 1] [i_9 + 3] [i_2]) + (6916454965239093073LL))) + (1042582903866255821LL))))))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 22; i_15 += 4) 
                    {
                        var_40 -= ((/* implicit */unsigned long long int) ((max((arr_16 [i_12] [i_4 + 1]), (arr_16 [i_15 - 2] [i_4 + 1]))) >= (((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_16 [i_15] [i_4 + 1])))));
                        var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_17 [i_2] [i_12 + 2] [i_15])))));
                    }
                    var_42 |= ((/* implicit */unsigned long long int) ((arr_16 [i_12 + 1] [i_9 + 1]) >= (((((/* implicit */_Bool) (unsigned short)53137)) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68)))))));
                }
                arr_51 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */long long int) var_6);
                var_43 = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    var_44 |= ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) (~(var_8)))))));
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((arr_28 [i_4] [i_2] [i_4 - 1] [18U]) == (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? ((-(3855250579U))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))) & (416431465U))))))))));
                }
            }
            var_46 = ((/* implicit */long long int) min((var_46), (((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (var_3))))) ? (arr_15 [i_4]) : (((/* implicit */long long int) max(((~(((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1781816927U))))))))))));
            var_47 = ((/* implicit */unsigned char) (((~(arr_49 [i_4 - 1] [i_2] [i_4 - 1] [i_4 + 1] [i_4]))) >> (((263140707U) - (263140677U)))));
            var_48 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 3043243009U)), (8380902652805778230ULL))) - ((((-(var_7))) + (((var_7) + (var_5)))))));
        }
        for (unsigned char i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            arr_56 [i_2] [i_17] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_9 [i_2])))) ? (arr_32 [i_2] [i_2] [i_2] [i_17]) : (arr_10 [i_2]))), (((/* implicit */unsigned long long int) var_11))));
            /* LoopSeq 2 */
            for (int i_18 = 2; i_18 < 20; i_18 += 1) 
            {
                var_49 = ((/* implicit */unsigned int) max((var_49), (3878535830U)));
                var_50 = ((/* implicit */signed char) arr_35 [(short)18] [i_17] [i_2] [i_2]);
            }
            for (signed char i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                var_51 = ((/* implicit */unsigned int) var_6);
                var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_44 [i_2] [i_17])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
            }
            var_53 = ((/* implicit */signed char) var_7);
        }
    }
    var_54 |= (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || ((!(((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_20 = 0; i_20 < 23; i_20 += 4) 
    {
        var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1)))))))));
        var_57 = ((arr_12 [i_20]) & (arr_12 [i_20]));
        var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) var_9))));
        var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_20] [i_20] [i_20] [i_20]))) == ((-(var_7)))));
    }
    for (long long int i_21 = 0; i_21 < 20; i_21 += 4) /* same iter space */
    {
        arr_69 [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((1941029932U), (439716717U))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) & (3878535845U)))))) ? ((+(arr_36 [i_21] [i_21] [i_21] [i_21] [i_21]))) : (min((((/* implicit */unsigned int) arr_59 [i_21])), ((+(arr_16 [i_21] [i_21])))))));
        var_60 = ((/* implicit */short) ((unsigned long long int) (~(92454174U))));
        var_61 = ((/* implicit */unsigned int) ((var_7) ^ (((/* implicit */unsigned long long int) ((unsigned int) var_2)))));
    }
    for (long long int i_22 = 0; i_22 < 20; i_22 += 4) /* same iter space */
    {
        var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) (((((~(var_6))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_22] [i_22] [i_22] [i_22]))))) >> (((((max((var_6), (((/* implicit */unsigned long long int) arr_25 [i_22] [i_22] [i_22] [(short)10])))) >> ((((-(var_6))) - (15563741606724877329ULL))))) - (2199023255520ULL))))))));
        var_63 = var_7;
        var_64 = ((/* implicit */short) (((-(((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) 1401906755U))))))) - (((/* implicit */int) var_11))));
    }
}
