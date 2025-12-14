/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58943
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
    var_11 = ((/* implicit */signed char) (-(var_6)));
    var_12 = var_3;
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-92)) : (max((var_9), (((/* implicit */int) arr_0 [16])))))), ((+(var_2)))));
        arr_5 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-92)))) <= ((-(((/* implicit */int) arr_2 [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (signed char)96);
                    arr_13 [14] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) ^ (arr_3 [1]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 3])))))) ? (((((/* implicit */_Bool) (signed char)-60)) ? (-22) : (((/* implicit */int) min(((short)960), (((/* implicit */short) (signed char)19))))))) : (-350242826));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (short i_5 = 3; i_5 < 21; i_5 += 4) 
                {
                    {
                        arr_23 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_9))), (2147483647)))) ? (((((var_9) + (2147483647))) << (((arr_10 [i_0] [i_3]) - (3711323999134825761ULL))))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)3)) : (309038839))) << (((((/* implicit */int) (short)935)) - (919)))))));
                        arr_24 [i_0] [i_3] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [17U] [i_5 - 1])) ? (var_9) : (((/* implicit */int) (signed char)15))))) > (min((min((var_1), (((/* implicit */unsigned long long int) -1675424892)))), (((/* implicit */unsigned long long int) var_0))))));
                        arr_25 [i_0] [i_3] [i_4] [i_5] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) (short)140)), (((((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [(signed char)5])) ^ (2097024)))))), (((((/* implicit */_Bool) ((long long int) (signed char)-97))) ? (((7026104519858074826LL) | (((/* implicit */long long int) 1031412445U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5 - 3] [i_5 + 2])))))));
                        arr_26 [i_0] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 - 1])) ? (min((var_7), (((/* implicit */unsigned long long int) -293221445159566439LL)))) : (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) (_Bool)1))))))) & (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 1)) : (var_6))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_3] [11LL]))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
    {
        var_13 *= ((((/* implicit */_Bool) max((((/* implicit */signed char) ((1048575U) < (((/* implicit */unsigned int) var_2))))), ((signed char)-57)))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (short)966)) && (((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) arr_11 [(unsigned short)4] [i_6] [i_6] [i_6])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_32 [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)120))));
            var_14 ^= ((/* implicit */long long int) arr_14 [i_6] [i_7] [i_7]);
            arr_33 [i_7] [7] [i_6] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_27 [i_7] [15U])))) && (((/* implicit */_Bool) var_0))));
            var_15 = ((/* implicit */signed char) max((var_15), ((signed char)-17)));
        }
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            arr_38 [18LL] [i_6] [18LL] &= ((/* implicit */int) var_0);
            /* LoopNest 2 */
            for (long long int i_9 = 2; i_9 < 22; i_9 += 2) 
            {
                for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
                {
                    {
                        var_16 += ((/* implicit */unsigned char) 524272ULL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_11 = 2; i_11 < 21; i_11 += 3) 
                        {
                            arr_47 [i_6] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_7 [(signed char)20] [15ULL])))) || (((/* implicit */_Bool) arr_46 [i_11 - 1] [i_10 - 1]))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) (short)12288)) - (((/* implicit */int) arr_22 [i_11] [i_11 + 1] [i_11] [i_11] [i_11] [i_10]))));
                            arr_48 [16] [i_8] [i_11] [i_11] [16] = ((/* implicit */short) arr_11 [i_6] [4] [4] [i_11]);
                            var_18 ^= (-(((/* implicit */int) var_5)));
                            arr_49 [i_9] [i_11] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [i_11 - 1] [(signed char)5] [i_11]))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 21; i_12 += 4) 
        {
            arr_54 [i_12] [i_12] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_12 - 3] [i_12] [i_6] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_12 + 2] [i_6] [i_6] [i_6]))) : (arr_37 [i_12 + 2])));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 4; i_13 < 22; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_12 + 1] [i_12 - 3] [i_13 - 3])) : (((/* implicit */int) arr_16 [i_12 - 1] [i_12 - 1] [i_13 + 1])))))));
                        arr_62 [i_6] [15LL] [(short)5] [i_14] [i_13] = ((signed char) -2220132292977098394LL);
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -8621729342227367161LL)) : (arr_39 [i_6] [i_6]))))));
    }
    for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        var_21 ^= ((/* implicit */int) (~(min((1342188716U), (((/* implicit */unsigned int) arr_55 [i_15] [i_15] [i_15]))))));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        arr_73 [i_16] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)-31)), (min((arr_61 [i_15] [i_17]), (arr_61 [i_15] [i_15])))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_43 [(signed char)20] [i_17] [15U] [(signed char)9]))));
                    }
                    var_23 = ((/* implicit */unsigned char) 2952778580U);
                    /* LoopSeq 4 */
                    for (unsigned char i_19 = 1; i_19 < 17; i_19 += 2) 
                    {
                        arr_77 [i_16] [i_17] [i_16] [i_16] [i_16] = ((/* implicit */int) var_4);
                        arr_78 [i_16] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_51 [i_19 + 2] [i_19] [i_19 + 3]) < (arr_51 [i_19 + 2] [i_19 + 2] [i_19 + 3]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (+(32767LL)));
                            var_25 = ((/* implicit */unsigned int) min((var_25), ((~(2281204033U)))));
                            arr_81 [i_15] [i_16] = ((/* implicit */int) arr_9 [4] [i_15]);
                        }
                        for (long long int i_21 = 0; i_21 < 20; i_21 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(((/* implicit */int) (short)-10739)))))));
                            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (1035652912U)))) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_15] [i_16]))) != (11U))))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_4)))), (min((127ULL), (arr_67 [i_15] [i_16])))))));
                            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-41))))) ? (((((((((/* implicit */int) var_0)) + (2147483647))) << (((19LL) - (19LL))))) / (((/* implicit */int) (signed char)-20)))) : (((((/* implicit */_Bool) arr_55 [i_19 - 1] [i_19] [i_19 + 2])) ? (((/* implicit */int) arr_55 [i_19 + 1] [i_19] [i_19 - 1])) : (((/* implicit */int) (signed char)37))))));
                        }
                    }
                    for (int i_22 = 2; i_22 < 19; i_22 += 1) 
                    {
                        arr_86 [i_16] [i_17] [i_17] [i_17] [i_16] [i_16] = ((/* implicit */signed char) (!(((-1200100080) < (((/* implicit */int) arr_84 [i_15] [i_16] [i_17] [i_16]))))));
                        var_29 = ((/* implicit */int) ((((/* implicit */int) min(((short)7601), (((/* implicit */short) (_Bool)1))))) >= (((/* implicit */int) (short)7598))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)111), (((/* implicit */unsigned char) (signed char)113))))) % (((/* implicit */int) ((signed char) var_8)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1700771352)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))) : (-1230267333221111859LL)))), (var_1))))))));
                        arr_87 [i_15] [i_16] [12] [i_17] [i_22] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((-(2147483647))), (((((((/* implicit */int) arr_58 [i_17])) + (2147483647))) << (((13590256784458336026ULL) - (13590256784458336026ULL)))))))), (min((((/* implicit */long long int) (unsigned char)0)), (arr_57 [i_22] [i_22 + 1] [i_22 - 2] [i_17])))));
                    }
                    for (unsigned short i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        arr_92 [7] [i_16] [i_16] [i_23] = ((/* implicit */unsigned short) (((((((_Bool)1) ? (21ULL) : (((/* implicit */unsigned long long int) 2147483647)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_15] [i_15]))))) ? (((((/* implicit */_Bool) (-(1879048192)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 350242825)) > (var_6))))) : (158ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) var_0)))))))))));
                        arr_93 [i_15] [i_16] [i_16] [i_23] = ((/* implicit */unsigned short) (short)-12284);
                        var_31 |= ((/* implicit */signed char) ((2147483628) / (-2147483647)));
                    }
                    for (signed char i_24 = 1; i_24 < 19; i_24 += 1) 
                    {
                        var_32 ^= ((/* implicit */unsigned long long int) var_9);
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) 0))));
                        arr_98 [i_15] [i_15] [8ULL] [i_16] [8ULL] = ((/* implicit */int) min((((((/* implicit */_Bool) 878184769)) ? (arr_76 [i_16] [19U] [i_24 - 1] [i_16]) : (arr_76 [i_16] [i_24] [i_24 - 1] [i_16]))), (min((arr_76 [i_16] [i_24] [i_24 - 1] [i_16]), (((/* implicit */unsigned long long int) var_0))))));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (-2147483647)))) <= (min((arr_67 [i_15] [i_15]), (((/* implicit */unsigned long long int) var_5)))))))));
        var_35 ^= min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) arr_35 [i_15] [i_15])) : (((/* implicit */int) arr_35 [i_15] [3LL]))))), (((((/* implicit */long long int) 8388607U)) - (var_6))));
        var_36 += ((/* implicit */unsigned int) ((min((((long long int) arr_66 [i_15])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_41 [i_15] [i_15] [i_15] [i_15]))))))) + (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)249)))))))));
    }
}
