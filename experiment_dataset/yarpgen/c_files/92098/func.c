/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92098
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((/* implicit */int) max((var_6), (var_9)))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (var_8)))))) == (((/* implicit */int) var_5)))))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_9));
                    var_19 += min((((((/* implicit */int) var_5)) << (((var_12) + (6698194457360891264LL))))), (((((/* implicit */int) (signed char)-114)) | (((/* implicit */int) (unsigned char)53)))));
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_6))))) & (((((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_4)))) / (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_5)))))))));
                }
                var_21 = ((/* implicit */short) var_12);
            }
            for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                arr_16 [6] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned char)53))))));
                var_22 += ((/* implicit */short) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (unsigned short)65535))));
                var_23 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_12))) * (((/* implicit */long long int) ((/* implicit */int) ((var_12) > (var_12))))))) << (((((/* implicit */int) var_3)) + (91)))));
                arr_17 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_0)) / (((/* implicit */int) var_1)))), (max((var_11), (((/* implicit */int) var_15))))))) && (((/* implicit */_Bool) min((var_16), (((/* implicit */short) var_4)))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_15))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (short i_6 = 4; i_6 < 9; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (signed char)104))));
                            var_26 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */int) var_1)))))));
                            var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_16)))))));
                        }
                    } 
                } 
            }
            for (int i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                arr_29 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7)))))))) ? (((((var_11) == (((/* implicit */int) var_5)))) ? (((((/* implicit */int) var_1)) % (((/* implicit */int) var_2)))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_6))))))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_13))))));
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9068)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)53))))) ? (max((var_12), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))) % (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))))));
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_1)))))))));
                        arr_36 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (var_12)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_12))))));
                        var_28 *= ((/* implicit */unsigned short) var_10);
                        arr_37 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_14)))))));
                    }
                    for (short i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_40 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_15))) >> (((/* implicit */int) ((var_12) != (((/* implicit */long long int) var_11)))))))) || (((((/* implicit */_Bool) ((unsigned short) var_9))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_1)))))))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((var_11) + (((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_13))))) ? (((var_10) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_13)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_12] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_17))))) : (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */int) var_1))))));
                        var_30 &= ((/* implicit */long long int) ((int) var_12));
                        arr_44 [i_0] [i_0] [i_0] [i_1] [i_1] = ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_4)));
                        arr_45 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) var_5);
                        arr_46 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_15)) * (((/* implicit */int) var_10)))) != (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))));
                    }
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (var_7))))) : (((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8268788160410880533LL)) ? (((((/* implicit */int) (short)9063)) % (((/* implicit */int) (unsigned short)26364)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (-920911635))))))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) == (var_14))))) : (var_8)))));
                }
                for (unsigned long long int i_13 = 2; i_13 < 8; i_13 += 1) 
                {
                    arr_49 [i_13] [i_13] [i_1] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) < (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_8)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((signed char) 1967090898425809090ULL)))));
                    var_33 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))))))) > (((unsigned long long int) ((var_11) > (((/* implicit */int) var_0)))))));
                }
                /* vectorizable */
                for (short i_14 = 2; i_14 < 6; i_14 += 1) 
                {
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) var_1))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 2; i_15 < 6; i_15 += 3) 
                    {
                        arr_55 [i_15] [i_15] [i_15] [i_15] [i_1] [i_15] = ((/* implicit */unsigned short) ((long long int) var_11));
                        var_35 *= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_17)))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (var_11)))));
                    }
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))));
                    arr_56 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10)))) - (48763)))));
                }
                arr_57 [i_8] [i_8] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17))))) ? (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            }
            arr_58 [i_0] [0LL] [0LL] &= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) max((var_0), (var_0)))) * (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_16))))))));
        }
        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) var_16)) || (var_10)))) / (((((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))))))));
            var_38 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))) != (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17))))));
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))) * (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_6)))))))))));
        }
        arr_62 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_12) % (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) == (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) var_12)))))))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 3; i_17 < 8; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                {
                    var_40 = ((/* implicit */signed char) min((8172045848894377568ULL), (((/* implicit */unsigned long long int) (signed char)105))));
                    arr_68 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))) == (((/* implicit */int) var_2))))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_17))))))))));
    }
    var_42 = ((/* implicit */int) var_15);
    var_43 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (var_14))) : (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) - (((((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) + (((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_13)), (var_7)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) var_0)))) : (((/* implicit */int) var_4))))));
}
