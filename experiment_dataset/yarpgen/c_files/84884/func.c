/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84884
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
    var_10 = max((max((min((var_6), (var_4))), (((unsigned char) var_5)))), (var_0));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_1 [i_0]), (arr_3 [i_1] [i_0] [(unsigned char)8]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((arr_3 [i_1] [i_0] [i_0]), (arr_0 [i_0])))))) : (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) min(((unsigned char)89), ((unsigned char)0))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((min((((((/* implicit */int) (unsigned char)59)) & (((/* implicit */int) (unsigned char)249)))), (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))), (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_0 [i_0 - 1]))))), (max((arr_2 [i_0] [i_1] [i_0 + 1]), (arr_2 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_2]))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (unsigned char)157)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_2] [i_3] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [(unsigned char)19]))));
                            arr_21 [(unsigned char)4] [i_5] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_6] [i_3] [i_4] [i_3] [i_2]))));
                            arr_22 [i_6] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_6] [i_3] [i_6] [i_6])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_4] [i_5])) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_2]))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_26 [i_4] [i_4] [i_4] [i_4] [(unsigned char)9] |= min((((unsigned char) max((arr_16 [i_4] [i_2]), (arr_17 [i_7] [i_5] [i_2] [i_3] [i_2])))), (max((max((arr_7 [i_2]), (arr_14 [i_2] [i_2] [(unsigned char)1] [i_2]))), (arr_15 [i_2]))));
                            var_13 &= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)1)), ((~(((/* implicit */int) (unsigned char)254))))));
                        }
                        var_14 = ((/* implicit */unsigned char) max((var_14), (max((min((max((arr_24 [i_2] [i_2] [i_2] [i_2] [(unsigned char)16] [i_2]), (arr_6 [i_2] [i_3]))), (((unsigned char) arr_8 [i_2] [i_2] [(unsigned char)3])))), (max((arr_11 [(unsigned char)0] [i_4] [i_3] [i_2]), (arr_18 [i_5] [i_5] [i_2] [(unsigned char)2] [i_2])))))));
                        var_15 = max((arr_10 [i_2] [i_4] [i_4]), (arr_25 [i_5] [i_4] [i_4] [i_3] [i_2] [i_2]));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_7 [i_8])))))))));
        arr_31 [i_8] [i_8] = max((min((min((arr_27 [(unsigned char)11]), (arr_27 [i_8]))), (min((arr_11 [(unsigned char)11] [i_8] [i_8] [i_8]), (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned char)22]))))), (min((arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_19 [i_8] [i_8] [i_8]))));
        arr_32 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_8] [(unsigned char)11] [i_8] [i_8] [i_8])) + (min((((((/* implicit */_Bool) arr_16 [i_8] [i_8])) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_8])))), ((~(((/* implicit */int) arr_8 [(unsigned char)13] [i_8] [i_8]))))))));
        var_16 += ((/* implicit */unsigned char) (~(((/* implicit */int) min((max((arr_7 [i_8]), (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned char)2]))), (min(((unsigned char)157), ((unsigned char)224))))))));
        arr_33 [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8])) << (((((/* implicit */int) max((arr_10 [i_8] [i_8] [i_8]), (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8])))) - (191))))), ((-(((/* implicit */int) arr_16 [i_8] [i_8]))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
    {
        arr_37 [i_9] = arr_34 [(unsigned char)13];
        /* LoopSeq 3 */
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            arr_42 [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_39 [i_9 - 1] [i_9 - 1] [i_9 + 1]))));
            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_9] [i_9 + 1]))));
        }
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 4; i_12 < 19; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    {
                        var_18 *= ((unsigned char) (unsigned char)1);
                        arr_50 [i_13] [i_12 - 1] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)157))));
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_9 + 1] [i_11] [i_12 - 3])) ? (((/* implicit */int) arr_40 [i_9 + 1] [i_11] [i_12 - 3])) : (((/* implicit */int) arr_40 [i_9 + 1] [i_9 + 1] [i_12 - 3]))));
                    }
                } 
            } 
            var_20 *= ((unsigned char) arr_10 [i_11] [i_9] [i_9]);
            arr_51 [i_9] [i_11] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_18 [i_9 - 1] [i_9] [i_9] [i_9] [i_9])) != (((/* implicit */int) arr_9 [i_11] [i_9])))) ? ((~(((/* implicit */int) arr_7 [i_9])))) : (((/* implicit */int) arr_25 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 1]))));
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9])) ? (((/* implicit */int) arr_49 [i_9 + 1] [i_9 + 1] [i_9] [i_9])) : (((/* implicit */int) arr_49 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_11]))));
        }
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_9] [i_9] [i_9]))) ? (((/* implicit */int) arr_44 [i_9 + 1] [i_9 + 1] [i_9 - 1])) : (((((/* implicit */_Bool) arr_16 [i_9] [i_9])) ? (((/* implicit */int) arr_9 [i_9] [i_14])) : (((/* implicit */int) arr_39 [i_14] [i_14] [i_9]))))));
            arr_54 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_9] [i_9 + 1] [i_9] [i_9 - 1])) | (((/* implicit */int) ((unsigned char) arr_46 [i_14] [i_9] [i_9])))));
            var_23 = ((unsigned char) ((((/* implicit */_Bool) arr_38 [i_9 + 1] [i_9 + 1] [i_9 + 1])) && (((/* implicit */_Bool) arr_7 [i_14]))));
        }
    }
}
