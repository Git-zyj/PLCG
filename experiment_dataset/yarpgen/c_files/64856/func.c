/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64856
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
    for (int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))))));
        var_13 = ((/* implicit */int) max((var_13), ((+(min((arr_2 [i_0 + 1] [(short)0]), (arr_2 [i_0 - 4] [(unsigned short)4])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-98), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */int) max(((short)-28608), (((/* implicit */short) (signed char)115))))) : ((-((+(-2105192126))))))))));
        arr_6 [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)1] [i_1])) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_3 [(unsigned short)6] [(unsigned char)4])))));
        var_15 -= ((((/* implicit */_Bool) arr_4 [i_1])) ? (max((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-26704)) + (2147483647))) >> (((32767) - (32750)))))), (max((((/* implicit */unsigned int) (signed char)115)), (2018762288U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2147483647)))));
    }
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) max((((signed char) var_0)), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_2])))))));
        arr_9 [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned long long int) (signed char)31)), (((/* implicit */unsigned long long int) 2087546621U))))) ? (((/* implicit */int) (short)28239)) : (((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (unsigned char)63)) : ((+((-2147483647 - 1))))))));
        arr_10 [i_2] = ((((/* implicit */_Bool) ((unsigned short) max((var_8), (arr_5 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2])) || (((/* implicit */_Bool) (signed char)-107))))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_0 [i_2]) : (-1527145522))));
        arr_11 [i_2] &= ((/* implicit */int) var_11);
        var_17 = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)115)) << (((2207420675U) - (2207420662U))))), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_1)))) >= (arr_0 [i_2]))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 4; i_3 < 16; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            arr_24 [i_7] [i_3] [(signed char)2] [i_4] [i_3] [i_3 + 1] = ((/* implicit */short) var_7);
                            var_18 *= ((/* implicit */short) (-(arr_2 [i_3 - 1] [i_6])));
                            arr_25 [i_5] [i_6] |= ((/* implicit */unsigned short) var_3);
                            var_19 = ((/* implicit */int) ((short) (signed char)-36));
                            var_20 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)178)) >> (((16819759815872353693ULL) - (16819759815872353674ULL))))) | (arr_17 [i_4 + 2] [i_4 + 2] [i_4 - 2])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_30 [i_3] [i_6] [i_6] [i_8] &= ((/* implicit */int) ((unsigned long long int) var_3));
                            arr_31 [i_8] [i_8] [i_3] [i_3] [i_4 - 1] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1857678952)) ? (2678840960U) : (((/* implicit */unsigned int) ((var_6) % (var_10))))));
                        }
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            arr_34 [i_3] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)31)) ? (332782399) : (((/* implicit */int) arr_16 [i_3 + 1] [i_4 + 2] [(unsigned short)11])))));
                            var_21 = ((-1958004701) ^ (((/* implicit */int) arr_32 [i_3 + 1] [(signed char)16] [i_4] [i_4 + 1] [i_4 + 1])));
                        }
                    }
                    for (int i_10 = 2; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 2; i_11 < 14; i_11 += 1) 
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1854251100)) ? (((/* implicit */unsigned int) var_5)) : (2207420690U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))));
                            var_23 = ((/* implicit */signed char) ((unsigned short) arr_0 [i_3 + 1]));
                        }
                        for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [(unsigned char)8])) ? (((/* implicit */int) (short)29882)) : (arr_19 [i_10 - 2] [(unsigned short)12] [i_3 - 4] [i_5] [i_3 - 4]))))));
                            arr_41 [i_3] [(signed char)9] [i_5] [i_10] [i_3] [i_3 - 1] [(unsigned short)5] = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_10 + 4] [i_10 - 2] [i_5] [i_5] [i_3 + 1]))));
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_39 [12] [12])))));
                        }
                        var_26 -= ((/* implicit */unsigned long long int) ((unsigned short) (short)-19566));
                    }
                    for (int i_13 = 2; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        var_27 += ((/* implicit */signed char) ((unsigned int) (+(2087546621U))));
                        /* LoopSeq 1 */
                        for (int i_14 = 2; i_14 < 16; i_14 += 2) 
                        {
                            var_28 += (-(((int) arr_37 [i_14] [i_14])));
                            arr_47 [i_14 - 2] [i_14] [i_13] [i_5] [i_14] [i_3 - 3] |= ((/* implicit */unsigned short) (_Bool)1);
                            var_29 = ((/* implicit */short) (-(((/* implicit */int) arr_29 [i_3 + 1] [i_3]))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)37674)))))))));
                        }
                    }
                    var_31 -= ((/* implicit */signed char) ((8238606573405732814ULL) * (((/* implicit */unsigned long long int) 219131417))));
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        arr_50 [i_15] [i_3] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_5] [i_15])) ? (((/* implicit */int) arr_48 [i_4 + 2] [i_4 - 2] [i_5] [i_5] [i_3])) : (((/* implicit */int) arr_48 [i_3 + 1] [11] [i_4 - 1] [i_5] [i_3]))));
                        arr_51 [i_15] [i_3] [i_3] [i_3] = (-(((((/* implicit */_Bool) -114871724)) ? (((/* implicit */int) (unsigned short)9098)) : (((/* implicit */int) (unsigned short)64825)))));
                        var_32 = ((unsigned short) (signed char)31);
                    }
                    for (unsigned short i_16 = 4; i_16 < 15; i_16 += 4) 
                    {
                        arr_55 [i_4 - 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (arr_19 [i_3 + 1] [i_4] [(unsigned short)14] [i_5] [(signed char)0]) : (arr_17 [i_4 + 1] [i_4 - 3] [i_5])));
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 17; i_17 += 4) 
                        {
                            var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */int) arr_27 [i_3 - 3] [i_4 - 3] [i_5] [i_3 - 2] [i_17])) / (arr_0 [i_3 - 4])))));
                            arr_58 [i_3] [i_4 + 2] [(unsigned short)11] [(signed char)1] [i_16 - 4] [i_17] [i_17] = ((/* implicit */int) arr_46 [i_3 - 3] [i_3 - 3] [i_5] [i_5] [i_17] [i_5] [16LL]);
                        }
                    }
                    var_34 = ((/* implicit */short) (-(((((/* implicit */_Bool) -671413896)) ? (((/* implicit */int) arr_16 [i_3] [i_4 + 2] [i_5])) : (var_5)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        arr_62 [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) arr_37 [i_3] [i_3]);
                        var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)31751))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */long long int) ((((/* implicit */int) (short)-6615)) != (((/* implicit */int) var_11))));
        /* LoopSeq 2 */
        for (long long int i_19 = 3; i_19 < 15; i_19 += 1) 
        {
            arr_65 [i_3] = ((/* implicit */signed char) ((int) (signed char)-121));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 17; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    {
                        var_37 = ((/* implicit */short) (-(2207420687U)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_22 = 2; i_22 < 15; i_22 += 1) 
                        {
                            arr_72 [6LL] [i_3] = 1091741726;
                            var_38 = ((/* implicit */unsigned short) (~(arr_59 [i_3 - 1] [i_19 - 2] [i_20])));
                        }
                        for (unsigned char i_23 = 3; i_23 < 15; i_23 += 1) 
                        {
                            arr_75 [i_19 - 3] [(unsigned short)1] [i_3] = ((/* implicit */short) arr_54 [i_3] [i_3] [i_3] [i_20] [i_21] [i_23]);
                            arr_76 [i_3 - 1] [i_19 - 3] [i_21] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_21]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_24 = 2; i_24 < 15; i_24 += 3) 
        {
            var_39 = 769911440U;
            arr_79 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2530307047U) - (((/* implicit */unsigned int) var_10))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_3 - 4] [i_3] [i_24 - 1] [i_3 - 4]))) - (arr_74 [i_3 - 4] [i_3] [i_3 - 2] [(signed char)15] [i_24] [i_24 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1958004690)) ? (768033298) : (var_5))))));
            arr_80 [i_3] = ((/* implicit */unsigned long long int) (-(((var_2) << (((8573272129854830860ULL) - (8573272129854830858ULL)))))));
            arr_81 [i_3] = ((/* implicit */int) (-(10073021764311479173ULL)));
        }
        /* LoopNest 3 */
        for (short i_25 = 0; i_25 < 17; i_25 += 3) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (unsigned int i_27 = 4; i_27 < 15; i_27 += 2) 
                {
                    {
                        arr_92 [i_27] |= ((/* implicit */short) (!(((/* implicit */_Bool) (short)10175))));
                        var_40 = ((/* implicit */short) ((unsigned char) 768033298));
                        var_41 = ((/* implicit */int) ((unsigned short) arr_35 [i_3 - 1] [i_3 - 4] [i_3] [i_3 - 1] [16LL]));
                    }
                } 
            } 
        } 
        arr_93 [i_3] = ((/* implicit */int) arr_54 [i_3] [i_3 - 4] [i_3] [i_3 - 1] [i_3 - 4] [i_3 - 4]);
    }
}
