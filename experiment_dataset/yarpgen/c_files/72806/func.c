/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72806
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_9) : (var_9))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_7 [(_Bool)1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) max((min((((/* implicit */short) (unsigned char)132)), (var_3))), (((/* implicit */short) (_Bool)1)))))));
                var_13 = var_0;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_2), (((/* implicit */short) (_Bool)0)))))));
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_15 *= min((((/* implicit */short) ((arr_8 [i_2 - 1]) >= (1013085203U)))), (min((arr_10 [i_2 + 4] [i_2 + 2]), (((/* implicit */short) (_Bool)1)))));
        var_16 = min((((/* implicit */int) (!(((arr_8 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (((((/* implicit */_Bool) max((arr_9 [i_2] [i_2]), (((/* implicit */int) var_7))))) ? (((/* implicit */int) (short)29707)) : (arr_9 [(short)5] [i_2]))));
    }
    for (int i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) arr_9 [i_3 - 1] [i_3 + 4])) : ((~(var_9)))));
            var_18 = ((/* implicit */_Bool) (~((-(var_9)))));
            var_19 = ((2849959967U) & (arr_8 [i_3 + 3]));
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_3 + 3] [i_3 + 3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_3 + 3]))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3 + 3])) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((arr_8 [i_3 + 3]) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))))));
                    var_22 = ((/* implicit */unsigned int) (_Bool)1);
                    var_23 -= ((/* implicit */short) ((((_Bool) (short)3381)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (short)-4630)))));
                }
                for (int i_8 = 2; i_8 < 24; i_8 += 3) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_3] [i_5] [i_6] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_8))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 1984582494)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */short) var_1);
                        var_27 = ((/* implicit */short) var_4);
                    }
                    for (unsigned short i_10 = 1; i_10 < 24; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */int) min((var_28), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6])))))))));
                        var_29 = ((/* implicit */int) arr_24 [i_3] [i_6] [i_8] [i_10 - 1]);
                    }
                    arr_33 [i_3] [i_3] [(_Bool)1] [i_3] [i_8] [i_3] = ((/* implicit */_Bool) ((unsigned char) var_3));
                }
                for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 24; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */short) (~(((/* implicit */int) (short)-2913))));
                        var_31 = ((/* implicit */unsigned char) ((_Bool) var_0));
                        arr_40 [i_6] |= ((/* implicit */short) ((((/* implicit */int) (short)15)) << (((((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) var_4)) - (70))))) - (2147483023)))));
                        var_32 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8276))))) ? (((/* implicit */int) arr_11 [i_6])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)27870))))));
                    }
                    for (short i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (unsigned char)252))));
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((751479691) << (((((((/* implicit */int) var_0)) + (10213))) - (22))))))));
                        arr_43 [i_3] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) arr_13 [i_3 - 1]);
                        var_35 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                    }
                    arr_44 [i_3] [i_3] [i_3] [22] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned char)235))))));
                    var_36 = ((/* implicit */_Bool) arr_38 [i_3 + 2] [i_5] [i_6] [i_5]);
                    arr_45 [i_3] [i_3 + 1] [i_5] [i_3] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
                }
                for (short i_14 = 2; i_14 < 24; i_14 += 3) 
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (var_6))))));
                    var_38 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_3 + 4])) ? (var_5) : (((/* implicit */unsigned int) arr_27 [i_3 + 2]))));
                    var_39 = var_2;
                    var_40 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_5 - 1])) | (((/* implicit */int) var_11))));
                }
                var_41 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)64)) ? (arr_27 [i_5 - 1]) : (((/* implicit */int) arr_26 [i_6] [i_3 + 2] [i_6]))));
                arr_49 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1]) : (((/* implicit */int) (short)-22959))));
            }
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_16 = 1; i_16 < 21; i_16 += 2) 
                {
                    var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                    var_43 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_3] [i_3 + 4])) ? (((/* implicit */int) arr_25 [i_3 + 1] [i_3 + 3] [i_5 - 1])) : (((/* implicit */int) arr_21 [(short)5] [i_3 + 1]))));
                }
                for (unsigned int i_17 = 2; i_17 < 23; i_17 += 2) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (short)32758))))));
                    var_45 = arr_55 [i_3] [i_5 - 1] [i_5 - 1] [i_17];
                }
                for (unsigned int i_18 = 2; i_18 < 23; i_18 += 2) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [i_18] [i_15] [i_3] [i_3])) ^ (((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    for (short i_19 = 1; i_19 < 24; i_19 += 2) 
                    {
                        var_47 += ((/* implicit */unsigned int) ((unsigned short) (+(-968924924))));
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((unsigned short) arr_16 [i_18 + 1])))));
                        var_49 *= ((/* implicit */short) (-((-(2634129473U)))));
                    }
                }
                var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_3 + 2]))));
                arr_62 [i_3] [i_3] [i_15] [19] = ((/* implicit */short) ((((/* implicit */int) var_6)) ^ ((~(((/* implicit */int) (short)27256))))));
            }
        }
        arr_63 [(unsigned short)14] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [14]))) / (((((/* implicit */_Bool) -760944785)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9)))));
        arr_64 [i_3] [i_3] = ((/* implicit */_Bool) (short)(-32767 - 1));
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 21; i_20 += 3) /* same iter space */
    {
        var_51 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_20] [i_20] [i_20] [i_20 - 1])) && (((/* implicit */_Bool) arr_54 [i_20] [(short)11] [i_20] [i_20 - 1]))));
        arr_68 [i_20 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (((((/* implicit */_Bool) (short)16376)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
        arr_69 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */int) var_2)) | (((((/* implicit */_Bool) arr_29 [i_20] [i_20] [i_20] [i_20])) ? (((/* implicit */int) (unsigned short)28643)) : (((/* implicit */int) var_10))))));
    }
    var_52 -= ((/* implicit */unsigned short) max((var_0), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))))));
}
