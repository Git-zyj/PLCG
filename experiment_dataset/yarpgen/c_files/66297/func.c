/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66297
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_15))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_1))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_20 = ((((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_9))))) - (((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_16))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (short)-19157)) ^ (((/* implicit */int) (short)19161))));
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_10)) + (((/* implicit */int) var_11)))) % (((/* implicit */int) var_16)))) - (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) / (((/* implicit */int) var_17))))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_1);
                        arr_13 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_7))) + (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_0)))))));
                    }
                    for (unsigned short i_4 = 4; i_4 < 6; i_4 += 3) 
                    {
                        var_22 *= ((/* implicit */short) var_13);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_13))))) << (((((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_8)) - (134))))) - (934)))));
                        var_24 = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) /* same iter space */
                    {
                        var_25 = var_16;
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) / (((/* implicit */int) var_15)))) >> (((((((/* implicit */int) var_15)) | (((/* implicit */int) var_15)))) - (201)))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) ((((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_15))))) <= (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_11)))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))) - (((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_1)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_9)))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_2)));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [i_2] [i_2] [i_8] [i_0] = ((/* implicit */_Bool) var_16);
                            var_30 *= ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_1))))) ^ (((/* implicit */int) var_11)))) >= (((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_3)))))));
                            arr_30 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) != (((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            arr_31 [i_0] [i_0] [i_2] [i_0] [i_8] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (var_4))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_16)))))));
                        }
                        arr_32 [i_0] [i_1] [i_1 - 1] = ((/* implicit */long long int) ((var_4) - (((/* implicit */unsigned long long int) ((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
                    {
                        arr_36 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (((((/* implicit */int) var_15)) - (((/* implicit */int) var_3)))))))) <= (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_3))))) == (((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                        arr_37 [i_0] [4LL] [i_0] = ((((var_2) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) var_10)))))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((var_2) - (9040368947283067974LL)))))));
                        arr_38 [i_1] [i_0] = ((/* implicit */unsigned char) ((6785618069369372787ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_39 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_10)) - (((/* implicit */int) var_13)))) == (((/* implicit */int) ((((/* implicit */int) (short)-19168)) != (((/* implicit */int) (short)15)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 4) 
                    {
                        for (long long int i_11 = 1; i_11 < 6; i_11 += 3) 
                        {
                            {
                                arr_44 [(unsigned short)3] [i_1 + 1] [8U] [8U] [i_0] = ((/* implicit */unsigned long long int) var_15);
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) != (((((/* implicit */int) var_13)) - (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_45 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_4))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        arr_46 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)19157)))) <= (((((((/* implicit */int) var_13)) + (((/* implicit */int) var_10)))) ^ (((/* implicit */int) var_10))))));
    }
    for (unsigned int i_12 = 3; i_12 < 14; i_12 += 1) 
    {
        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_12)) * (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_17))))))))));
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_34 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_7))) >= (((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
            var_35 = var_7;
        }
        for (unsigned int i_14 = 1; i_14 < 14; i_14 += 2) 
        {
            arr_55 [i_14] [i_12 - 3] = ((/* implicit */int) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_17)) > (((((/* implicit */int) var_15)) << (((((/* implicit */int) var_13)) - (3125)))))))))));
            arr_56 [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_14))) + (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            /* LoopNest 2 */
            for (long long int i_15 = 1; i_15 < 16; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 14; i_16 += 4) 
                {
                    {
                        var_36 = ((/* implicit */long long int) ((((((/* implicit */int) var_17)) << (((var_14) + (301723644542278372LL))))) ^ (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_13))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 1; i_17 < 15; i_17 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) var_10);
                            arr_64 [i_12] [i_17] = ((/* implicit */unsigned long long int) ((var_14) % (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                        }
                        arr_65 [i_12] [i_16] [i_12] [i_12] [i_16 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) << (((((/* implicit */int) var_16)) - (26165))))) != (((((/* implicit */int) var_0)) >> (((var_12) - (766398944365289079LL)))))));
                        /* LoopSeq 1 */
                        for (signed char i_18 = 2; i_18 < 14; i_18 += 2) 
                        {
                            var_38 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) var_11))))) * (((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                            var_39 -= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_12))));
                        }
                    }
                } 
            } 
        }
    }
}
