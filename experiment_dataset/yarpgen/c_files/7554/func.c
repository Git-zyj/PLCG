/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7554
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [i_2] [i_0] = ((/* implicit */short) arr_3 [i_2 - 1]);
                        var_14 += ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_4 [i_0]))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */int) (short)-5)) != (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1] [i_2] [i_3 - 1]))));
                        var_16 = ((/* implicit */long long int) arr_10 [i_3 - 1] [(unsigned char)19] [12LL] [i_2 - 2]);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    arr_18 [12ULL] [12ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_5]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_4] [i_5] [i_7] [20U] [i_4] = ((/* implicit */signed char) arr_0 [i_4] [i_4]);
                                var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 1] [i_6 + 1] [i_6 - 1] [i_6])) >> ((((((~(2147483647))) - (-2147483636))) + (39)))))) ? ((-(((/* implicit */int) arr_10 [i_7 - 1] [i_5] [i_6 - 1] [i_5])))) : ((-(((((((/* implicit */int) (signed char)-62)) + (2147483647))) >> (((((/* implicit */int) (signed char)51)) - (48)))))))));
                                var_18 = ((/* implicit */long long int) ((unsigned long long int) (~(var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_8 = 3; i_8 < 17; i_8 += 4) 
    {
        arr_28 [i_8] = ((/* implicit */long long int) (signed char)-39);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            for (signed char i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                arr_40 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) -1278624664)) <= (((unsigned int) arr_10 [i_8 + 1] [i_9] [i_10] [20]))));
                                arr_41 [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 1] [i_11] [i_12] = ((/* implicit */long long int) arr_17 [i_8 - 3] [i_9] [i_10] [i_12]);
                                var_19 = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (-(var_8)));
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned char)53)))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8 - 3] [i_8 + 2]))) - (arr_33 [i_8] [i_8] [i_8 + 3])));
    }
    /* LoopNest 2 */
    for (unsigned int i_13 = 1; i_13 < 7; i_13 += 3) 
    {
        for (unsigned int i_14 = 3; i_14 < 7; i_14 += 2) 
        {
            {
                arr_47 [i_13] [i_13] = ((/* implicit */_Bool) ((int) var_4));
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_43 [i_13 + 2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_16 = 2; i_16 < 6; i_16 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                        {
                            var_24 += ((/* implicit */unsigned char) var_9);
                            var_25 &= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (signed char)-51)))));
                            arr_54 [i_13 + 3] [i_14 - 3] [(unsigned char)7] [i_14 - 3] [i_15] = ((/* implicit */signed char) arr_36 [i_15] [i_15]);
                            var_26 -= ((/* implicit */unsigned int) (~((-(var_10)))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_14 + 2] [i_13 + 3]))));
                            arr_57 [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_50 [i_15] [i_15]))));
                            arr_58 [i_13 + 1] [7U] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_16] [i_13 + 2] [i_13 + 3] [i_15] [i_14 - 1])) ? (((/* implicit */unsigned long long int) arr_39 [i_14 + 1] [i_14 + 1] [i_15] [i_14] [i_14 + 1])) : ((~(4235780076255229440ULL)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_19 = 2; i_19 < 8; i_19 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_29 [i_15]))))) - (((/* implicit */int) ((_Bool) var_1)))));
                            arr_61 [i_15] [i_14] [i_14 + 3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [i_13 - 1] [i_19 - 1] [i_16 - 2] [i_14 - 3]))));
                        }
                        arr_62 [i_15] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_43 [i_14])))) - (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_15] [i_14 - 1]))))))));
                    }
                    arr_63 [i_15] = ((/* implicit */_Bool) -4730749220510051708LL);
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)-112)), (2115942731))), (((/* implicit */int) min(((short)-27058), (((/* implicit */short) (signed char)-39)))))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((var_3) == (((/* implicit */int) var_7)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 0U)), (9762924264101394484ULL)));
    var_31 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */_Bool) 1702605154U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), ((~(((/* implicit */int) var_7))))))) ^ ((~(var_10)))));
}
