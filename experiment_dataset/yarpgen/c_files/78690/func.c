/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78690
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)167))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)167)))), ((+(((/* implicit */int) var_9))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_5] [(signed char)12] [i_4] [(signed char)12] [i_2] [(signed char)12] [i_1] = (unsigned short)43337;
                            arr_19 [i_1] [(unsigned char)14] [i_2] [i_3] [(_Bool)1] [i_5] [(unsigned char)14] = min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) arr_7 [i_3] [i_5])));
                        }
                        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            arr_23 [(unsigned char)11] [i_2] [i_2 - 1] [1] [i_2] [i_2] [i_2] = ((/* implicit */int) 3753621178U);
                            arr_24 [i_1] [i_3] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_20 [i_1] [i_6 - 2] [i_3 - 2] [i_4] [i_3 - 2] [i_3 + 3]), (((/* implicit */int) var_17)))))));
                            arr_25 [i_6] [i_4] [i_3] [i_2] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1]))));
                            arr_26 [i_1] [i_2] [12U] [i_4] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            arr_31 [i_2] [i_3 - 1] [i_4] [i_7] = arr_11 [i_2 + 1];
                            arr_32 [i_7] [i_7] [i_7] [(unsigned char)11] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)39216)) != (((/* implicit */int) (unsigned short)43311)))))));
                            arr_33 [i_1] [i_2 - 3] [i_1] [0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)203))));
                        }
                        arr_34 [i_1] [i_2 - 3] [i_3] [i_4] &= ((/* implicit */unsigned short) arr_28 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [(unsigned char)3] [i_4] [i_1]);
                    }
                    for (unsigned short i_8 = 3; i_8 < 16; i_8 += 4) 
                    {
                        arr_37 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) 7168U))))))) > (max(((+(((/* implicit */int) (unsigned short)65511)))), (((/* implicit */int) (unsigned char)85))))));
                        arr_38 [i_3] [(_Bool)1] [i_3] [i_3 + 1] [i_8] = ((/* implicit */unsigned char) var_15);
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            arr_43 [i_1] [(unsigned char)10] [i_1] [i_1] [i_9] [i_10 - 1] = ((/* implicit */unsigned char) var_3);
                            arr_44 [i_1] [i_1] [i_1] [i_3] [i_1] [i_9] [i_9] = ((/* implicit */unsigned int) var_12);
                            arr_45 [i_10] [i_3] [i_3] [i_3 + 3] [i_2] [i_1] [i_1] = ((((((/* implicit */int) ((((/* implicit */int) arr_40 [i_1] [i_2 - 2] [i_9])) < (var_4)))) + ((+(((/* implicit */int) arr_9 [i_1] [i_1])))))) == (((/* implicit */int) arr_12 [i_1] [(unsigned char)1] [i_1])));
                        }
                        arr_46 [(unsigned char)0] [i_1] [i_2] [i_2] [i_1] &= ((/* implicit */_Bool) (+((+(arr_36 [i_1] [(_Bool)1] [i_9])))));
                        arr_47 [i_1] [i_1] [(_Bool)1] [(unsigned short)14] = ((/* implicit */int) var_18);
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_52 [i_1] [i_2] [15U] [i_11 - 1] [i_11 - 1] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_39 [i_3] [i_1] [i_3])) != (((/* implicit */int) var_7)))))));
                        arr_53 [i_1] [14LL] [i_1] [i_1] = ((/* implicit */int) arr_41 [i_11 - 1] [i_2 - 2]);
                    }
                    arr_54 [8LL] &= ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) var_14))))))));
                    arr_55 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)11] [(unsigned char)11])))))));
                }
            } 
        } 
        arr_56 [14U] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        arr_57 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [4LL]))));
    }
    for (int i_12 = 1; i_12 < 18; i_12 += 2) 
    {
        arr_60 [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_59 [i_12 + 1]))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 2; i_13 < 16; i_13 += 4) 
        {
            for (unsigned int i_14 = 1; i_14 < 17; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 3) 
                        {
                            {
                                arr_72 [i_13] = ((/* implicit */unsigned char) (+(max(((~(arr_63 [i_16] [i_16]))), (((/* implicit */unsigned long long int) (-(var_15))))))));
                                arr_73 [i_12 - 1] [i_13 + 3] [i_13 + 3] [i_15] [i_13] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_12 + 1]))))))))));
                                arr_74 [i_13] [i_13 + 2] [i_14] [i_13] [(unsigned short)16] = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (min(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            }
                        } 
                    } 
                    arr_75 [i_14] [1U] [i_14 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                    arr_76 [i_12] [i_14] [18] = ((/* implicit */unsigned char) arr_71 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_13 - 1] [i_12 + 1] [i_12 + 1]);
                    arr_77 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_63 [i_12] [i_14 + 1]))))));
                }
            } 
        } 
    }
    var_20 &= ((/* implicit */unsigned int) var_6);
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178))))))))));
}
