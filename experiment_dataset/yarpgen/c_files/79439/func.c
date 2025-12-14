/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79439
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
    var_17 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_18 &= ((/* implicit */int) arr_0 [i_0 - 2]);
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (~((((_Bool)0) ? ((-(426204704))) : (((((/* implicit */int) (unsigned short)41155)) * (((/* implicit */int) (signed char)0))))))));
            var_19 = ((/* implicit */unsigned short) (signed char)40);
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_20 = ((signed char) (signed char)52);
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) (unsigned short)41134)) : (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2])));
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [i_2] [(unsigned char)3]);
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                arr_15 [i_0] [i_0] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24986)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (_Bool)0))));
                var_21 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_13 [i_3] [i_2] [i_2] [i_0])) << (((var_10) + (188895235))))));
                var_22 = ((/* implicit */unsigned short) var_7);
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_0 - 2] [i_3 + 1] [i_3 - 1]))));
            }
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_18 [i_4] [i_4] = ((/* implicit */int) var_15);
                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
            }
            arr_19 [i_2] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0])) % (((/* implicit */int) ((signed char) (signed char)-88)))));
        }
        var_25 = min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [(_Bool)1] [i_0 - 2]))))) ? (arr_8 [i_0] [i_0] [i_0 - 2]) : (((/* implicit */int) var_11)))), ((+(((/* implicit */int) var_5)))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            arr_25 [i_5] [i_6] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_23 [(_Bool)1] [i_5] [i_6])) : (((/* implicit */int) arr_20 [(signed char)14])))));
            var_26 = ((/* implicit */signed char) min((var_26), (arr_24 [(unsigned char)10])));
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_20 [i_6]);
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41134)) ? ((-(1422834406))) : (((/* implicit */int) arr_22 [i_5 + 2]))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_29 [i_5] [i_5] = ((/* implicit */_Bool) arr_21 [i_5] [i_5]);
            var_28 = (-(((/* implicit */int) (unsigned short)62698)));
            arr_30 [i_5] [i_5] [i_7 - 1] = ((/* implicit */signed char) ((((((arr_28 [i_5] [i_5]) ? (-1968893091) : (((/* implicit */int) arr_28 [i_5 + 3] [(_Bool)1])))) + (2147483647))) << (((((/* implicit */int) (unsigned short)24401)) - (24401)))));
            var_29 *= ((/* implicit */unsigned char) arr_27 [(signed char)12] [i_7 - 1] [i_7 - 1]);
        }
        /* LoopSeq 3 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (signed char)-32)))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 - 3])) - (((/* implicit */int) arr_20 [i_5 - 3]))));
        }
        for (int i_9 = 1; i_9 < 21; i_9 += 1) 
        {
            arr_36 [i_5] [i_9] [(_Bool)1] = ((/* implicit */unsigned short) var_16);
            var_32 = ((/* implicit */unsigned short) (~(var_4)));
            arr_37 [i_9 - 1] [i_9 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_9] [i_5])) & (((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) arr_22 [i_5])) : (((/* implicit */int) arr_34 [i_5] [i_9]))))));
            arr_38 [i_5] = ((/* implicit */unsigned short) (_Bool)0);
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            var_33 = ((/* implicit */unsigned short) 1552564122);
            var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) arr_32 [i_5] [i_10])) : (((((/* implicit */_Bool) (signed char)31)) ? (var_7) : (((/* implicit */int) arr_20 [(unsigned short)12]))))));
        }
        var_35 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_5] [i_5])) << (((((/* implicit */int) var_15)) + (63)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_40 [i_5 - 3]))));
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_43 [i_11] [i_5] [i_5] = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)60789)) != (((/* implicit */int) var_13))))));
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_7))));
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_37 ^= ((/* implicit */signed char) (((~(((/* implicit */int) arr_34 [(signed char)2] [18])))) <= (((arr_44 [i_5] [(unsigned short)12] [(_Bool)1]) ? (1422834406) : (arr_35 [i_5] [i_5 - 3] [(signed char)1])))));
                var_38 *= ((/* implicit */signed char) ((arr_28 [i_5 - 2] [3]) ? ((((_Bool)1) ? (((/* implicit */int) arr_22 [i_11])) : (var_14))) : (((/* implicit */int) arr_32 [i_11] [(signed char)20]))));
                arr_47 [i_5] [3] [i_12] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_24 [i_5])) != (((/* implicit */int) (unsigned short)6717)))));
            }
            for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                var_39 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1422834407)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [i_5] [i_5] [(unsigned short)16])))) ^ (((/* implicit */int) ((-1572506749) != (((/* implicit */int) var_12)))))));
                arr_50 [i_5] [i_5 - 2] [i_11] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_5] [i_5 + 1] [i_5 + 3]))));
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    arr_53 [(unsigned char)16] [i_11] [(unsigned short)11] [i_5] = var_2;
                    arr_54 [(unsigned short)9] [i_5] [(signed char)15] [i_5 - 3] [i_5] [(signed char)7] = ((((/* implicit */_Bool) (unsigned short)40550)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_28 [i_5] [i_5 + 2])));
                    /* LoopSeq 3 */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_42 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_42 [i_5] [i_5] [i_5]))));
                        arr_57 [i_14] [(unsigned short)1] [(unsigned short)1] [i_5] [i_11] [i_15] [i_13] = arr_23 [i_5] [i_5] [(signed char)9];
                        arr_58 [i_5] [(signed char)0] [i_13] [(signed char)0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_52 [i_15])) : (var_0))) : (((/* implicit */int) arr_32 [i_5 + 3] [i_5]))));
                        var_41 = ((/* implicit */unsigned short) (unsigned char)253);
                        var_42 ^= ((/* implicit */unsigned char) arr_46 [i_5] [i_13] [i_15]);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_63 [i_5] [i_11] [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) ((var_11) ? (((/* implicit */int) arr_20 [i_16])) : ((-(-1492879594)))));
                        var_43 = ((((/* implicit */int) var_8)) << (((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_9)))) + (139))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_44 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [0] [i_13] [0])) ? (((/* implicit */int) arr_52 [i_5])) : (((/* implicit */int) (unsigned short)34581))))) ? (((/* implicit */int) arr_49 [(signed char)16] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)41134))));
                        var_45 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_5 + 2])) + (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-48))))));
                        arr_66 [i_5] [i_11] [i_17] [(_Bool)1] [(unsigned short)2] [i_17] [(_Bool)1] &= ((/* implicit */signed char) (+(((arr_39 [(unsigned short)10]) * (((/* implicit */int) arr_64 [i_5] [i_5] [i_5 - 2] [(unsigned short)16] [i_5] [(unsigned char)4]))))));
                        arr_67 [(_Bool)1] [i_11] [i_17] [i_5] = ((/* implicit */unsigned char) arr_60 [i_17] [i_14] [i_13] [(signed char)0] [i_11] [(signed char)10] [i_5 + 1]);
                        arr_68 [i_17] [i_14] [i_5] [i_11] [i_5 - 3] = ((/* implicit */signed char) ((((/* implicit */int) arr_62 [i_5] [i_5] [(signed char)10] [i_5] [i_5] [i_5 + 3] [i_5 + 3])) < (((/* implicit */int) var_11))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        var_46 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)41155)) < (((/* implicit */int) (unsigned short)4750))));
                        arr_72 [i_5] [(unsigned char)4] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) arr_70 [i_5] [i_5 + 3] [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5 - 1])) : (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) arr_45 [(_Bool)1] [(_Bool)1] [i_13] [i_18])) : (-215420641)))));
                    }
                    var_47 = ((/* implicit */_Bool) max((var_47), (arr_31 [i_5] [(signed char)0] [(signed char)12])));
                }
            }
            for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22; i_20 += 4) 
                {
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            arr_83 [i_5] [i_11] [i_19] [i_19] [i_11] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-54)) + (((/* implicit */int) (unsigned short)41130))));
                            arr_84 [i_20] [(signed char)20] [(signed char)8] [(signed char)8] [(signed char)18] |= (+(((/* implicit */int) arr_31 [i_11] [i_20] [i_20])));
                            arr_85 [i_5] [(_Bool)1] [i_19] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (arr_71 [i_5 + 3] [i_5] [(_Bool)1] [i_5] [(signed char)5]) : (((/* implicit */int) arr_33 [(unsigned short)17]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_16)));
                        }
                    } 
                } 
                arr_86 [i_5] [15] [i_19] = ((/* implicit */signed char) ((((_Bool) (unsigned short)6732)) ? (var_14) : (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_11])) || ((_Bool)1))))));
            }
            var_48 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (signed char)-32)) : (var_16))));
        }
        for (int i_22 = 2; i_22 < 19; i_22 += 1) 
        {
            var_49 += ((/* implicit */signed char) ((((/* implicit */int) arr_65 [i_5] [(_Bool)1])) + (var_10)));
            /* LoopSeq 1 */
            for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
            {
                var_50 = ((/* implicit */_Bool) arr_70 [i_23] [i_23] [(signed char)6] [i_22 + 3] [(_Bool)1] [i_5] [i_5]);
                arr_95 [i_5] [i_5 + 3] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned short) var_6));
                var_51 = (~(((/* implicit */int) (unsigned short)41134)));
            }
            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) arr_35 [(_Bool)1] [(_Bool)1] [i_5]))));
        }
        var_53 = ((/* implicit */_Bool) var_8);
    }
}
