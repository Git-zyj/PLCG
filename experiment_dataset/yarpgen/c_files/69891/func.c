/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69891
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)16)))))));
            arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)106)) / (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)253)))) : (((int) arr_5 [i_1]))));
        }
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_12))));
            var_16 *= ((/* implicit */short) ((unsigned char) ((signed char) arr_2 [i_2])));
            arr_11 [i_2] [i_2] [i_2] = min((((signed char) (unsigned char)3)), (min((arr_1 [i_0] [i_2]), (arr_1 [i_0] [i_2]))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_3])) ^ (((/* implicit */int) arr_10 [i_3] [(signed char)10]))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned char) (unsigned char)0)))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    arr_20 [i_0] [i_0] [i_5] = ((short) (unsigned char)253);
                    var_19 &= ((/* implicit */short) arr_12 [i_0] [i_0]);
                }
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0]))) | (((/* implicit */int) var_9))));
            }
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [6ULL] [i_0] [i_0] [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_5 [i_3]))));
            arr_21 [i_0] [i_3] = (!(arr_6 [i_0] [i_3]));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                var_22 ^= ((/* implicit */signed char) ((unsigned char) (unsigned char)243));
                var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) * (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (short)16898))))));
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_3] [i_6])) : (((/* implicit */int) var_11)))))));
                var_25 ^= ((((/* implicit */_Bool) (short)-22757)) ? (((/* implicit */int) arr_10 [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_10 [i_0] [i_0]))))));
                /* LoopSeq 3 */
                for (signed char i_7 = 3; i_7 < 18; i_7 += 4) 
                {
                    arr_26 [i_0] [i_0] [i_6] [i_3] = ((/* implicit */signed char) ((_Bool) var_7));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */short) ((long long int) arr_6 [i_0] [i_6]));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((short) arr_22 [i_0] [i_0] [i_6]))) | (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0])) >= (((/* implicit */int) var_1))))))))));
                    }
                }
                for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 4; i_10 < 16; i_10 += 3) 
                    {
                        arr_36 [(short)6] [(short)6] [(short)6] [i_3] [i_10] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_12 [i_0] [i_3]) : (((/* implicit */int) arr_27 [i_3] [i_0] [i_3] [i_3] [i_0]))));
                        var_27 = ((/* implicit */signed char) ((((arr_8 [i_0] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_6]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) ^ (arr_33 [i_0] [i_3] [i_3] [i_6 + 1] [i_6] [i_3])))));
                    }
                    for (short i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((_Bool) ((unsigned char) (short)-1429))))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)224))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)15)))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_3] [i_6] [i_0] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_8 [i_9] [i_3]))))))));
                        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32738))));
                        var_31 = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_6 + 1]))));
                    }
                    for (short i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [(signed char)10] [i_0] [i_0])))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)28)) ? (((((/* implicit */_Bool) arr_17 [i_3] [i_9] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_27 [i_6] [i_3] [i_6] [i_9] [i_12])) & (((/* implicit */int) var_8))))));
                        var_34 = ((/* implicit */short) ((arr_37 [i_0] [i_6] [i_6] [i_6] [i_6] [(_Bool)1]) ? (((/* implicit */int) arr_15 [14ULL] [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)246))));
                    }
                    for (short i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(signed char)9] [i_6 + 1])) ? (((/* implicit */int) arr_4 [i_9 + 1])) : (((/* implicit */int) ((short) var_11))))))));
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_13])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))))))));
                    }
                    arr_45 [i_0] [i_3] [i_6] [i_6] = ((/* implicit */unsigned char) ((arr_41 [i_6] [i_6] [i_6] [i_9] [i_0] [i_6 + 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6])))));
                }
                for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    arr_49 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_6 + 1] [i_6] [16LL] [i_0])) ? (((/* implicit */int) arr_15 [i_6] [i_6 + 1] [i_6 + 1] [i_6])) : (((/* implicit */int) (unsigned char)5))));
                    /* LoopSeq 4 */
                    for (signed char i_15 = 1; i_15 < 18; i_15 += 2) 
                    {
                        arr_54 [i_6] [i_6] [i_6] [i_6] [(unsigned char)2] [i_15] = ((/* implicit */short) (unsigned char)15);
                        arr_55 [i_0] [i_6] [(unsigned char)1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                        arr_56 [i_6] [i_6 + 1] = ((signed char) ((unsigned char) arr_0 [i_0] [i_3]));
                    }
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        arr_61 [i_0] [i_0] [i_6] [i_0] [i_16] = ((/* implicit */_Bool) arr_16 [i_3] [i_3]);
                        var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_16])) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) (signed char)-9))))) || (((/* implicit */_Bool) ((short) var_12)))));
                    }
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-8455)) - (((/* implicit */int) ((short) var_12)))));
                        var_39 = ((/* implicit */short) (~(((/* implicit */int) arr_39 [i_6 + 1]))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        arr_67 [i_0] [i_0] [i_6 + 1] [i_6] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_0] [i_0] [i_6] [i_6] [i_18])) / (((/* implicit */int) arr_28 [i_6] [i_0] [i_6 + 1] [i_6] [i_18]))));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_6] [i_3] [i_18] [(unsigned char)13])) ? (((/* implicit */int) arr_30 [(unsigned char)7])) : (((/* implicit */int) var_8)))) >= (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_47 [i_0] [i_3] [i_6 + 1] [i_14] [i_18] [i_18])))))))));
                    }
                    var_42 = ((/* implicit */signed char) arr_43 [i_0] [i_0] [i_0] [i_14] [i_0] [i_3]);
                    /* LoopSeq 2 */
                    for (int i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        arr_70 [i_3] [i_6] [i_14] [i_19] = ((/* implicit */unsigned short) ((arr_38 [i_0] [i_6 + 1] [i_6 + 1] [i_14] [i_6 + 1] [i_6 + 1] [14LL]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_38 [i_0] [i_6 + 1] [i_6 + 1] [i_14] [i_14] [i_6 + 1] [i_14]))));
                        var_43 = arr_9 [i_0] [i_0] [i_0];
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])) || (((/* implicit */_Bool) var_4)))))));
                    }
                    for (unsigned long long int i_20 = 4; i_20 < 16; i_20 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) arr_41 [i_14] [i_3] [i_6] [i_14] [i_14] [i_6]))));
                        var_46 -= ((((((/* implicit */_Bool) var_6)) ? (arr_65 [i_0] [i_0] [i_6 + 1] [i_14]) : (((/* implicit */int) (short)22089)))) == (((/* implicit */int) arr_34 [i_3])));
                    }
                }
            }
            for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
            {
                arr_76 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                /* LoopSeq 2 */
                for (long long int i_22 = 1; i_22 < 18; i_22 += 1) 
                {
                    var_47 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_22] [i_3] [i_0] [i_3] [i_0]))) : (arr_0 [i_21] [i_3]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_23 = 1; i_23 < 19; i_23 += 2) 
                    {
                        arr_83 [i_23] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_57 [i_23] [i_23 - 1] [i_22 + 2] [i_21] [(signed char)17] [i_21] [i_21])) >= (((/* implicit */int) (unsigned char)15))));
                        var_48 = ((/* implicit */signed char) (+(((/* implicit */int) arr_46 [i_21] [i_21] [i_22 + 1] [i_23 + 1] [i_23 + 1]))));
                        var_49 *= ((signed char) var_13);
                        var_50 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_0])) ^ (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [4ULL] [i_3])) >= (((/* implicit */int) (unsigned char)27)))))));
                    }
                    for (unsigned char i_24 = 1; i_24 < 18; i_24 += 2) 
                    {
                        var_51 = ((/* implicit */short) ((unsigned char) (signed char)127));
                        arr_87 [i_3] [i_3] [i_21] [i_22] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_3] [i_22])))) * (((/* implicit */int) arr_77 [i_21]))));
                        var_52 &= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_44 [i_0] [i_3] [18LL] [i_22] [i_22] [i_0])) * (((/* implicit */int) arr_63 [i_0] [i_3] [i_21] [i_21] [i_24]))))));
                    }
                }
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 20; i_26 += 1) 
                    {
                        var_53 -= ((/* implicit */short) ((arr_89 [i_25 + 1]) ? (((((/* implicit */_Bool) arr_86 [(unsigned char)14] [i_3] [i_3] [10ULL] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_25 + 1]))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_25 + 1] [i_25 + 1])))));
                        arr_92 [i_0] [i_0] [i_0] [i_0] [i_25 + 1] [i_25 + 1] [i_25 + 1] = ((/* implicit */short) ((unsigned long long int) arr_86 [i_26] [i_3] [i_21] [i_25 + 1] [i_3]));
                        var_54 = ((/* implicit */_Bool) arr_48 [i_26]);
                    }
                    for (signed char i_27 = 0; i_27 < 20; i_27 += 1) 
                    {
                        var_55 = ((((/* implicit */_Bool) arr_58 [i_25 + 1] [i_21])) ? (((/* implicit */unsigned long long int) arr_58 [i_25 + 1] [i_3])) : (var_4));
                        var_56 = ((/* implicit */signed char) var_11);
                    }
                    var_57 *= ((/* implicit */long long int) ((arr_38 [i_0] [i_21] [i_0] [i_25 + 1] [i_21] [i_3] [i_3]) ? (arr_95 [17U]) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_91 [i_0] [(unsigned char)9] [i_25 + 1]))))));
                }
            }
        }
        var_58 = ((((/* implicit */_Bool) arr_41 [14ULL] [i_0] [8ULL] [i_0] [(unsigned short)10] [i_0])) ? (((/* implicit */int) ((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)6)))))))) : (((/* implicit */int) arr_84 [i_0] [i_0])));
    }
    for (signed char i_28 = 0; i_28 < 10; i_28 += 2) 
    {
        var_59 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3931648692U)) ? (((/* implicit */int) arr_34 [i_28])) : (((/* implicit */int) arr_73 [i_28]))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_96 [i_28] [i_28] [i_28] [i_28]))) : (var_7)))))) ? (((((/* implicit */_Bool) arr_90 [i_28] [i_28] [6ULL] [6ULL] [i_28] [i_28] [i_28])) ? (max((((/* implicit */unsigned long long int) var_10)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_40 [i_28] [i_28] [i_28] [(short)14] [i_28]), (((/* implicit */unsigned short) (unsigned char)246)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_27 [i_28] [i_28] [i_28] [i_28] [i_28])) : (((/* implicit */int) (unsigned char)251)))))));
        var_60 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_50 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) ? (((/* implicit */int) arr_50 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) : (((/* implicit */int) arr_98 [i_28] [i_28])))) ^ (((((/* implicit */_Bool) arr_98 [i_28] [i_28])) ? (((/* implicit */int) arr_50 [i_28] [i_28] [(unsigned char)11] [i_28] [19ULL] [i_28])) : (((/* implicit */int) arr_50 [i_28] [i_28] [(unsigned char)19] [i_28] [i_28] [i_28]))))));
        var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) ((((arr_89 [i_28]) ? (((/* implicit */int) arr_89 [i_28])) : (((/* implicit */int) arr_89 [i_28])))) <= (((((/* implicit */int) arr_89 [i_28])) * (((/* implicit */int) arr_89 [i_28])))))))));
        arr_99 [i_28] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(arr_62 [i_28] [i_28] [i_28] [i_28] [i_28]))), (((/* implicit */long long int) arr_77 [i_28]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))));
    }
    var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) ((((unsigned long long int) (unsigned char)2)) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15)))))))))))));
    var_63 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)27)) ^ (((/* implicit */int) (unsigned char)8))));
    var_64 = ((/* implicit */signed char) max((var_1), (((/* implicit */short) var_0))));
}
