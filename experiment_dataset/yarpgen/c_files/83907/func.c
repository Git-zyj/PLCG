/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83907
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
    var_10 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-91))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_1] = (-(956883493));
            var_11 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)82)) ? (arr_3 [i_0] [i_0] [i_1]) : (971926802U)))));
            arr_6 [i_1] = ((/* implicit */signed char) ((_Bool) (-(3590800245U))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) == (21U)));
            arr_10 [i_0] [i_2] = ((/* implicit */_Bool) -8);
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2] [i_0])) != ((-(var_7)))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 704167067U)) ? (((/* implicit */int) arr_8 [i_2] [i_0])) : (((((-978993542) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (704167051U)));
                        var_16 = var_0;
                        var_17 = arr_21 [i_0] [i_0] [(_Bool)1] [i_5];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_18 = ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)84))) <= (262140U))) ? (((int) -1255065665)) : (((arr_0 [i_0]) ? (arr_14 [i_0] [i_0] [i_6]) : (((/* implicit */int) (signed char)124)))));
                        arr_30 [i_3] [i_7] [i_6] [i_7] = (!(((/* implicit */_Bool) 3590800249U)));
                        var_19 = (_Bool)1;
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_8]))));
        var_21 = var_9;
        arr_34 [i_8] = ((/* implicit */signed char) (!(arr_32 [i_8])));
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            {
                arr_39 [i_10] [(signed char)10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_2) + (2147483647))) >> (((var_8) - (1166667964)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((-1699208400) > (((/* implicit */int) (signed char)3))))) & ((~(((/* implicit */int) var_4))))))) : (704167047U)));
                /* LoopSeq 3 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_22 ^= ((/* implicit */signed char) min((((unsigned int) max((var_1), (((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                arr_46 [i_10] [4U] [4U] [i_10] [i_11] [4U] [i_13] = min((((1401635143U) >> (((/* implicit */int) (signed char)24)))), (((/* implicit */unsigned int) min((var_4), (arr_45 [i_9] [i_10] [i_10] [i_9] [i_13])))));
                                arr_47 [i_9] [i_10] [i_11] [i_12] [i_10] [i_13] = ((/* implicit */unsigned int) ((_Bool) arr_40 [i_9]));
                                var_23 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 32256)) && (((/* implicit */_Bool) var_3))))) == (((arr_37 [i_10] [i_10] [i_11]) / (arr_42 [i_10]))))));
                                var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) 4294967292U)) ? (1058587326U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))))), (((/* implicit */unsigned int) (signed char)-85))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) var_9);
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1461619462)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 2480425684U)) ? (((/* implicit */unsigned int) -1045355784)) : (3806698876U)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        arr_53 [i_11] [i_10] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) var_3);
                        arr_54 [i_15] [i_10] [i_11] [i_15] [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_9] [i_9] [i_11] [i_15] [i_10] [i_10])) ? (((/* implicit */unsigned int) arr_50 [i_9] [9U] [9U] [i_9] [i_9] [i_9])) : (3590800264U)));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (~(3590800229U))))));
                            var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) -437646105)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_17] [i_10] [i_9] [i_16] [i_17] [i_16] [i_10]))) : ((-(704167018U)))));
                        }
                        arr_61 [i_9] [i_10] [17] [i_10] = ((unsigned int) arr_41 [i_9] [(_Bool)1]);
                    }
                }
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((((/* implicit */unsigned int) var_2)) | (3590800230U))) | (arr_41 [i_9] [i_10]))))));
                    var_30 = (!(((/* implicit */_Bool) (signed char)123)));
                }
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    arr_67 [i_10] [i_10] [i_10] = ((/* implicit */signed char) var_9);
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_6))));
                    arr_68 [i_9] [i_10] [i_19] = ((/* implicit */int) ((((/* implicit */int) arr_66 [i_9] [i_10])) >= (((/* implicit */int) (signed char)0))));
                }
                arr_69 [(signed char)17] [i_10] = ((/* implicit */_Bool) ((signed char) min((var_4), (arr_60 [i_9] [i_9] [i_9] [i_10] [i_10] [i_10] [i_10]))));
            }
        } 
    } 
    var_32 = ((unsigned int) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
}
