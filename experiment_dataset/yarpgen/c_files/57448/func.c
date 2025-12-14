/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57448
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [(short)12] = ((/* implicit */_Bool) var_4);
        var_17 -= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_15 [i_1] = ((/* implicit */unsigned char) ((short) (unsigned short)24270));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1] [i_4])), (var_0))))))));
                        arr_16 [i_1] = 1340742064;
                    }
                    for (short i_5 = 4; i_5 < 11; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [4] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((short) (unsigned char)65)), (((/* implicit */short) (!(((/* implicit */_Bool) var_9))))))))) : (((((((/* implicit */_Bool) arr_2 [(unsigned short)14])) ? (1796339381U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))))) | (arr_17 [i_2] [(_Bool)1] [i_3 - 1]))))))));
                        arr_19 [i_1] [i_1] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)86))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), ((-(max((arr_3 [i_1 - 1] [i_1]), (((/* implicit */int) arr_18 [i_2] [(unsigned char)6] [i_3 + 1] [i_1 - 1]))))))));
                        var_21 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (short)1)), ((+(arr_21 [i_1] [i_2] [i_2] [i_1]))))), (max((((/* implicit */unsigned int) (unsigned char)92)), (arr_2 [i_1 + 1])))));
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 10; i_7 += 2) 
                        {
                            arr_25 [i_1] [i_6] [i_3] [i_3] [i_6] [i_1] |= ((/* implicit */int) 3804504462U);
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_13 [i_1 + 1] [i_1 + 1] [i_7] [i_6]))));
                            arr_26 [i_2] [i_2] [i_2] [i_6] [i_2] [i_2] &= ((/* implicit */unsigned char) (((+(arr_2 [i_6]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (arr_2 [i_3])))))));
                            arr_27 [i_1] [1U] [i_6] [i_6] [1U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_3 - 1] [i_1])) ? (arr_17 [i_6] [i_3 + 1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37904)))))) ? (((((/* implicit */_Bool) arr_17 [i_3] [i_3 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_17 [i_3] [i_3 - 1] [i_3]))) : (((((/* implicit */_Bool) var_0)) ? (arr_17 [i_3] [i_3 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41278)))))));
                        }
                        var_23 |= ((/* implicit */unsigned char) arr_5 [i_6]);
                    }
                    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
                }
            } 
        } 
        arr_28 [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max(((short)26446), ((short)-12877)))) ? (((/* implicit */int) ((short) (short)32767))) : (((/* implicit */int) arr_9 [i_1])))));
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 12; i_9 += 2) 
            {
                for (short i_10 = 2; i_10 < 12; i_10 += 1) 
                {
                    {
                        var_25 *= ((/* implicit */short) max((((/* implicit */int) var_14)), ((-(((/* implicit */int) ((_Bool) arr_20 [(unsigned short)8] [i_9] [12] [i_10] [(unsigned short)8] [i_10])))))));
                        arr_36 [i_10] [i_10] [i_1] = ((/* implicit */int) arr_13 [i_1 + 2] [3U] [i_9] [i_1]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
        {
            arr_40 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) arr_32 [i_1 + 1])), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_11 + 2] [i_1] [i_1])) : (((/* implicit */int) arr_24 [i_1]))))));
            arr_41 [i_1] [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (short)12876)) % (((/* implicit */int) var_7)))) : (((((/* implicit */int) (unsigned char)157)) << (((((/* implicit */int) (unsigned short)4331)) - (4316))))))), (((/* implicit */int) ((((/* implicit */int) arr_30 [i_1] [i_1] [i_1])) == (((var_6) ? (((/* implicit */int) arr_32 [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))))))));
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                arr_45 [i_1] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) << (((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((var_12), (arr_43 [i_12] [i_11 - 1] [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))) - (3661190093U)))));
                arr_46 [i_1] [i_1] [i_12] = ((/* implicit */unsigned int) arr_38 [i_1]);
                arr_47 [i_1] [(unsigned char)4] [(unsigned char)4] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(arr_1 [i_1] [(short)3])))), ((-(((var_7) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) arr_12 [12] [i_11 + 2] [i_11 + 2]))))))));
            }
            for (short i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                arr_51 [(unsigned char)6] [i_1] [i_13] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) -1575845211))), (max((((/* implicit */unsigned short) (short)-18521)), ((unsigned short)24258))))))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 13; i_14 += 1) 
                {
                    var_26 += ((/* implicit */unsigned short) arr_1 [i_1 + 1] [i_11 - 1]);
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_13])) >= (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_6 [(unsigned short)8])) : (((/* implicit */int) arr_10 [i_13] [i_13] [i_13])))))) && (((_Bool) (+(((/* implicit */int) arr_37 [i_1] [i_13]))))))))));
                }
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min(((~(((3013920749U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_13] [i_11] [i_13]))))))), (((/* implicit */unsigned int) var_9)))))));
            }
        }
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (short i_16 = 2; i_16 < 10; i_16 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) var_4)), (arr_31 [i_16 - 2] [i_16] [(short)5] [i_16 - 1]))))))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max(((~(arr_31 [i_1] [i_15] [i_1 + 2] [i_1]))), (((/* implicit */unsigned int) ((arr_1 [i_15] [i_15]) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_20 [i_15] [i_16] [i_15] [(short)0] [i_16] [(_Bool)1])) : (((/* implicit */int) arr_30 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1]))))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_17 = 1; i_17 < 11; i_17 += 2) /* same iter space */
    {
        var_31 += arr_42 [i_17 + 2] [(unsigned char)2];
        var_32 += ((/* implicit */short) (+(((/* implicit */int) ((short) var_3)))));
    }
    for (unsigned int i_18 = 2; i_18 < 10; i_18 += 2) 
    {
        arr_62 [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned char) ((unsigned int) (~((~(((/* implicit */int) (short)-16340)))))));
        arr_63 [i_18] = ((/* implicit */unsigned short) (~(min((arr_43 [i_18 - 2] [i_18] [i_18 - 2]), (((arr_13 [i_18] [i_18 - 1] [i_18] [i_18]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31134)))))))));
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) 
        {
            for (int i_20 = 4; i_20 < 9; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 3) 
                {
                    {
                        arr_72 [i_18] [i_18] [i_18] [i_18] [i_21] = ((/* implicit */unsigned char) arr_12 [i_18 - 2] [i_19] [i_20]);
                        arr_73 [i_18 - 1] [i_18 - 1] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_71 [i_18] [i_19] [(unsigned char)1] [i_19] [(unsigned char)1])) * (((/* implicit */int) (unsigned char)20)))) / (((/* implicit */int) min((var_5), (((/* implicit */short) arr_55 [i_18] [i_18])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_18]))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) / (-933659820)))), (arr_70 [i_20] [i_18 - 1] [(short)0])))));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */short) max(((-(((3197434902U) << (((((/* implicit */int) (unsigned char)172)) - (158))))))), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)188)))))))));
    var_34 = var_12;
}
