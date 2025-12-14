/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83334
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
    var_10 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)37708)))) ? (var_0) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_3] [i_3])) ? (((((/* implicit */_Bool) -1066516204)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2920351455U)))))) : (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_0]))))))) : (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1066516217)))))) : (arr_4 [i_3])))));
                            arr_9 [i_0 + 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2])) ? ((-((+(((/* implicit */int) (_Bool)1)))))) : (min((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (var_8))), (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)0))))))));
                            arr_10 [21LL] [i_1] [21LL] [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_1]);
                            var_12 = max((arr_5 [i_0] [i_0] [i_2] [i_0]), ((+(((arr_6 [i_0] [i_0] [i_2]) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_13 ^= ((/* implicit */_Bool) 6362418614848227480LL);
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_17 [i_6] [i_1] [i_6 + 2] [i_5 + 1] [i_1] [i_0 + 1]))));
                                arr_20 [i_0] [i_1] [i_4] [i_5 + 1] [i_5] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [(_Bool)1] [i_5 - 1] [i_5 - 1] [i_6 - 1]))));
                                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [15ULL] [i_0] [i_0])) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8] [(signed char)20]))) * (arr_0 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 + 1] [i_8]))) : (((((/* implicit */_Bool) (unsigned char)169)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_7 - 1] [i_4])))))));
                                var_17 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)16816))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(3485246874U)))) ? (((((/* implicit */long long int) var_5)) % (var_6))) : (((/* implicit */long long int) arr_0 [i_0 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                arr_30 [i_10] [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((long long int) arr_15 [i_0] [i_1] [i_9] [i_10]))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_5))));
                                var_20 -= ((/* implicit */signed char) var_3);
                                arr_31 [i_4] = (!(arr_29 [i_4] [i_4]));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 24; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_13 = 3; i_13 < 24; i_13 += 2) 
                            {
                                arr_40 [i_11] = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned short)5597)) << (((max((arr_25 [i_13 - 1] [i_11] [i_1]), (var_6))) + (3099200045609569456LL)))))));
                                var_21 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) var_3)))) ? (arr_37 [i_0] [i_13 - 1] [i_11] [i_11] [i_11 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [(_Bool)1] [(_Bool)1]))))))));
                            }
                            for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                            {
                                arr_43 [i_0] [i_11] [i_14] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1066516217)) ? (arr_27 [i_0] [i_1] [i_11 + 1] [i_12] [i_1]) : (var_5)))) ? (max((arr_21 [i_0] [i_1] [i_1] [i_11] [i_12] [i_14]), (((/* implicit */long long int) (unsigned char)87)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
                                var_22 = ((/* implicit */unsigned short) ((arr_42 [i_11] [i_11] [(signed char)20] [i_11 - 1] [i_11]) + (arr_42 [i_11] [i_12] [i_14] [i_11] [i_14])));
                            }
                            for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                            {
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((unsigned short) (signed char)-104)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_12] [i_15] [(signed char)8] [i_12] [i_12])) && (((/* implicit */_Bool) arr_33 [i_11])))))))), (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                                var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)25998)) ? (((/* implicit */long long int) -1066516217)) : (9223372036854775807LL))), (((/* implicit */long long int) (signed char)-54))));
                                var_25 = ((/* implicit */signed char) arr_2 [i_1] [i_1]);
                                var_26 = ((/* implicit */long long int) var_7);
                                arr_46 [i_0] [i_0] [i_1] [i_1] [(_Bool)1] [i_11] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24954)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_4)))))))) % (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) arr_41 [i_11])) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1]))))))));
                            }
                            arr_47 [i_12] [(unsigned short)2] [(unsigned short)2] [19ULL] [i_11] [i_12] = ((/* implicit */unsigned short) ((var_2) ? (((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_12])) ? (arr_42 [i_11] [i_1] [i_11] [i_12] [i_12]) : (1748229097U))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_11 + 1] [i_12]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)2856)))))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) ^ (((/* implicit */int) (unsigned short)62263)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))) >= (max((((/* implicit */long long int) var_8)), (var_6)))))), (arr_12 [i_0] [(unsigned short)21] [(unsigned short)16] [i_17])));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_0] [i_0] [i_0] [i_17] [i_0]), (((/* implicit */int) arr_22 [i_17] [i_17]))))) ? (14525701625899316337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_17] [i_17])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) 
    {
        for (unsigned int i_19 = 2; i_19 < 12; i_19 += 2) 
        {
            {
                var_30 = ((/* implicit */long long int) (+((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_54 [i_18])), (arr_3 [i_18]))))))));
                var_31 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-27889)))), ((~(((/* implicit */int) (_Bool)1)))))) << (((max((min((arr_42 [i_19] [i_19] [i_18] [i_19] [i_19]), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_18] [i_18] [i_18])) ? (((/* implicit */int) arr_15 [i_18] [i_18] [i_19] [i_19])) : (((/* implicit */int) arr_29 [i_18] [i_18]))))))) - (44126U)))));
            }
        } 
    } 
    var_32 &= ((/* implicit */long long int) var_2);
}
