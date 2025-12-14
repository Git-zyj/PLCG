/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85372
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
    var_19 = ((signed char) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */unsigned int) ((min((((var_15) / (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0] [i_2])))), (((/* implicit */long long int) max(((short)-4488), ((short)4502)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_3))))))));
                    var_21 = ((/* implicit */short) ((int) ((((/* implicit */int) var_18)) | (((((/* implicit */int) (unsigned char)7)) | (((/* implicit */int) (unsigned char)183)))))));
                    var_22 |= ((/* implicit */short) ((((_Bool) arr_4 [i_2 + 2] [i_2] [i_2 - 1])) ? ((~(((var_4) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(signed char)24] [i_0])))))))));
                    var_23 = ((/* implicit */int) (((!(((/* implicit */_Bool) -1015456295)))) ? ((((~(var_2))) << (((((((/* implicit */int) var_9)) << (((var_2) - (2442085989409596228ULL))))) - (1610612697))))) : (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */int) (((-(6021150344549208385ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)127)))))));
                    var_25 = max((min((((int) var_14)), (((/* implicit */int) (short)-28335)))), (((/* implicit */int) min(((signed char)-24), ((signed char)113)))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            arr_20 [i_5] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0] [i_3] [i_3] [i_6]);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 0)) & (9928637586569994864ULL))))));
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_27 |= ((/* implicit */short) ((((/* implicit */int) ((short) min((9788982815567779587ULL), (((/* implicit */unsigned long long int) -3870119562320389020LL)))))) & (((/* implicit */int) var_7))));
                            var_28 = (signed char)-24;
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */int) min((max((arr_4 [i_0] [i_5] [i_8]), (arr_24 [i_3] [i_3 - 3]))), ((((_Bool)1) && ((_Bool)1)))));
                            arr_26 [i_3] [i_3] = ((/* implicit */short) arr_25 [i_8] [i_0] [i_0] [i_3] [i_0]);
                            var_30 = ((/* implicit */unsigned long long int) arr_21 [i_8] [i_5] [i_4] [i_3]);
                        }
                        for (short i_9 = 2; i_9 < 23; i_9 += 2) 
                        {
                            arr_31 [i_3] [i_5] [1LL] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) arr_11 [i_3] [i_9]))));
                            arr_32 [i_3] = (_Bool)1;
                            var_31 *= ((/* implicit */int) (_Bool)1);
                            var_32 = ((/* implicit */_Bool) arr_12 [i_5] [i_4] [i_0] [i_0]);
                            var_33 = ((/* implicit */_Bool) min(((-(arr_12 [i_3 - 2] [i_9 - 2] [17ULL] [i_4]))), ((((-(arr_12 [i_0] [i_4] [i_0] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_3] [i_0])))))));
                        }
                        /* LoopSeq 4 */
                        for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            arr_37 [i_0] [i_3] [i_4] [i_5] [i_0] &= max((((/* implicit */short) (_Bool)1)), ((short)-15308));
                            var_34 = ((/* implicit */long long int) ((signed char) arr_22 [i_0] [i_3] [i_4] [i_5] [i_10]));
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((((/* implicit */int) (short)4803)), (1080849560))))));
                            var_36 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) (unsigned char)210)) ? (arr_19 [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (1405188653U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_17))))));
                            var_37 = min((((short) arr_12 [i_0] [i_0] [i_4] [i_3 + 2])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_10] [i_10] [5ULL] [i_3 - 1]))))));
                        }
                        for (int i_11 = 1; i_11 < 24; i_11 += 1) 
                        {
                            var_38 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_10))) << (((min((arr_0 [i_5]), (((/* implicit */int) var_1)))) - (187)))))) == ((~(var_2)))));
                            var_39 = ((/* implicit */unsigned int) arr_35 [i_3] [i_3] [i_3] [i_3]);
                            var_40 = ((/* implicit */long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0]))) != (var_2))))));
                        }
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_41 = ((/* implicit */long long int) ((arr_13 [i_3] [i_3 - 1] [i_3 - 1]) <= (arr_13 [i_3] [i_3 - 1] [i_3 - 1])));
                            arr_42 [23] [i_3] [24ULL] [i_5] [i_3] [i_12] [i_3] = ((/* implicit */signed char) arr_27 [i_12] [1] [1] [19ULL] [19ULL] [i_0] [i_0]);
                            arr_43 [i_3] [0LL] = ((/* implicit */signed char) ((unsigned short) arr_27 [i_0] [i_3] [7LL] [i_3] [i_12] [i_3 + 1] [i_3 - 3]));
                            arr_44 [i_12] [i_3] [i_5] [i_4] [i_3] [i_3] [i_0] = ((/* implicit */signed char) ((unsigned int) arr_7 [i_3 + 2]));
                            var_42 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) ^ (((/* implicit */int) var_4))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            var_43 *= ((/* implicit */unsigned long long int) min((arr_45 [i_0] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_13]), (arr_29 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 2])));
                            arr_49 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1234597959U), (((/* implicit */unsigned int) -270478329))))) ? (min((((/* implicit */int) var_9)), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) ((((/* implicit */_Bool) 10951895979631703032ULL)) || ((_Bool)1)))) >> (((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) arr_17 [i_0] [i_4] [i_5] [i_3] [i_0])))))))));
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((var_17), (((/* implicit */unsigned long long int) var_11)))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) arr_18 [9ULL] [i_3 + 1] [i_4] [(unsigned char)11] [9ULL] [9ULL]))))));
                        }
                        var_45 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_9 [i_3 - 3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1139))) : (arr_9 [i_3 - 2] [i_3 - 2])))));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) var_2))));
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        arr_52 [i_3] [i_3] [i_3 + 1] [i_3 + 2] = ((/* implicit */unsigned int) (short)11661);
                        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) : (arr_50 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)4833)) : (((/* implicit */int) (short)24179)))) | (((/* implicit */int) max((var_5), (var_9))))))))))));
                    }
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((short) (_Bool)1)))));
                }
            } 
        } 
    }
    var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((long long int) (signed char)-24)) < (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((unsigned char) var_4)))))))))));
    var_50 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_13)) : (var_15))))) <= (var_14)));
    /* LoopSeq 4 */
    for (int i_15 = 0; i_15 < 24; i_15 += 4) 
    {
        var_51 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-127)) * (((/* implicit */int) (signed char)30))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 536870912)) : (arr_54 [22LL])))) ? (max((var_16), (((/* implicit */unsigned int) (signed char)-33)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 3) 
        {
            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((unsigned long long int) (signed char)55)))));
            var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) var_0))));
            arr_59 [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-31053)) ? (-536870913) : (((/* implicit */int) (short)4786)))) + ((~(arr_25 [i_15] [i_15] [i_15] [i_15] [i_15])))));
            var_54 += ((/* implicit */unsigned int) ((short) (_Bool)1));
        }
        var_55 += ((/* implicit */short) max(((-(2179506857U))), (((/* implicit */unsigned int) max((arr_41 [i_15] [i_15] [i_15] [12LL] [i_15] [i_15]), (arr_41 [i_15] [i_15] [i_15] [i_15] [(unsigned char)21] [(unsigned char)21]))))));
        var_56 += ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_16 [18] [i_15] [i_15] [i_15] [(signed char)10] [(short)23])) ? (arr_55 [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */int) ((((var_4) ? (((/* implicit */int) var_3)) : (arr_56 [i_15]))) != ((+(((/* implicit */int) arr_3 [i_15])))))))));
        var_57 = ((/* implicit */int) var_3);
    }
    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 4) 
    {
        var_58 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) 2089851503342258248ULL)))));
        arr_63 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) min((arr_18 [i_17] [18U] [i_17] [i_17] [i_17] [i_17]), (((/* implicit */short) (signed char)103))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_8))))) : (((((/* implicit */int) arr_51 [i_17] [(short)11] [i_17] [i_17])) ^ (var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 1; i_18 < 7; i_18 += 1) 
    {
        var_59 |= ((/* implicit */short) var_2);
        var_60 = ((/* implicit */unsigned long long int) (-(arr_1 [i_18 + 3])));
    }
    for (unsigned int i_19 = 2; i_19 < 17; i_19 += 1) 
    {
        arr_69 [i_19] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), ((~(14913745548187172147ULL)))));
        arr_70 [i_19] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((arr_28 [i_19] [i_19]) != (var_0)))) == (((/* implicit */int) (short)25795)))))));
    }
}
