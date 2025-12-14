/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80035
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
    var_18 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 -= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ ((~(((/* implicit */int) var_16))))));
                        arr_11 [(_Bool)1] [i_3] = ((/* implicit */short) ((_Bool) arr_10 [i_3] [i_3]));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [11] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0] [i_1]))));
                        var_20 ^= (+(((/* implicit */int) ((unsigned char) arr_6 [i_4] [i_1] [(short)6]))));
                        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)434)) || (var_16)));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (_Bool)1))))));
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_2 [i_0]))));
                            var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)32761)) - (((/* implicit */int) (short)-32758))))));
                            arr_18 [i_0] [i_5] [i_0] [7U] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned char) (unsigned char)218))) ? (((((/* implicit */int) arr_0 [(_Bool)1] [i_5])) ^ (((/* implicit */int) arr_0 [i_0] [(short)2])))) : (((/* implicit */int) var_5)));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (short)9754)))))));
                            arr_23 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                        }
                        arr_24 [i_0] [i_1 + 2] [i_2] [i_4] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_8)))));
                    }
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned short) var_1)), (((/* implicit */unsigned short) (short)32741))))) ? (((/* implicit */int) ((arr_6 [i_1 + 3] [i_1 + 3] [i_1 + 3]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) && (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) != (((/* implicit */int) var_3)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((((/* implicit */int) (signed char)34)) / (((/* implicit */int) var_7)));
                            arr_30 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] [i_8] = ((/* implicit */short) arr_17 [i_0] [i_0] [i_2] [i_0] [i_1 + 2]);
                        }
                        /* LoopSeq 3 */
                        for (int i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            var_27 &= (_Bool)1;
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_2)))));
                        }
                        for (unsigned int i_10 = 4; i_10 < 17; i_10 += 3) 
                        {
                            arr_37 [(unsigned char)3] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                            var_28 = ((/* implicit */unsigned int) (_Bool)0);
                        }
                        for (short i_11 = 4; i_11 < 19; i_11 += 3) 
                        {
                            arr_42 [i_11] [i_7] [i_2] [i_1] [i_11] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-5207))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)245)) / (((/* implicit */int) (unsigned char)250))));
                            var_30 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_10))))));
                            arr_43 [i_0] [i_1] [i_2] [i_11] [i_1] = ((/* implicit */unsigned char) ((short) var_8));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_47 [i_12] = ((/* implicit */_Bool) ((((var_13) ? (((/* implicit */int) arr_45 [i_0] [i_0] [(short)12])) : (((/* implicit */int) var_8)))) + (((/* implicit */int) ((_Bool) var_17)))));
                        arr_48 [(unsigned char)13] [i_1 + 3] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) arr_28 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 3])) : (((/* implicit */int) var_16))));
                        var_31 -= ((/* implicit */_Bool) (((~(((/* implicit */int) (short)-2793)))) ^ (((/* implicit */int) arr_21 [i_1 + 1] [i_1 - 1] [i_2]))));
                        /* LoopSeq 1 */
                        for (short i_13 = 1; i_13 < 16; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_13])) : (((/* implicit */int) var_17))))));
                            var_33 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1914258581)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_15)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)65)) != (((/* implicit */int) (short)-8201)))))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_19 [i_1 + 2] [i_1 + 2] [i_13 + 2] [i_13] [i_13 - 1]))));
                            var_35 -= ((/* implicit */unsigned short) ((_Bool) arr_3 [i_1 + 3] [i_13 - 1] [i_13 - 1]));
                        }
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((((/* implicit */int) var_4)) > (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_17))))))) ? ((+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_4)))))) : (((/* implicit */int) ((unsigned char) var_9))))))));
    /* LoopNest 2 */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        for (short i_15 = 1; i_15 < 20; i_15 += 3) 
        {
            {
                var_37 = ((/* implicit */signed char) ((unsigned short) (short)-9755));
                arr_55 [i_14] [i_14] = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_53 [i_14 - 1] [i_15 + 1])) < (((/* implicit */int) arr_53 [i_14 - 1] [i_15 + 1]))))), ((-(((((/* implicit */int) arr_53 [i_14 - 1] [i_15])) - (((/* implicit */int) var_0))))))));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 19; i_16 += 2) 
                {
                    for (short i_17 = 1; i_17 < 20; i_17 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_18 = 4; i_18 < 20; i_18 += 1) 
                            {
                                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_14])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) arr_52 [i_14]))));
                                arr_65 [i_14 - 1] [i_14] [i_16 - 1] [i_14] [i_18 - 1] [i_18 + 1] = ((((/* implicit */int) (unsigned short)1)) <= (((/* implicit */int) var_3)));
                                var_39 += var_10;
                            }
                            /* vectorizable */
                            for (unsigned char i_19 = 0; i_19 < 21; i_19 += 1) 
                            {
                                arr_68 [i_14] [i_15] [i_16 - 1] [i_17] = (((~(((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((signed char) (_Bool)1))));
                                var_40 &= ((/* implicit */_Bool) var_5);
                            }
                            arr_69 [i_14] [i_14] [(unsigned char)19] [(unsigned char)19] = ((/* implicit */unsigned short) max((max((((/* implicit */int) ((short) (unsigned short)6))), (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_64 [i_14] [i_15 + 1] [i_15 + 1] [i_15] [i_16] [i_17 - 1])))))), (((((/* implicit */_Bool) ((short) var_3))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_51 [i_14] [(short)17])))) : ((~(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
