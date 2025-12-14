/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90416
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)13061)) ? (((/* implicit */int) (unsigned short)33159)) : (((/* implicit */int) (unsigned short)15497)))))) | (((/* implicit */int) ((unsigned short) min((var_10), (var_3)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)33159)) <= (((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned short)56835)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))));
    var_21 = var_16;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_22 = arr_1 [i_0] [i_0 + 1];
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [(unsigned short)0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */int) arr_0 [i_2 - 3] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 3] [i_2]))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4884)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 1]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1]))) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))));
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_1] [i_2 + 1] [i_2 + 1]))));
                        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                        arr_10 [i_0] [(unsigned short)2] [i_1] [i_0] [i_0] = (unsigned short)15497;
                        arr_11 [i_3] |= (unsigned short)2568;
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1]))));
                        arr_17 [i_1] [(unsigned short)12] [i_0] [(unsigned short)12] = ((unsigned short) arr_8 [i_1 + 1] [i_2 + 1]);
                    }
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_2] [i_5]))));
                        arr_22 [i_0 - 2] [(unsigned short)4] [(unsigned short)3] [i_2] [i_1] [(unsigned short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35561)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)50620))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_27 |= ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_28 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29971)) ? (((/* implicit */int) (unsigned short)37082)) : (((/* implicit */int) var_2)))))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63109)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
                            arr_27 [i_0] [i_6] [(unsigned short)5] [i_1] [i_0] = arr_8 [i_7] [i_2];
                            arr_28 [i_1] [i_1] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [(unsigned short)13])) ? (((/* implicit */int) ((unsigned short) (unsigned short)63405))) : (((/* implicit */int) arr_19 [i_2 - 2] [i_1]))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (unsigned short)9680)) : (((/* implicit */int) (unsigned short)65504))));
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65278)))))));
                            var_31 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [(unsigned short)6] [(unsigned short)6] [i_0 + 3] [i_1 - 1] [i_2 + 1] [(unsigned short)6]))));
                        }
                        var_32 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_8 [i_1 + 1] [(unsigned short)4])) <= (((/* implicit */int) arr_19 [i_0 + 2] [i_1]))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_1])) >> (((((/* implicit */int) (unsigned short)52192)) - (52165)))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            for (unsigned short i_10 = 1; i_10 < 19; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    {
                        var_34 = var_1;
                        var_35 &= ((unsigned short) (unsigned short)57869);
                        arr_40 [(unsigned short)18] [i_10] [(unsigned short)20] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_32 [i_11] [i_10 - 1]))));
                        var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [(unsigned short)16] [i_0 + 2] [i_0] [i_0 + 2] [i_0]))));
                    }
                } 
            } 
        } 
        var_37 = var_3;
    }
    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (unsigned short)25866)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)57844)))) : (((/* implicit */int) (unsigned short)24))));
}
