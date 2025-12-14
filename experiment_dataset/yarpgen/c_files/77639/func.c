/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77639
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [(unsigned char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [(unsigned char)15])) : (((/* implicit */int) (unsigned char)249)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_2 [(unsigned char)16])))) : (((/* implicit */int) (unsigned char)70))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_17 ^= ((unsigned char) (unsigned char)41);
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
            {
                arr_9 [i_0] [i_0] = max((((unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_2])) & (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)91))) >= ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
                var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)0)) ? ((~(((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) (unsigned char)0)))), ((+(((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_2]))))))));
                arr_10 [i_0] [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) arr_0 [i_1] [(unsigned char)2])))), (((((/* implicit */int) arr_0 [i_0] [i_1])) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (162)))))));
                var_19 *= (unsigned char)245;
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_20 = ((unsigned char) min((((unsigned char) arr_0 [i_0] [(unsigned char)4])), ((unsigned char)7)));
                            var_21 = arr_5 [i_0] [i_0] [i_3];
                            arr_15 [i_0] [i_1] [i_2] [i_2] [(unsigned char)8] [i_0] [i_3] = ((/* implicit */unsigned char) (~((-(((((/* implicit */int) (unsigned char)242)) + (((/* implicit */int) arr_1 [i_1]))))))));
                            var_22 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)176)))), (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)255))))))));
                            arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (((/* implicit */int) arr_0 [(unsigned char)0] [i_4])) : (min((((/* implicit */int) (unsigned char)58)), ((+(((/* implicit */int) (unsigned char)10))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
            {
                var_23 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_14 [i_0] [i_1] [i_5]), (arr_14 [i_0] [i_0] [i_5]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    var_24 = ((unsigned char) (unsigned char)8);
                    var_25 = (unsigned char)211;
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned char) arr_3 [i_7 - 1]);
                        var_26 ^= ((unsigned char) arr_22 [i_7] [i_7] [(unsigned char)3] [i_7] [i_7]);
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_6] [(unsigned char)8] |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)22))));
                        arr_28 [i_0] [i_8] [i_5] [(unsigned char)15] [i_8] = ((unsigned char) (~(((/* implicit */int) var_3))));
                        arr_29 [i_5] [i_1] [i_6] [i_5] [i_8] [i_6 + 2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */int) arr_2 [i_6 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)205)))))));
                    }
                    var_27 = ((/* implicit */unsigned char) max((var_27), (arr_7 [i_6 + 2] [i_6 - 2])));
                }
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_7 [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) var_11)))))))), ((~(((/* implicit */int) arr_20 [i_0] [i_1] [(unsigned char)11] [i_9 + 1] [(unsigned char)0] [i_9]))))));
                    arr_32 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) arr_23 [(unsigned char)13] [i_1] [i_1] [i_5] [i_9 + 2])))))))));
                    var_29 *= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_0 [i_0] [i_1])) & (((/* implicit */int) arr_0 [i_0] [i_0])))), ((+(((((/* implicit */int) (unsigned char)11)) ^ (((/* implicit */int) (unsigned char)255))))))));
                }
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_5])) : (((/* implicit */int) (unsigned char)189))))) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)22)))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) min((arr_21 [i_1] [i_1] [(unsigned char)3] [i_0]), ((unsigned char)1))))));
            }
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned char i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_32 += min((((unsigned char) (unsigned char)189)), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)99)) == (((/* implicit */int) arr_30 [i_0] [i_11] [i_0] [i_12 + 1]))))));
                            arr_40 [i_0] [i_1] [i_10] [(unsigned char)1] [i_0] = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_18 [i_0])))), (((/* implicit */int) arr_26 [i_0] [i_12 - 2] [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
                arr_41 [i_10] [i_0] [i_0] [i_1] &= ((unsigned char) ((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) arr_8 [(unsigned char)2] [i_10] [i_10])) : (((/* implicit */int) (unsigned char)196)))) << (((((/* implicit */int) min((var_6), (var_2)))) - (187)))));
                var_33 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) min((arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), ((unsigned char)17))))));
            }
        }
        arr_42 [i_0] [i_0] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 4; i_13 < 18; i_13 += 4) 
        {
            for (unsigned char i_14 = 3; i_14 < 18; i_14 += 2) 
            {
                {
                    var_34 |= ((unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) << ((((+(((/* implicit */int) var_12)))) - (55)))));
                    arr_48 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)187)))), ((+(((/* implicit */int) arr_33 [i_14 + 1] [i_13]))))));
                    var_35 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)9))))))) ? ((-((-(((/* implicit */int) (unsigned char)11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)177)))))));
                }
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
    {
        arr_51 [i_15] |= ((/* implicit */unsigned char) (~((~(((/* implicit */int) min(((unsigned char)246), (var_10))))))));
        arr_52 [i_15] = arr_14 [(unsigned char)18] [i_15] [i_15];
        arr_53 [i_15] = arr_38 [i_15] [i_15] [i_15] [i_15] [(unsigned char)8] [i_15];
    }
    var_36 = var_16;
}
