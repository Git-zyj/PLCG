/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80697
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            arr_6 [12] |= ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) 114168260U)) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1])))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25038)))))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
            {
                arr_10 [i_0] [i_0] [i_1] [i_0] = ((arr_5 [i_0] [i_0]) ? (((min((var_8), (((/* implicit */unsigned int) arr_5 [(unsigned short)10] [(unsigned short)10])))) << (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [18])) : (arr_3 [i_0] [i_1 + 1]))) - (80))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) arr_5 [i_0] [i_0])))) == (((((/* implicit */int) (signed char)4)) - (((/* implicit */int) arr_0 [i_2 + 2] [i_1])))))))));
                var_16 = min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)10])))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) ^ (arr_4 [i_1])))))));
                arr_11 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_2] [i_1 + 1]);
            }
            for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    arr_16 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */int) var_7);
                    var_17 = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1479812426)) ? (((/* implicit */int) (_Bool)0)) : (arr_13 [i_1]))) << (((((/* implicit */int) var_1)) + (143)))))), (var_8));
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) arr_7 [i_5] [(_Bool)1] [i_0]);
                    var_19 = arr_5 [i_0] [i_1];
                    arr_19 [i_1] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    var_20 += ((/* implicit */int) arr_22 [i_6] [i_3] [i_3] [i_3] [i_0 - 1] [i_0]);
                    var_21 ^= ((/* implicit */unsigned int) ((int) (~(((((/* implicit */int) (unsigned short)40497)) >> (((((/* implicit */int) arr_8 [i_3] [i_3] [i_0 - 1] [i_3])) - (43016))))))));
                    arr_23 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40498)) ? (((/* implicit */int) (signed char)4)) : (1116879726)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3408274761U)))))));
                }
                for (int i_7 = 1; i_7 < 19; i_7 += 3) 
                {
                    arr_26 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned short) ((682785947U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99)))));
                    var_22 = ((/* implicit */signed char) (~((~(arr_24 [i_1] [i_1] [i_3 - 2] [i_7 + 1])))));
                    var_23 = ((/* implicit */signed char) min((var_23), (max((min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_7 - 1] [i_3 - 2] [i_0 - 1])) && (((/* implicit */_Bool) -20976577))))), (arr_0 [i_3 - 1] [i_0]))), ((signed char)51)))));
                    var_24 ^= ((/* implicit */unsigned int) (+(((((arr_5 [(signed char)17] [i_3]) || (arr_18 [i_3] [i_1 + 1] [i_0]))) ? (((/* implicit */int) (unsigned short)25038)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_3 + 2] [i_3]))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23185))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) || (((/* implicit */_Bool) arr_21 [i_0 - 1] [i_7 + 1]))))) & (((/* implicit */int) arr_20 [i_1] [i_3] [i_1] [i_1])))) : (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_1] [i_7 - 1]))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    var_26 = (~(((/* implicit */int) arr_9 [i_0 - 1] [i_1] [(_Bool)1])));
                    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) arr_27 [i_1] [i_0] [i_0] [4]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (682785947U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27573)) / (((/* implicit */int) var_1))))))))));
                        arr_31 [i_0] [i_1] [i_3] [i_1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_1])) + (((/* implicit */int) arr_8 [i_3 - 1] [i_3] [i_3 - 1] [i_1]))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_34 [i_0] [i_1] [i_1] [i_3] [i_8] [16U] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_1] [i_10])) & (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        arr_35 [i_1] [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_28 [(signed char)5] [i_1 + 1] [i_1] [i_1])) ? (var_8) : (1351011645U))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        arr_38 [i_11] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_22 [i_11] [(unsigned short)14] [i_1] [i_1] [i_1 + 1] [i_0]);
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_3] [i_3 - 1] [(signed char)6] [i_3])))))));
                    }
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_41 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */int) arr_8 [i_1] [i_8] [i_1] [i_1])) + (((/* implicit */int) arr_18 [i_3] [i_0] [i_0])))) : (1040779370)));
                        var_30 = ((/* implicit */unsigned short) min((var_30), ((unsigned short)0)));
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        arr_44 [i_0] [i_1] [i_8] [i_13] = ((/* implicit */int) arr_14 [i_1] [1]);
                        arr_45 [(_Bool)1] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                }
            }
            for (unsigned short i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
            {
                arr_50 [i_0 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((1325925086) != (((/* implicit */int) var_5))));
                var_31 += ((/* implicit */int) arr_46 [i_14] [i_1 + 1] [i_0]);
            }
        }
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) arr_18 [i_0] [i_15] [i_15]);
            /* LoopSeq 3 */
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_57 [i_0] [i_15 + 1] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_15 + 1] [i_0 - 1])) ? (max((var_8), (((/* implicit */unsigned int) arr_18 [i_0 - 1] [i_16] [i_16])))) : (((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_16] [i_16] [i_15 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33327))) : (690183933U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_16] [i_15 + 1] [i_15 + 1]))))) : ((-(((/* implicit */int) (signed char)-4))))));
                    arr_58 [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (!((_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)-48)) : (-317636102)))) ? (arr_49 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1])) : (arr_13 [i_16]))))))));
                }
                for (int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    var_33 = arr_2 [i_0];
                    arr_62 [i_18] [i_15 + 1] [i_15] [i_15 + 1] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) + (690183933U)))) ? (((/* implicit */int) (_Bool)1)) : (((-981150371) * (((/* implicit */int) arr_51 [i_15])))))) < (((/* implicit */int) arr_59 [i_15]))));
                    arr_63 [i_18] [i_15] [(unsigned short)13] [i_18] [i_18] = ((/* implicit */unsigned short) (~(((min((arr_54 [i_18] [i_15]), (((/* implicit */int) (signed char)-5)))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_39 [i_0] [i_15 + 1] [i_16] [i_16] [3] [3]))))))));
                    var_34 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20936)) || (arr_5 [i_0] [i_15 + 1])))), ((+(((/* implicit */int) arr_5 [i_0] [i_15 + 1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 1; i_19 < 17; i_19 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) arr_20 [i_18] [i_16] [i_16] [i_19 + 1]);
                        var_36 = var_2;
                        arr_67 [i_18] [i_16] [i_18] = ((/* implicit */_Bool) arr_61 [i_18] [i_15] [(signed char)10] [i_18]);
                        var_37 -= ((/* implicit */int) ((arr_65 [i_19 + 2] [i_16] [i_18] [i_16] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_65 [i_19] [i_16] [i_0] [i_16] [i_0 - 1]))))));
                        arr_68 [i_18] [i_18] [i_18] [(unsigned short)6] [i_16] [i_15] [i_18] = ((/* implicit */unsigned short) arr_20 [i_18] [i_18] [i_16] [i_19]);
                    }
                }
                var_38 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_46 [i_16] [i_15] [i_16])) + (2147483647))) >> (((-317636104) + (317636109)))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-4)) < (((((/* implicit */_Bool) arr_15 [i_0 - 1] [(unsigned short)2] [i_15] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_16])) : (((/* implicit */int) arr_36 [i_16] [i_16] [i_0 - 1] [i_15] [i_0] [i_0 - 1] [i_0]))))))) : (((((/* implicit */int) (_Bool)1)) >> (((arr_54 [i_0 - 1] [i_0]) - (1272638539)))))));
            }
            for (signed char i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
            {
                arr_71 [i_0] [i_0] [i_0] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((arr_20 [i_20] [i_0 - 1] [i_20] [i_15 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_20] [i_0 - 1] [i_0 - 1] [i_15 + 1]))) : (arr_28 [i_0] [i_0 - 1] [i_20] [i_15 + 1]))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)7)))), (-1134325777))))));
                var_39 = (_Bool)1;
            }
            for (signed char i_21 = 0; i_21 < 20; i_21 += 4) /* same iter space */
            {
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (signed char)-16))));
                arr_74 [i_21] [i_15] [i_0] [i_0] = ((/* implicit */unsigned short) arr_52 [i_0]);
            }
            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) arr_47 [i_15] [i_15] [i_0] [i_0]))));
        }
        var_42 = ((/* implicit */unsigned short) arr_48 [i_0] [(signed char)10]);
        /* LoopSeq 1 */
        for (int i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_23 = 3; i_23 < 19; i_23 += 3) 
            {
                var_43 = ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
                var_44 &= ((/* implicit */unsigned int) arr_70 [i_0] [i_0 - 1] [i_22] [i_23 - 1]);
            }
            for (unsigned short i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                arr_85 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (arr_47 [i_0] [i_22] [i_24] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_24] [i_0 - 1] [i_24] [0U] [i_0 - 1])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_22] [i_24]))))) ? (((((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) | (((/* implicit */int) arr_60 [i_0 - 1] [i_0] [i_0] [i_0])))) : (((((/* implicit */int) (_Bool)1)) >> (((arr_47 [i_0] [i_22] [i_24] [(unsigned short)2]) - (3322349898U))))))) : (((((/* implicit */int) arr_64 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) | (arr_13 [i_22])))));
                var_45 = ((/* implicit */int) arr_78 [i_0] [i_0] [i_24] [i_0]);
                var_46 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0 - 1] [i_22] [i_0 - 1])) == (((/* implicit */int) ((((/* implicit */int) (signed char)-59)) == (((/* implicit */int) (unsigned short)65517)))))));
            }
            var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)64016))));
            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (_Bool)1))));
            arr_86 [i_0] = ((/* implicit */unsigned int) arr_64 [i_0] [i_22] [i_22] [i_0] [i_0] [i_22]);
        }
    }
    var_49 = ((/* implicit */_Bool) var_12);
    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_4))));
    var_51 = (+(((/* implicit */int) var_14)));
    /* LoopSeq 1 */
    for (unsigned short i_25 = 0; i_25 < 21; i_25 += 4) 
    {
        var_52 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_87 [(signed char)9]))));
        arr_89 [i_25] = ((/* implicit */unsigned short) ((arr_87 [i_25]) ? (((/* implicit */int) arr_88 [i_25])) : (((((/* implicit */int) var_2)) >> (((/* implicit */int) arr_88 [i_25]))))));
        var_53 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((1696185624) * (((/* implicit */int) (_Bool)1))))) ? (((arr_87 [i_25]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : ((+(((/* implicit */int) arr_87 [i_25]))))))));
    }
}
