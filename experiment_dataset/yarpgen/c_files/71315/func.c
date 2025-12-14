/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71315
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31883))) : (596130496U))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((signed char) (unsigned short)33651);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_17 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)-103)) & (((/* implicit */int) (signed char)70))));
            arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)33653))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
            {
                arr_11 [i_0] [i_0] = min(((signed char)-42), ((signed char)63));
                arr_12 [i_0] [i_0 - 1] [9U] [i_2] = (i_0 % 2 == 0) ? (((/* implicit */signed char) (+(((((((/* implicit */int) min((var_11), ((signed char)-109)))) + (2147483647))) >> (((min((arr_0 [i_2]), (((/* implicit */unsigned int) arr_1 [i_0])))) - (40067U)))))))) : (((/* implicit */signed char) (+(((((((/* implicit */int) min((var_11), ((signed char)-109)))) + (2147483647))) >> (((((min((arr_0 [i_2]), (((/* implicit */unsigned int) arr_1 [i_0])))) - (40067U))) - (4294965238U))))))));
                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (signed char)127)))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)32))));
                    arr_16 [i_3 - 1] [i_0] [i_0] [i_0 + 1] = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)111), (arr_2 [i_1]))))) ^ (max((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)47))))));
                    var_20 = ((unsigned int) min(((unsigned char)113), (((/* implicit */unsigned char) (signed char)-33))));
                }
                for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
                {
                    var_21 &= ((/* implicit */signed char) ((min((arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])) || (((/* implicit */_Bool) 3118392787U))))))) - ((+(min((((/* implicit */unsigned int) arr_17 [(signed char)14] [(signed char)14] [i_4])), (arr_13 [i_0] [i_1] [i_2] [i_0])))))));
                    var_22 += ((/* implicit */signed char) min((((unsigned short) max((arr_19 [(signed char)12] [(signed char)12] [i_1] [(signed char)12]), (((/* implicit */unsigned short) (signed char)105))))), (((/* implicit */unsigned short) ((unsigned char) (-(var_10)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_0 + 1] [i_0] [(unsigned char)20] [i_0] [i_0] [i_0] = min((((arr_9 [i_4 + 2] [i_0 + 1]) << (((arr_9 [i_4 + 2] [i_0 + 1]) - (3425512996U))))), (((((/* implicit */_Bool) (unsigned char)14)) ? (2221486649U) : (1501191087U))));
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_9 [i_0 - 1] [i_0 - 1]) <= (arr_9 [i_0 + 1] [i_4 + 2]))))));
                        arr_24 [i_4] [i_1] [(unsigned short)13] [i_0] [i_5] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_1 [i_0]))))) || (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) (signed char)0))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0] [i_4] [i_2] [i_0 - 1] [i_0 - 1] [i_0]))))) : (min((((((/* implicit */_Bool) (unsigned char)237)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (min((4294967292U), (3584074111U)))))));
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))) : (arr_4 [(signed char)2]))))) ? (max(((+(((/* implicit */int) (unsigned char)255)))), (((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_21 [(unsigned short)19] [i_0] [i_1] [i_2] [(unsigned short)19] [i_5])))))) : ((+(((/* implicit */int) ((signed char) (unsigned char)242)))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((((min((var_10), (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_2] [i_4] [(unsigned short)19])))) % (((arr_9 [(unsigned short)14] [(unsigned short)14]) + (3758096384U))))) << (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_4] [i_4] [i_2] [i_1]))))) != (arr_4 [i_0]))))));
                        var_25 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (unsigned short)17305)) ? (((/* implicit */int) arr_26 [i_6])) : (((/* implicit */int) (signed char)93)))), (((((/* implicit */int) (signed char)104)) - (((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */int) arr_26 [i_6 + 1])) / (((/* implicit */int) arr_26 [i_6 - 2]))))));
                        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)202)) && (((/* implicit */_Bool) (unsigned char)1))))) - (((/* implicit */int) arr_2 [i_0 - 1]))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_27 *= ((/* implicit */unsigned char) ((((unsigned int) arr_28 [i_0] [i_0 + 1] [i_0] [i_7 - 2] [i_7])) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-49)) + (((/* implicit */int) arr_25 [i_0] [(signed char)6] [i_0 + 1] [i_0 + 1] [i_7] [(signed char)10] [i_7])))))))));
                        arr_31 [i_0] [(signed char)12] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((unsigned char) min((max((arr_6 [i_0 + 1] [(signed char)12] [i_2]), (arr_6 [i_0] [i_0] [i_4]))), (((/* implicit */unsigned int) ((signed char) var_7))))));
                        arr_32 [(signed char)2] [i_0] [20U] [(unsigned char)7] [20U] = ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [19U] [i_1] [i_2] [i_1] [i_2]))))) ? (max((((/* implicit */unsigned int) arr_19 [i_0] [i_7 + 1] [4U] [i_7 + 1])), (3584074105U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_2])) + (((/* implicit */int) arr_20 [i_2] [i_7]))))))) + (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_9 [i_7] [i_1]))) - (((710893175U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)206))))))));
                        var_28 = ((/* implicit */unsigned short) var_0);
                    }
                }
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
            {
                var_29 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)32))) & (((/* implicit */int) (unsigned short)8357))));
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-47)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)56)) - (35)))))))))));
            }
        }
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_10 = 3; i_10 < 19; i_10 += 3) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) <= (((((/* implicit */int) var_5)) / (((/* implicit */int) var_1))))))) << (((((((/* implicit */_Bool) ((710893197U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))))) ? (((/* implicit */int) min(((unsigned char)99), (var_7)))) : (((((/* implicit */int) arr_28 [i_0] [i_0 - 1] [(signed char)6] [(signed char)6] [i_0])) + (((/* implicit */int) arr_28 [(unsigned short)12] [(unsigned short)12] [(unsigned short)10] [(signed char)15] [i_9])))))) - (76)))));
                arr_40 [i_0] = (signed char)-71;
                var_32 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((~(((/* implicit */int) arr_37 [i_0]))))));
                var_33 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_10))) / (((((/* implicit */int) var_2)) / (((/* implicit */int) (unsigned char)99))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_10 - 3] [i_0 - 1]))) / (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_10 - 3])))))));
            }
            var_34 = ((/* implicit */signed char) min((((unsigned short) (+(((/* implicit */int) (signed char)23))))), (((/* implicit */unsigned short) (signed char)127))));
            var_35 = ((/* implicit */unsigned short) (unsigned char)255);
        }
        for (unsigned char i_11 = 1; i_11 < 19; i_11 += 1) 
        {
            arr_45 [i_0] [0U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_0 + 1] [i_0] [i_11] [i_11 + 2]))));
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(signed char)12] [(signed char)12] [i_0] [i_0 + 1]))))))))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_39 [i_11 + 2] [i_11 + 2] [i_0])), (var_9)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) arr_28 [i_0 - 1] [i_0 - 1] [(signed char)18] [i_11 - 1] [i_11 + 2]))))) : (((/* implicit */int) min(((unsigned char)166), (arr_10 [(signed char)0] [(signed char)15] [i_11] [i_11 - 1]))))))) | ((((!(((/* implicit */_Bool) (signed char)73)))) ? (arr_6 [(unsigned char)18] [i_11] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)3793)) << (((((/* implicit */int) (unsigned char)60)) - (53)))))))))))));
        }
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((524287U), (((/* implicit */unsigned int) var_5)))))) || (((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [(signed char)6])) & (((/* implicit */int) arr_38 [(signed char)11] [i_0] [(unsigned char)13] [(unsigned short)20]))))))))))));
        arr_46 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((signed char) ((unsigned short) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_0))))));
        var_39 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_15 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))) * (((/* implicit */int) ((((/* implicit */int) (signed char)59)) < (((/* implicit */int) (unsigned char)189)))))));
    }
    for (unsigned int i_12 = 4; i_12 < 7; i_12 += 1) 
    {
        arr_49 [i_12 - 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)111))));
        arr_50 [i_12] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_48 [i_12 + 3]))))));
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (+((((-(arr_42 [i_12]))) >> (((((/* implicit */int) ((unsigned short) arr_4 [(unsigned short)12]))) - (15276))))))))));
        arr_51 [i_12] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-59)) || (((/* implicit */_Bool) 15U))))))))));
        /* LoopSeq 2 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            var_41 -= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_34 [i_12] [i_12] [i_12 - 3] [i_12])) && (((/* implicit */_Bool) 536870912U)))));
            var_42 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)3))))));
            var_43 &= ((/* implicit */signed char) ((max((((((/* implicit */int) arr_19 [18U] [i_13] [i_13] [(signed char)0])) % (((/* implicit */int) arr_53 [(unsigned char)6] [(unsigned char)6])))), (((/* implicit */int) arr_53 [i_12 + 1] [i_12 - 3])))) << (((min((((/* implicit */int) arr_36 [i_12])), ((-(((/* implicit */int) arr_43 [i_12] [i_12])))))) + (31296)))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 3; i_16 < 9; i_16 += 2) 
                        {
                            var_44 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_38 [i_13] [i_14] [i_15] [i_16])))) % (((((/* implicit */int) arr_20 [i_12 + 2] [i_13])) ^ ((~(((/* implicit */int) arr_62 [i_15] [i_15] [i_13] [i_15] [i_15]))))))));
                            var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)149)))))));
                            arr_63 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_15] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)18)) % (((/* implicit */int) (unsigned short)46732))));
                        }
                        for (unsigned char i_17 = 3; i_17 < 8; i_17 += 3) 
                        {
                            arr_67 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) min(((signed char)-60), (arr_53 [i_15] [i_13]))))))) <= (((((((/* implicit */_Bool) arr_2 [i_13])) ? (3758096391U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)131)))))))));
                            arr_68 [i_15] [i_13] [i_14] [i_15] [i_17 + 2] &= ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_43 [i_14] [i_15])), (((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (signed char)-39)))))), (((/* implicit */int) max(((unsigned char)104), (((/* implicit */unsigned char) (signed char)31)))))));
                        }
                        var_46 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) / (arr_34 [i_12 + 1] [i_12 - 1] [i_15] [i_12 - 1]))) << (((/* implicit */int) ((((/* implicit */int) arr_35 [i_12 - 3] [i_12 + 1])) > (((/* implicit */int) arr_55 [i_12 - 3] [(signed char)0] [i_12])))))));
                        var_47 = arr_27 [i_12 - 4] [i_12 - 4] [i_12 - 3] [i_12 + 3];
                        var_48 = ((/* implicit */signed char) ((((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)102)), (925230118U))) < (185163418U)))) < (((((/* implicit */int) (unsigned short)16490)) & (((/* implicit */int) (unsigned char)140))))));
                    }
                } 
            } 
            arr_69 [i_13] [i_13] = ((/* implicit */unsigned short) ((signed char) min(((+(((/* implicit */int) arr_19 [i_13] [i_13] [i_12] [(signed char)14])))), (((/* implicit */int) (unsigned char)246)))));
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            arr_72 [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_12 + 3] [i_12 - 2] [i_12 - 2] [i_12 - 2]))));
            var_49 = ((/* implicit */signed char) ((unsigned short) (unsigned short)57950));
        }
    }
    var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_14)))) >= (((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)127)))))))) ^ (((((var_6) << (((((/* implicit */int) (unsigned short)65530)) - (65508))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    var_51 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-23)) >= ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
}
