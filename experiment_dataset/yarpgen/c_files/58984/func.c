/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58984
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
    var_19 &= var_9;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) % (((/* implicit */int) arr_5 [i_0 + 1] [i_1])))) % (((((/* implicit */int) (unsigned short)16694)) >> (((((/* implicit */int) (unsigned short)48863)) - (48854))))))))));
            arr_6 [(unsigned char)10] [i_1] [i_0] = ((/* implicit */unsigned short) ((((arr_0 [i_0 + 1] [i_0 - 1]) + (((/* implicit */long long int) 1863483338)))) ^ (max((-1665526810089483095LL), (((/* implicit */long long int) (unsigned short)65535))))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) | ((((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 962401386))))) : (((/* implicit */int) var_8))))));
            var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned char)166))))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65517);
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_3))));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_22 [i_0] [i_4] [(short)11] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1] [i_4] [i_4] [i_0 - 1]))) : (var_5)))), (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0 + 1])) ? (((long long int) (unsigned short)10)) : (((((/* implicit */_Bool) 1071302932U)) ? (-5435650088421986082LL) : (((/* implicit */long long int) var_11))))))));
                    arr_23 [i_0] [i_0] [i_3] [i_0] [i_5] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_4])) ? (6001472914186304925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))))), (max((15899307048968558037ULL), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0 - 1] [i_4]))))));
                    arr_24 [11ULL] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)251))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    arr_28 [i_4] [(short)0] [i_3] [i_0 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5435650088421986095LL)) ? (arr_16 [i_0 + 1] [i_0 - 1] [i_4]) : (((/* implicit */long long int) arr_9 [i_0 + 1] [i_0 - 1] [i_6 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_2))))) : ((+(max((((/* implicit */unsigned int) (short)12)), (1634153415U)))))));
                    var_25 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)16694));
                }
            }
            for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) -1634549565)), (((((/* implicit */_Bool) 2026402334)) ? (((/* implicit */long long int) 66846720U)) : (8939229779495440354LL))))), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_10))))))));
                            var_27 = ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
                arr_39 [i_7 - 1] [6ULL] [6ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) (unsigned char)65)))))) : ((~(max((var_15), (((/* implicit */unsigned int) (unsigned char)191))))))));
            }
            for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) max((arr_25 [i_0] [(_Bool)1] [(_Bool)1] [i_11] [i_0 - 1] [i_10 - 1]), (arr_25 [i_0] [i_3] [7] [0] [i_0 - 1] [i_10 - 1]))))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 1665526810089483119LL))))))));
                        arr_51 [i_0] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_26 [(short)10] [i_3] [i_10] [i_11])))) <= (((/* implicit */int) var_17))));
                        var_30 = ((/* implicit */long long int) (-(min((arr_48 [i_0 + 1] [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)8]), (((/* implicit */unsigned int) (unsigned short)4))))));
                        arr_52 [i_0 - 1] [i_3] [i_10] [i_0 - 1] [i_12] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -1983691213)), (((((/* implicit */_Bool) ((unsigned int) -1665526810089483116LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (9ULL)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_41 [i_3] [(unsigned char)6] [i_11])) : (6001472914186304925ULL))) - (8046230383942918649ULL))))))));
                        var_32 = ((/* implicit */long long int) 12445271159523246691ULL);
                        arr_56 [i_0 - 1] [i_11] [i_11] = (unsigned char)176;
                    }
                    arr_57 [i_0] [i_0] [12LL] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)38387)) * (((((/* implicit */_Bool) ((var_0) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11] [i_11] [i_10] [i_11] [11ULL])))))) ? (((arr_15 [i_11] [i_10 + 1] [0ULL]) ? (var_11) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned short)65532))))))));
                }
                /* LoopSeq 2 */
                for (int i_14 = 4; i_14 < 12; i_14 += 1) /* same iter space */
                {
                    arr_60 [i_14] = min((((/* implicit */long long int) ((short) max(((short)-14919), (var_1))))), (((((/* implicit */_Bool) arr_32 [i_0] [i_0 - 1] [i_0])) ? (arr_59 [i_0] [i_0 - 1] [i_10 - 2] [i_10 - 2] [i_10] [i_10 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0 - 1] [i_3]))))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((int) arr_46 [i_0] [i_14]))) : (((((/* implicit */_Bool) -5435650088421986082LL)) ? (6001472914186304952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_14] [i_14] [i_14] [(unsigned char)8] [i_14] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1])))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) (short)-26100)) ? (max((12445271159523246692ULL), (((/* implicit */unsigned long long int) arr_36 [i_14] [i_14] [i_10 + 1] [i_14] [i_0])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)126)))))))));
                }
                /* vectorizable */
                for (int i_15 = 4; i_15 < 12; i_15 += 1) /* same iter space */
                {
                    arr_64 [i_0] [i_3] [i_10] [i_15] = ((/* implicit */signed char) ((int) (unsigned char)255));
                    arr_65 [i_0] [0U] [i_10 - 1] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-670428095140457500LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))) : (4049665272U)));
                }
                var_35 = ((/* implicit */_Bool) min((var_35), (((_Bool) (~(arr_8 [i_10 + 1] [i_3] [i_0 - 1]))))));
            }
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                arr_68 [i_0] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_34 [i_16] [i_0] [i_0] [i_0 + 1] [i_0])), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_4 [i_0])))))) ? (((/* implicit */int) (signed char)-79)) : (max((((/* implicit */int) var_17)), (var_11))));
                arr_69 [i_0] [i_3] [i_16] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    arr_72 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)103)) | (((((/* implicit */int) arr_53 [i_17] [i_16] [10LL] [i_0 - 1] [i_0] [i_17])) * (((/* implicit */int) arr_1 [i_0]))))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_3] [i_16] [i_17]))))))))));
                    var_37 = ((/* implicit */long long int) var_9);
                }
            }
            arr_73 [(unsigned short)5] [(short)13] [4ULL] = ((/* implicit */unsigned char) ((12445271159523246697ULL) >> (((/* implicit */int) (_Bool)1))));
            arr_74 [i_0] = var_12;
        }
        arr_75 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((7137979535893410097LL), (((/* implicit */long long int) (unsigned short)65521)))), (((/* implicit */long long int) ((unsigned short) (unsigned char)243)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : ((~(arr_16 [8U] [i_0] [8U])))));
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((max(((~(arr_49 [i_0] [0ULL] [(_Bool)1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_44 [i_0] [i_0] [(unsigned short)8] [i_0]))))))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_2))), (max((((/* implicit */long long int) (unsigned short)16384)), (9223372036854775800LL)))))))))));
        arr_76 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), (arr_3 [i_0] [i_0] [i_0])))))));
    }
    var_39 &= ((/* implicit */short) var_11);
}
