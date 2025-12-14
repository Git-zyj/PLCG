/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97385
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) (unsigned short)42122)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_20 = ((/* implicit */_Bool) (unsigned short)42131);
            arr_7 [i_0] [i_0] = ((/* implicit */int) (unsigned short)23405);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_21 = ((/* implicit */short) var_14);
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) && (((/* implicit */_Bool) arr_2 [i_0 - 3]))));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_17 [i_0 - 2] [i_2] [i_0 - 2] [i_0] [i_2] [i_4] = ((/* implicit */_Bool) ((arr_6 [i_3 + 3] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_5 [i_3] [i_3 - 1])) : (((/* implicit */int) arr_6 [i_3 - 1] [i_0 - 2] [8ULL]))));
                    arr_18 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0 - 2] [i_3] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
                }
                for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_21 [(unsigned char)5] [(unsigned char)5] [i_0] [i_5] = ((arr_19 [5ULL] [i_0 + 2]) / (arr_12 [i_0] [i_0 + 1] [i_3 + 2]));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_0 + 2]))));
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) arr_6 [(unsigned short)13] [i_2] [i_2]));
                }
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_4));
                    var_24 = ((((/* implicit */_Bool) (unsigned short)23414)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                    var_25 = 437302864U;
                }
            }
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 2]))));
                arr_28 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3]);
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])) >= (arr_10 [i_0 - 1])));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 2) 
                    {
                        {
                            arr_35 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_31 [i_9 + 1] [i_0 + 1]));
                            arr_36 [i_0] [(signed char)12] [i_7] [1ULL] [i_9] [i_0 - 1] [i_9] = ((/* implicit */short) ((3857664432U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_0 - 2] [i_9 + 1])))));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */int) arr_5 [i_0 + 1] [i_2]))));
            var_30 = ((/* implicit */unsigned int) (-(arr_23 [i_2] [i_0 - 1] [i_2] [i_0 - 1] [i_2] [i_0 - 1])));
        }
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            arr_41 [(unsigned short)8] [i_10] [i_0] = (unsigned short)42122;
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_33 [i_0 - 2]))))) - (((/* implicit */int) ((unsigned char) 8533292040252646285ULL)))));
        }
    }
    var_32 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            {
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_43 [i_12]), (arr_43 [13]))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62582))) | (arr_45 [i_12])))));
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        {
                            arr_54 [i_11] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)65535))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((var_17), ((_Bool)0))))) % (((((/* implicit */_Bool) (unsigned short)62582)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_34 = max((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (max((3857664432U), (((/* implicit */unsigned int) (unsigned short)10940)))));
                        }
                    } 
                } 
                arr_55 [i_12] [i_11] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62612)) || (((/* implicit */_Bool) ((arr_42 [i_11] [i_11]) << (((((/* implicit */int) (unsigned short)56682)) - (56682))))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)37501)) : (((/* implicit */int) var_14))))));
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    var_35 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) (unsigned short)22184)));
                    /* LoopNest 2 */
                    for (signed char i_16 = 4; i_16 < 20; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_63 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */int) ((((int) arr_61 [(_Bool)1] [i_12] [i_16] [i_16] [(_Bool)1])) == (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((var_7) || (((/* implicit */_Bool) (unsigned short)5359)))))))));
                                arr_64 [i_15] [i_15] = ((/* implicit */unsigned int) arr_59 [i_11] [i_12] [i_15] [i_15]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_36 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (unsigned short)5367)) : (((/* implicit */int) (short)22704)))))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) | (((/* implicit */int) (_Bool)0))))), (var_10))));
    var_37 = ((/* implicit */unsigned long long int) ((signed char) var_7));
}
