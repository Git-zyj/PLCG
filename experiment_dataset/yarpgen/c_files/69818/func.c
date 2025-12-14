/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69818
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)252)))) : ((~(((/* implicit */int) var_8))))));
    var_11 = ((/* implicit */unsigned short) (signed char)-36);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [(short)10] [(short)10] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1 - 3])) ? (max(((~(var_2))), (((/* implicit */unsigned int) arr_2 [6LL] [i_2 - 1])))) : ((-(((((/* implicit */_Bool) arr_1 [(unsigned short)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_1)) : (3060582735356376155LL)))))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_0] [i_0] [i_2]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)227)))))))));
                    arr_12 [(unsigned char)0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) max((min((arr_2 [0LL] [i_1]), (((/* implicit */short) (unsigned char)110)))), (((/* implicit */short) max((var_8), (((/* implicit */unsigned char) var_7))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            {
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) arr_15 [i_3] [i_4] [i_4]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_5 = 4; i_5 < 20; i_5 += 2) 
                {
                    arr_20 [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [(unsigned short)6])) ? (1240650294318834832LL) : (((/* implicit */long long int) 1331795670U))))) ? (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5]))) : (var_9))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)))));
                    arr_21 [i_5] [i_4] [i_5 + 1] [i_5] = ((/* implicit */unsigned char) ((long long int) 9223372036854775807LL));
                    arr_22 [i_3] [i_3] [i_3] = arr_13 [i_4 - 1];
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_25 [18LL] [i_4] [i_6]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_3] [i_4] [i_4] [i_4 - 1])))))));
                    arr_27 [i_4] = ((/* implicit */signed char) -8522990092817857590LL);
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        arr_31 [(unsigned short)4] [i_4] [i_4] [i_7] = ((((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) (unsigned char)0)), (arr_24 [i_4])))))));
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_34 [i_4] [i_7] [(short)20] [i_6] [i_4 - 1] [i_3] [i_4] = ((/* implicit */long long int) var_4);
                            arr_35 [i_3] [i_3] [i_6] [i_4] [i_6] = ((/* implicit */short) var_5);
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            arr_39 [i_4] [i_4 - 1] [i_4] [i_6] [i_6] [i_7] [i_4] = ((/* implicit */unsigned long long int) -1763836068622170692LL);
                            arr_40 [i_3] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */long long int) var_6);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_44 [i_6] [i_6] [i_10] [i_10] [i_4] [i_6] [i_10] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)63)), (6512000612050388123LL))) + (((long long int) ((((/* implicit */int) arr_23 [i_4] [i_4] [i_6] [i_3])) <= (((/* implicit */int) arr_19 [i_3] [i_3] [i_10])))))));
                            arr_45 [i_3] [i_4 + 1] [(unsigned short)2] [i_3] [i_3] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_24 [i_3]) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_3]))) < (arr_29 [i_3] [i_4] [i_6] [i_3] [i_7] [i_10])))) < (var_3))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            arr_48 [i_4] [i_4] [i_6] [i_7] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) arr_23 [i_4] [i_4] [i_7] [i_4 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_38 [i_3] [i_4 + 1] [i_6] [i_7] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9))) > (max((4294967295U), (((/* implicit */unsigned int) arr_42 [i_3] [i_4] [i_6] [(signed char)14] [i_11])))))))) : (766376582007659718LL)));
                            arr_49 [i_3] [i_4] [i_3] [i_3] [i_4] [(unsigned short)19] = ((/* implicit */signed char) max(((+(max((9223372036854775807LL), (7198878989510716781LL))))), (((/* implicit */long long int) arr_43 [i_11] [i_7] [i_6] [i_4 + 1] [i_3]))));
                        }
                        arr_50 [i_6] [i_3] = min(((~(min((((/* implicit */long long int) arr_37 [i_7] [i_4] [i_3])), (6664997792440809274LL))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) -983788246)) ? (arr_32 [i_3] [i_3] [i_4] [i_6] [i_7]) : (((/* implicit */long long int) 2133441624)))))));
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_53 [i_4] [i_4] [i_4] [(unsigned char)17] [i_4] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1889957572)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)84)), (arr_28 [i_4] [i_4])))) : (((/* implicit */int) arr_14 [i_4 + 1]))));
                        arr_54 [i_3] [i_4] [i_3] [i_4] [i_3] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_37 [4U] [i_4] [i_12]))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_3))))))));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            arr_59 [i_4] = ((/* implicit */unsigned short) var_6);
                            arr_60 [i_4] [i_12] [i_6] [i_3] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-124))));
                        }
                        arr_61 [i_3] [i_12] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(2035387732)))) ? (2133441630) : (((/* implicit */int) (signed char)125)))), (((/* implicit */int) arr_15 [i_3] [9LL] [i_3]))));
                    }
                }
            }
        } 
    } 
}
