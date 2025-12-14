/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69772
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
    var_12 = ((/* implicit */int) ((_Bool) (unsigned char)99));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 3; i_4 < 23; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1 - 2] [i_2] [i_2] [i_4] = ((/* implicit */int) var_1);
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)16)) + (((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -372568778)) || (((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_0] [i_0])))))))))))));
                                var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (arr_0 [i_0])))))) <= (min((var_3), (((int) (unsigned char)99))))));
                                var_15 = ((var_9) + (((/* implicit */int) ((unsigned char) arr_11 [i_0]))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                var_16 = ((/* implicit */int) (unsigned char)99);
                                arr_21 [i_0] [i_5] [i_2] [i_5] [i_5] [i_3] = ((/* implicit */unsigned int) (!(var_7)));
                                var_17 = ((/* implicit */int) ((arr_8 [i_3 - 1] [i_3 + 1] [i_2 - 1] [i_1 + 1]) > (arr_1 [i_2])));
                                arr_22 [i_0] [i_5] [i_2] [i_3] [i_5] [i_5] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_3] [i_0]))));
                            }
                            for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                            {
                                arr_26 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_5 [i_1 + 2] [i_2 - 2])) * (((/* implicit */int) arr_18 [i_0] [i_1] [i_1 + 1] [i_1] [i_3 - 1]))))));
                                arr_27 [i_3] [i_1] [i_2] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_1] [i_1] [i_1 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_1] [i_1 - 2] [i_1]) : (((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned int) 3)) : (0U))))))));
                            }
                            var_18 = max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_9)) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2]) : (((/* implicit */int) (unsigned char)6)))))));
                            arr_28 [i_3 - 1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_1] [i_0] [i_0]);
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_4))));
                        }
                    } 
                } 
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -1748612202);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))) / (min((var_6), (((/* implicit */unsigned int) ((var_8) & (arr_32 [i_7]))))))));
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)1)) & ((~((~(var_8)))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_36 [i_8] = ((/* implicit */unsigned int) 1882493217);
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                for (unsigned char i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    {
                        arr_43 [i_8] [12U] [i_8] [i_8] [i_8] [i_8] |= ((/* implicit */int) (unsigned char)255);
                        arr_44 [i_10] [i_9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_11 - 1] [i_11 - 1] [i_11] [i_11]))) - (((((/* implicit */_Bool) var_1)) ? (arr_35 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))))));
                        var_22 = ((unsigned int) ((((/* implicit */_Bool) -2766273)) ? (-2147483637) : (1899669361)));
                        arr_45 [i_8] [i_10] [i_11] [i_8] = ((((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_24 [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 + 3])) : (((-4) - (4))));
                        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 1; i_12 < 19; i_12 += 2) 
    {
        for (unsigned int i_13 = 2; i_13 < 18; i_13 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (int i_15 = 1; i_15 < 19; i_15 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) (~(712323693)));
                            var_25 += ((/* implicit */unsigned char) ((max((((((/* implicit */int) arr_5 [i_13] [i_13])) << (((/* implicit */int) arr_53 [i_15] [i_13] [i_12 + 1])))), (((/* implicit */int) arr_46 [i_12])))) & (var_2)));
                        }
                    } 
                } 
                var_26 = max((max((((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_12 + 1])), (942044506))), (min((var_2), (((/* implicit */int) arr_10 [i_12] [i_12] [i_12] [i_12 - 1])))));
                arr_57 [i_12 - 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_11)) ? (arr_41 [i_13] [i_13] [i_13 + 2] [i_13] [i_13 - 2] [i_13]) : (arr_9 [i_13] [i_13 + 2] [i_12 - 1])))));
                var_27 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_12])) ? (arr_50 [i_13] [i_13]) : (((/* implicit */int) arr_20 [i_13] [i_13] [i_12]))))) ? (((((/* implicit */int) var_11)) % (1312382821))) : (((int) var_5)))) * (((arr_55 [i_12 - 1] [i_12 + 1] [i_13 - 1] [i_13 - 2]) ? (((/* implicit */int) arr_55 [i_12 + 1] [i_12 - 1] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_55 [i_12 + 1] [i_12 - 1] [i_13 + 2] [i_13 - 1])))));
            }
        } 
    } 
}
