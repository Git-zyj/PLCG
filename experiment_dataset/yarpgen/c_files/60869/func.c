/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60869
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
    var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (-7825524520338517033LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((var_2), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) var_0))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_11)), (5856481631718866702LL))), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned long long int) min((min((7825524520338517021LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -7825524520338517022LL)) ? (var_1) : (((/* implicit */int) var_0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (-6421684639360006248LL) : (((/* implicit */long long int) ((/* implicit */int) (short)15051)))))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) (unsigned short)30027)) ? (((/* implicit */unsigned long long int) -7825524520338517022LL)) : (5472532846183387268ULL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) (unsigned char)253);
            /* LoopSeq 3 */
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1508435033090902388LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [11LL] [i_1] [(unsigned char)21]))) : (3521359743U)))) ? (((/* implicit */int) (unsigned char)152)) : (((((/* implicit */_Bool) 3521359743U)) ? (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_2])) : (((/* implicit */int) (unsigned short)65509)))))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) (unsigned char)224)) : (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [i_0]))))));
                var_17 ^= ((/* implicit */unsigned short) 7890857970459830856LL);
            }
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_18 -= ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_3]);
                var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 7890857970459830841LL)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [7])) : (1826072608)));
            }
            for (int i_4 = 3; i_4 < 19; i_4 += 2) 
            {
                arr_15 [i_4] [(short)21] [i_4] = ((/* implicit */unsigned char) arr_2 [i_0]);
                arr_16 [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12309046912013808169ULL)) ? (((/* implicit */int) arr_11 [3] [i_1] [3])) : (((/* implicit */int) (unsigned char)216))))) ? (((((/* implicit */_Bool) (unsigned short)52827)) ? (((/* implicit */int) arr_3 [20ULL])) : (((/* implicit */int) (unsigned char)24)))) : (((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (short)-30172))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1826072612)) ? (0LL) : (((/* implicit */long long int) 272597217U))))) ? (((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_4 + 1])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_4])) ? (((/* implicit */int) arr_3 [(signed char)12])) : (((/* implicit */int) arr_3 [i_0]))))));
                var_21 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-7890857970459830836LL)));
            }
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (5525417710308443520ULL) : (2ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (((((/* implicit */_Bool) 3297196376U)) ? (0ULL) : (((/* implicit */unsigned long long int) 1826072597)))))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24185)) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [4])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_11 [i_0] [(signed char)4] [i_1]))));
                var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10595))) : (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (short)-7401)) ? (arr_7 [i_5] [i_1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(short)2] [(_Bool)1] [i_1] [i_0]))))) : (4294967291U)));
            }
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)4141)) : ((((_Bool)0) ? (((/* implicit */int) arr_21 [i_0] [(unsigned char)2])) : (((/* implicit */int) (unsigned char)118)))))))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_2 [i_0])) : (5659746460132089244LL)))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) 24)) ? (((/* implicit */int) (unsigned short)41341)) : (((/* implicit */int) arr_12 [i_1] [i_6 + 3] [i_7]))))));
                        arr_28 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)48641))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1911))) : (-9128024545317028229LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_6] [1LL] [i_1])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0])) : (arr_8 [i_8] [i_1] [i_6])))) : (arr_24 [i_0] [i_1] [i_6] [i_7])));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2047)) ? (arr_24 [i_0] [i_1] [i_6] [i_7]) : (((/* implicit */long long int) 997770914U))))) ? (((/* implicit */int) (short)27014)) : (((/* implicit */int) (signed char)99))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) arr_5 [i_0] [(signed char)14] [i_9])) : (((/* implicit */int) (signed char)100))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (1216426149U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4)))))));
                    }
                    for (int i_10 = 3; i_10 < 20; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)20] [i_6] [i_7])) : (((/* implicit */int) (_Bool)1))));
                        var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_33 [i_0])) : (((/* implicit */int) (short)14219))))) ? (((((/* implicit */_Bool) arr_6 [(_Bool)1] [(_Bool)1] [i_6])) ? (((/* implicit */int) arr_21 [i_0] [i_7])) : (((/* implicit */int) arr_11 [i_0] [i_6] [i_10])))) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) arr_5 [(unsigned char)22] [i_6] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_7] [i_7]))))) ? (((((/* implicit */_Bool) 190430049)) ? (((/* implicit */unsigned long long int) 3078541146U)) : (370368484239777058ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 13774068U)) ? (((((/* implicit */_Bool) -2048)) ? (arr_24 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)16))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)9781)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) : (3046305936U))))));
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_6 - 1])) ? (4072054499U) : (((/* implicit */unsigned int) 736977530))))) ? (1603438931334771570ULL) : (((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_1] [i_7] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_7])))))));
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_1] [i_6] [i_7]))) : (0ULL)))) ? (5335821945526807423ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7)))));
                }
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
            }
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (signed char)-82))));
                arr_38 [i_0] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)165)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_25 [i_0] [10ULL] [i_11] [i_1] [i_0])) : (((/* implicit */int) (short)2047)))) : (arr_8 [i_11] [i_1] [i_1])));
            }
        }
        for (int i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)21)) ? (4294967295U) : (4046075040U)));
            var_38 = ((/* implicit */short) arr_2 [i_0]);
        }
        var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [(_Bool)1] [i_0])) ? (arr_39 [i_0] [i_0]) : (arr_17 [i_0] [i_0] [18LL])));
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [4ULL] [16LL] [16LL])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_8 [(signed char)14] [i_0] [i_0])) : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_41 [i_0] = ((/* implicit */unsigned int) (unsigned short)65513);
        arr_42 [i_0] = ((/* implicit */unsigned char) arr_37 [i_0] [i_0] [i_0]);
    }
    for (int i_13 = 1; i_13 < 9; i_13 += 3) 
    {
        var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_13 + 2] [i_13 - 1] [(signed char)17] [i_13])) ? (((/* implicit */int) arr_3 [(short)5])) : (arr_8 [i_13] [i_13 + 1] [i_13 + 2])))) ? (((/* implicit */int) min((arr_6 [i_13] [i_13] [i_13 + 2]), (arr_30 [i_13] [i_13] [i_13 + 3] [i_13] [i_13])))) : (((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) arr_20 [i_13 + 3] [i_13] [i_13 + 3] [i_13])) : (((/* implicit */int) (unsigned short)24165))))))) ? (((/* implicit */int) (unsigned char)123)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_13] [i_13] [i_13] [i_13 + 3]))) : (3078541155U)))) ? (((/* implicit */int) arr_33 [i_13])) : (((((/* implicit */_Bool) arr_10 [i_13] [i_13] [i_13] [(unsigned char)0])) ? (((/* implicit */int) (short)12166)) : (((/* implicit */int) arr_34 [i_13] [(_Bool)1] [i_13 + 3] [i_13] [i_13])))))));
        var_42 = ((/* implicit */signed char) -234756997);
    }
}
