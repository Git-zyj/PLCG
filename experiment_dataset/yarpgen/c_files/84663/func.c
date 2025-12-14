/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84663
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_18 = ((/* implicit */short) 18198491986007096371ULL);
                    var_19 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1214501888)) ? (((/* implicit */int) (short)9353)) : (((/* implicit */int) (short)9353)))), (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned int) (unsigned char)170)), (4294967295U)))));
                    var_20 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_8))))));
                    arr_9 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) > (((/* implicit */int) arr_3 [i_1] [i_2])))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) -905054854)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) var_7)))))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_3 + 1] [i_3] [(short)21])) * (((/* implicit */int) var_7))));
                    var_22 ^= ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 2 */
                    for (int i_4 = 2; i_4 < 20; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_11 [i_0] [i_0] [(unsigned short)13] [(short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3])))))) ? (((((/* implicit */_Bool) (short)1160)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1160))) : (2748940325U))) : (((arr_5 [i_3] [i_1] [i_0]) >> (((((/* implicit */int) (unsigned short)2020)) - (2015)))))));
                        var_24 = ((/* implicit */_Bool) ((unsigned short) ((int) 11199623023838424299ULL)));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1])))) : (((/* implicit */int) var_12))));
                            arr_19 [i_0] [(short)6] = ((/* implicit */unsigned short) var_12);
                            var_26 = ((/* implicit */unsigned short) ((signed char) ((arr_11 [i_0] [i_1] [i_1] [(short)0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(short)2] [i_3] [i_1]))))));
                            arr_20 [i_0] [i_1] [i_1] [i_3 - 1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)2] [(_Bool)1] [i_3])))))));
                        }
                    }
                    for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [(unsigned char)6] [i_0] [(unsigned char)20] [i_0] [i_1] [i_3 - 1] [i_6]))));
                        arr_23 [i_6] [(unsigned short)16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (short)-7988)) : (((/* implicit */int) arr_21 [(unsigned char)19] [i_1] [(unsigned char)19] [(unsigned char)19]))));
                        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [i_0] [(signed char)19] [i_1] [i_6 + 1])))) / (((/* implicit */int) arr_3 [i_1] [i_3 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 3; i_7 < 21; i_7 += 4) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), ((+(((((/* implicit */_Bool) (short)-14767)) ? (((/* implicit */int) (unsigned short)18658)) : (((/* implicit */int) (unsigned char)96))))))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (~(arr_12 [i_3 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_31 = ((/* implicit */short) (((+(((/* implicit */int) var_8)))) == (((/* implicit */int) var_10))));
                            arr_28 [i_7] [i_7] [i_3] [i_7] [(signed char)11] [i_8] = (~(((/* implicit */int) arr_22 [i_7 - 2] [i_7 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                            var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [(unsigned char)5] [i_8] [i_3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_8]))));
                            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && ((!(((/* implicit */_Bool) var_4))))));
                        }
                    }
                    var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (unsigned char)102)))));
                }
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((((/* implicit */int) arr_30 [i_0])) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) var_15)))))), ((-(1708219399U))))))));
                    var_36 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (arr_27 [(signed char)18] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) arr_29 [(short)10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)145)))) : (min((var_11), (((/* implicit */int) var_10)))))) : (max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)2020)) : (((/* implicit */int) (unsigned char)228)))), (((/* implicit */int) var_5)))));
                    var_37 = ((/* implicit */unsigned int) ((min((838156299), (((/* implicit */int) var_5)))) >= ((+(((/* implicit */int) (signed char)106))))));
                }
                for (short i_10 = 1; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)96))))) ? (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) + (((/* implicit */int) arr_6 [i_10] [i_1] [i_0]))))));
                    var_39 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (unsigned char)72)), (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [(unsigned short)3])))))))));
                    var_40 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >> (((((/* implicit */int) var_16)) - (22504)))))), (1708219399U)));
                    var_41 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) max((arr_27 [i_10] [i_10]), (((/* implicit */unsigned long long int) (short)-2475))))) ? (((/* implicit */unsigned int) min((1871375749), (var_6)))) : (((((/* implicit */_Bool) (unsigned char)183)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(_Bool)1] [i_10 - 1]))))))));
                    var_42 = ((/* implicit */unsigned short) arr_6 [i_0] [(unsigned short)3] [i_0]);
                }
                /* vectorizable */
                for (short i_11 = 1; i_11 < 21; i_11 += 4) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_11 - 1])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_21 [i_0] [i_1] [(unsigned char)17] [i_11])) : (((/* implicit */int) (unsigned char)99))))));
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17196719640644800539ULL)) ? (-1) : (((/* implicit */int) (short)-1158))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_29 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)72)) ? (var_6) : (((/* implicit */int) var_17)))))));
                }
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) var_5)))))))));
    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-32749), (((/* implicit */short) (unsigned char)64)))))))))));
}
