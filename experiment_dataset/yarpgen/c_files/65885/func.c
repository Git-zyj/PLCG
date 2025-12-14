/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65885
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
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))), (((/* implicit */int) max((var_8), (var_8))))))) ? (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)47)), ((short)-4854)))))) : (((/* implicit */int) ((((/* implicit */int) min((var_0), (var_11)))) == (((/* implicit */int) min((((/* implicit */short) var_8)), (var_14)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 3])) > (((/* implicit */int) arr_1 [i_0 - 3]))))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_18 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (240)))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) % (((/* implicit */int) arr_6 [i_0] [(short)4] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(unsigned char)3] [i_0 + 1] [(unsigned char)3])))))));
            arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)6])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
            /* LoopSeq 1 */
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    arr_13 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0 - 3] [i_1] [i_2] [i_0 - 3] [i_2 + 1] [(short)0])) <= (((/* implicit */int) arr_11 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13]))))) == ((-(((/* implicit */int) arr_2 [i_0]))))));
                    arr_14 [(short)7] [i_3] [i_3] [(short)7] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_1 [i_2]))))));
                    arr_15 [i_0] [i_3] [i_2 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)4853)) || (((/* implicit */_Bool) (unsigned char)244)))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [(unsigned char)12] [(unsigned char)12]))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_5 [i_4]))))));
                    var_20 *= arr_9 [i_0] [i_1] [i_2] [i_4];
                }
                var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))));
            }
        }
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            arr_22 [i_0] [i_0] |= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_5 [i_5]))))));
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_5])) + (((/* implicit */int) arr_20 [i_0])))))));
        }
        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_9 [i_0 + 2] [(unsigned char)12] [(short)13] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_8] [i_7] [i_6 - 1]))))) ? (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) arr_24 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_8])))) : (((((/* implicit */int) arr_26 [i_0] [i_6] [i_7] [i_7])) >> (((((/* implicit */int) arr_5 [i_8])) - (157)))))));
                        arr_31 [i_0] [i_6] = ((/* implicit */unsigned char) arr_24 [(unsigned char)3] [i_0]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                for (unsigned char i_10 = 2; i_10 < 13; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_40 [i_0] [i_0] [i_9] [(unsigned char)12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_36 [i_0])) && (((/* implicit */_Bool) arr_11 [i_9 + 1] [i_0] [i_0])))) ? (((((/* implicit */int) arr_12 [i_0 - 3] [i_6 - 2] [i_0] [i_10 + 1] [(unsigned char)11] [i_0])) * (((/* implicit */int) arr_24 [i_0] [i_0])))) : (((((/* implicit */int) arr_37 [i_0] [i_9] [i_0] [(short)5] [(short)11])) * (((/* implicit */int) arr_7 [i_11] [i_11] [i_11]))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_6])) ? (((((/* implicit */int) arr_20 [i_0])) ^ (((/* implicit */int) arr_23 [i_0] [i_0 + 3] [(unsigned char)13])))) : (((((/* implicit */int) arr_28 [i_11] [i_11] [i_9] [i_9] [i_6] [i_0])) << (((/* implicit */int) arr_7 [i_0] [i_6 - 1] [i_10]))))));
                            arr_41 [i_0] [(unsigned char)11] [(unsigned char)8] [i_10] [i_0 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])))))));
                            var_25 = ((/* implicit */short) arr_34 [i_0] [i_0] [i_6] [i_9] [i_10] [i_11]);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_6] [(short)3] [i_6 + 1])) ? (((/* implicit */int) arr_23 [(unsigned char)4] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_38 [i_6 + 1] [i_6 + 1] [(unsigned char)9] [i_0] [i_0])))) << (((((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [(short)1] [(unsigned char)13])) ? (((/* implicit */int) arr_4 [i_0] [i_6] [(unsigned char)12])) : (((/* implicit */int) arr_11 [(unsigned char)15] [(unsigned char)12] [i_0 + 2])))) + (22318)))));
        }
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (unsigned char i_13 = 1; i_13 < 16; i_13 += 4) 
            {
                {
                    var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_12] [(unsigned char)7] [i_12] [i_0]))))) ? (((/* implicit */int) arr_30 [i_0] [i_12] [i_12] [i_12] [i_12] [i_13])) : ((-(((/* implicit */int) arr_43 [i_13]))))));
                    arr_47 [i_13] [i_12] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_35 [i_0 + 1])) ? (((/* implicit */int) arr_28 [(unsigned char)6] [i_13] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_46 [i_0 - 3] [i_12] [i_13 - 1]))))));
                }
            } 
        } 
        arr_48 [(unsigned char)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) arr_32 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_44 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_20 [i_0]))))));
    }
    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
    {
        arr_51 [(unsigned char)17] [(unsigned char)17] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) max((arr_50 [i_14]), (((/* implicit */short) arr_49 [(unsigned char)18] [i_14]))))) || ((!(((/* implicit */_Bool) (short)(-32767 - 1)))))))));
        arr_52 [i_14] = ((/* implicit */unsigned char) ((min((((/* implicit */int) max((((/* implicit */short) arr_49 [(unsigned char)16] [(unsigned char)16])), (arr_50 [i_14])))), ((-(((/* implicit */int) arr_50 [i_14])))))) < (((((/* implicit */int) max((arr_50 [i_14]), (arr_50 [(unsigned char)8])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_14] [i_14])))))))));
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_14])) + (((/* implicit */int) arr_49 [i_14] [i_14]))))) ? (((/* implicit */int) arr_50 [i_14])) : (((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (short)-4853)))))) % (min((((/* implicit */int) max((arr_49 [(unsigned char)13] [(unsigned char)13]), (arr_49 [i_14] [i_14])))), (((((/* implicit */_Bool) arr_50 [i_14])) ? (((/* implicit */int) arr_50 [i_14])) : (((/* implicit */int) arr_49 [(unsigned char)6] [i_14]))))))));
        arr_54 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_49 [(unsigned char)17] [(unsigned char)17])) ? (((/* implicit */int) arr_49 [i_14] [(unsigned char)17])) : (((/* implicit */int) arr_49 [i_14] [i_14])))), (((/* implicit */int) max((arr_50 [i_14]), (arr_50 [i_14]))))))) ? (((((/* implicit */_Bool) (short)4881)) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */int) (unsigned char)235)) ^ (((/* implicit */int) (unsigned char)14)))))) : ((-(((/* implicit */int) max((arr_50 [i_14]), (arr_50 [i_14]))))))));
    }
    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
    {
        var_28 *= ((/* implicit */unsigned char) max((max((min((arr_20 [i_15]), (arr_18 [i_15] [i_15] [i_15] [i_15]))), (max((((/* implicit */short) (unsigned char)163)), ((short)4853))))), (((/* implicit */short) arr_34 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
        arr_58 [i_15] = arr_12 [i_15] [i_15] [(unsigned char)1] [i_15] [(short)1] [i_15];
        arr_59 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_15])) ? (((/* implicit */int) max((arr_26 [(short)10] [(unsigned char)11] [(short)10] [i_15]), (arr_44 [i_15])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_15])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_20 [i_15])) : (((/* implicit */int) arr_44 [i_15]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [(short)5] [(unsigned char)16] [i_15] [(short)16] [i_15]))))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned char)1])) <= (((/* implicit */int) arr_27 [i_15] [i_15] [i_15] [i_15]))))))) : (((/* implicit */int) min((min(((short)25756), (((/* implicit */short) (unsigned char)128)))), (min((arr_21 [i_15] [i_15] [(unsigned char)11]), (((/* implicit */short) arr_49 [i_15] [i_15])))))))));
    }
    var_29 = ((/* implicit */unsigned char) min(((short)12368), ((short)-5991)));
}
