/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87826
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
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_16), (var_16)))) ? (((/* implicit */int) max((var_6), (var_4)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), ((unsigned char)199)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(((/* implicit */int) (unsigned char)122)))) != (((/* implicit */int) arr_0 [i_0] [i_0]))))) == (max((((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned char)122)))), (((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) (unsigned char)242))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_4 [i_1]))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_14 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)193))));
                        arr_15 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)79))))) ? (((((/* implicit */int) var_16)) - (((/* implicit */int) arr_13 [i_1] [i_3] [i_3] [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_12 [i_3]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 13; i_5 += 4) 
            {
                arr_20 [i_1] [i_1] [i_2] [i_5 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)150))));
                arr_21 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)63)) && (((/* implicit */_Bool) (unsigned char)143))));
                arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_5] [i_5 + 2] [i_1] [i_2]))));
                arr_23 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_16))) & (((/* implicit */int) arr_7 [i_5 + 2] [i_5 + 2] [i_5 + 1]))));
            }
            for (unsigned char i_6 = 4; i_6 < 14; i_6 += 3) 
            {
                arr_26 [i_1] [i_2] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_25 [i_1] [i_2] [i_2] [i_6 - 2]))));
                arr_27 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_6] [i_6 + 1] [i_6 + 1] [i_1])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_18 [i_6] [i_6] [i_6 - 1] [i_1]))));
                arr_28 [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_6] [i_6 - 4])) : (((/* implicit */int) ((unsigned char) (unsigned char)101)))));
                /* LoopSeq 4 */
                for (unsigned char i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    arr_33 [i_7] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_6 - 2])) ? (((/* implicit */int) arr_1 [i_6 - 3])) : (((/* implicit */int) arr_1 [i_6 + 1]))));
                    arr_34 [i_7] [i_7] = (unsigned char)188;
                    arr_35 [i_1] [i_2] [i_6 + 1] [i_6] [i_7] = ((unsigned char) arr_17 [i_7]);
                }
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                {
                    arr_39 [i_1] [i_1] [i_6 - 4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) && (((/* implicit */_Bool) (unsigned char)247))))) < (((/* implicit */int) arr_37 [i_6 - 1] [i_6 - 2] [i_6 - 4]))));
                    arr_40 [i_1] [i_2] [i_6] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)211))));
                }
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                {
                    arr_44 [i_9] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)103)) & (((/* implicit */int) arr_17 [i_1]))))));
                    arr_45 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_6] [i_6 + 1] [i_6 - 4] [i_6 - 4] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_13 [i_6] [i_6 - 4] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 4])) : (((/* implicit */int) (unsigned char)79))));
                }
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
                {
                    arr_50 [i_1] [i_2] [i_6] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) > (((/* implicit */int) (unsigned char)115)))))));
                    arr_51 [i_1] [i_2] [i_6 - 4] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_2] [i_6 + 1] [i_6 - 2] [i_10] [i_6 + 1])) ? (((/* implicit */int) arr_36 [i_2] [i_2] [i_6 - 2] [i_2] [i_6 - 2])) : (((/* implicit */int) (unsigned char)142))));
                }
                arr_52 [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_6] [i_2] [i_6 - 3] [i_1] [i_6])) & (((/* implicit */int) arr_47 [i_1] [i_1] [i_6 - 3] [i_1] [i_1]))));
            }
        }
        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            arr_55 [i_11] [i_1] [i_1] = (unsigned char)15;
            arr_56 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_11]))));
            arr_57 [i_11] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_1] [i_11] [i_1] [i_11])) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) arr_24 [i_1] [i_1] [i_11]))));
            arr_58 [i_11] [i_1] = ((unsigned char) ((((/* implicit */_Bool) arr_36 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (unsigned char i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    {
                        arr_64 [i_13] [i_12] [i_11] [i_11] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_53 [i_1] [i_11] [i_13 + 2]))));
                        arr_65 [i_1] [i_11] [i_1] [i_12] [i_13 - 1] [i_13 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_13 - 1] [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 2])) ? (((/* implicit */int) arr_11 [i_13 - 1] [i_13 - 1] [i_13 + 2])) : (((/* implicit */int) (unsigned char)102))));
                    }
                } 
            } 
        }
        arr_66 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)88)) : ((+(((/* implicit */int) (unsigned char)211))))));
    }
    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
    {
        arr_71 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_14] [i_14]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_49 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))) ? ((+(((/* implicit */int) arr_12 [i_14])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) max((arr_46 [i_14] [i_14]), (arr_62 [i_14] [i_14] [i_14] [i_14]))))));
        arr_72 [i_14] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)93)), (max((((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) arr_53 [i_14] [i_14] [i_14])) : (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) max(((unsigned char)131), ((unsigned char)152))))))));
        arr_73 [i_14] = max(((unsigned char)69), ((unsigned char)157));
    }
    var_18 = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((unsigned char) var_13))))) + ((~(((/* implicit */int) max(((unsigned char)44), (var_10))))))));
    var_19 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) max((var_2), ((unsigned char)173)))), ((-(((/* implicit */int) var_4))))))));
}
