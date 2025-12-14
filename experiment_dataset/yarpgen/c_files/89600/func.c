/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89600
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
    var_18 = (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned char) var_15))) : (min((((/* implicit */int) var_15)), (1222807338))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2147483647) % (((/* implicit */int) (unsigned char)226))))) ? (min(((~(var_1))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_12 [i_0] [i_1] [i_3] [i_4]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_7 [i_0] [i_2] [i_2])));
                                var_19 = ((/* implicit */unsigned char) var_12);
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)70)) ? (var_11) : (arr_1 [i_0])))))) ? (max((arr_11 [i_1] [i_1] [i_1] [i_0]), (max((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])), (var_2))))) : (2147483643));
                }
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    var_21 = ((unsigned char) -1520981273);
                    var_22 = var_12;
                }
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [i_0] [i_0 - 2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                var_24 &= (-(((((((/* implicit */_Bool) var_16)) ? (var_2) : (arr_20 [i_6]))) - (((/* implicit */int) ((unsigned char) arr_22 [i_7]))))));
                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)35)))));
                arr_26 [i_6] [14] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)181)) >> (((arr_20 [i_7]) + (360344421))))) + (2147483647)));
                var_26 = arr_23 [(unsigned char)19] [i_7];
                /* LoopSeq 3 */
                for (int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                arr_38 [(unsigned char)15] [i_7] [i_7] [(unsigned char)15] [i_8] = ((/* implicit */unsigned char) max((-907836394), (((/* implicit */int) (unsigned char)30))));
                                arr_39 [i_8] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_27 [i_9])) % (((/* implicit */int) arr_28 [i_8] [i_9])))) > (max((1856079931), (2147483647)))));
                                var_27 ^= ((/* implicit */unsigned char) max((((max((arr_32 [i_6] [i_6] [i_9] [i_10]), (((/* implicit */int) arr_28 [i_7] [(unsigned char)8])))) & (518354610))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_10] [(unsigned char)18] [i_6])))))));
                                arr_40 [i_10] [i_10] [i_10] [i_10] [i_8] = ((/* implicit */int) max((arr_35 [i_6] [i_6] [i_6]), (((/* implicit */unsigned char) ((((/* implicit */int) var_17)) <= (((/* implicit */int) arr_36 [3] [i_7] [i_7])))))));
                            }
                        } 
                    } 
                    arr_41 [i_8] [i_7] [i_7] = ((((/* implicit */_Bool) (~(arr_30 [i_8] [i_7] [i_8] [i_8])))) ? ((~(var_1))) : (((/* implicit */int) ((arr_30 [i_8] [i_7] [i_7] [i_7]) > (arr_30 [i_8] [i_7] [14] [3])))));
                }
                for (int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                {
                    var_28 = ((((/* implicit */_Bool) (+(var_8)))) ? (min((((int) arr_23 [i_6] [i_6])), (((/* implicit */int) arr_24 [i_6])))) : (arr_34 [i_6] [i_11] [i_7] [i_7]));
                    var_29 = ((/* implicit */int) max((min((arr_36 [i_6] [i_6] [i_6]), (arr_28 [i_11] [i_11]))), (var_9)));
                    arr_45 [i_7] [i_7] [i_11] = ((/* implicit */unsigned char) ((max((max((((/* implicit */int) (unsigned char)0)), (var_4))), (((/* implicit */int) max((var_15), (var_10)))))) >= (arr_44 [i_6] [i_6] [i_6])));
                }
                for (int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        for (int i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            {
                                var_30 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_6] [i_6] [i_6]))))));
                                var_31 = ((((((/* implicit */int) arr_29 [i_6] [0] [i_14])) < (min((arr_30 [i_12] [17] [i_7] [i_12]), (((/* implicit */int) arr_42 [i_14] [i_7] [i_7])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */int) arr_42 [i_6] [i_6] [i_6])))))))) : (((/* implicit */int) (unsigned char)221)));
                            }
                        } 
                    } 
                    arr_54 [i_6] [i_12] [i_12] [i_12] = max((var_13), (((/* implicit */int) arr_35 [i_7] [i_7] [i_7])));
                }
            }
        } 
    } 
}
