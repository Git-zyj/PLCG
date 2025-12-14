/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71078
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
    var_15 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) ((_Bool) (unsigned char)11))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */_Bool) (unsigned char)245);
            arr_5 [i_0] = var_11;
        }
        var_17 = ((unsigned char) arr_4 [(_Bool)1] [i_0] [i_0]);
        arr_6 [i_0] [i_0] = (_Bool)1;
        var_18 = (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [(unsigned char)7] [i_0 + 1])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    var_19 = (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)250)))))))));
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)153), ((unsigned char)249))))));
                    arr_14 [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_3])) / (((/* implicit */int) max((max((arr_12 [i_2] [i_2] [i_3] [i_3]), (((/* implicit */unsigned char) (_Bool)0)))), (var_10))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) ((unsigned char) (_Bool)1))) * (((/* implicit */int) arr_9 [i_2] [i_2])))) : ((-(((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) / (((/* implicit */int) (unsigned char)202)))))))))));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [(unsigned char)15])) ? (((/* implicit */int) (_Bool)1)) : (((arr_17 [i_5]) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) var_7))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    arr_22 [i_5] [i_5] [(unsigned char)17] [i_7] = max((((_Bool) arr_21 [i_7 + 1] [i_6] [i_6])), ((((-(((/* implicit */int) arr_20 [i_5] [i_6])))) <= (((/* implicit */int) (_Bool)1)))));
                    arr_23 [i_5] [i_6] [i_6] [i_5] = arr_18 [i_5];
                }
            } 
        } 
        var_23 *= ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_16 [i_5] [i_5]))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)68))) ? (((/* implicit */int) (unsigned char)114)) : ((-(((/* implicit */int) arr_17 [i_8]))))));
        var_25 = arr_7 [(_Bool)1] [i_8];
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
    {
        for (unsigned char i_10 = 3; i_10 < 12; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_26 = max((max(((unsigned char)198), ((unsigned char)94))), (((unsigned char) arr_0 [i_10 + 1])));
                                var_27 *= ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_39 [(unsigned char)12] [(unsigned char)12] [i_13 - 2])))), (((/* implicit */int) (unsigned char)254))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        {
                            arr_47 [i_9] [i_14] [i_10] [i_9] = ((/* implicit */unsigned char) arr_10 [(_Bool)1] [i_10]);
                            var_28 = (_Bool)1;
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */int) (!(arr_7 [i_10 + 1] [i_10 - 3])))) < (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
            }
        } 
    } 
}
