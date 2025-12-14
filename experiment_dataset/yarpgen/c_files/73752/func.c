/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73752
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = arr_2 [i_1] [i_0];
                    var_21 = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) arr_3 [i_0])))) / (((/* implicit */int) ((unsigned char) (unsigned char)127))))), (((/* implicit */int) arr_4 [i_0]))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((unsigned char) (unsigned char)5))) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_8)) : (((((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_2])))) - (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0]))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (unsigned char)24)))) : (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned char)166))))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((unsigned char) arr_4 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) <= (((/* implicit */int) min((arr_8 [i_3] [i_3] [i_3]), (var_8))))))) | (((((/* implicit */_Bool) max(((unsigned char)161), (arr_14 [i_3])))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)155)) <= (((/* implicit */int) var_19)))))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)161), ((unsigned char)4)))) ? ((-(((/* implicit */int) min((arr_14 [i_4 + 1]), (arr_17 [i_3] [i_4] [i_6] [i_6] [i_7] [i_7])))))) : (((/* implicit */int) max((min(((unsigned char)167), ((unsigned char)18))), (arr_13 [i_4 + 1] [i_4] [i_4] [i_6 + 1] [i_7 + 1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    var_26 = min(((unsigned char)120), ((unsigned char)86));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                arr_25 [i_3 - 1] [i_4] [i_8] [i_8] [i_10] = (unsigned char)43;
                                arr_26 [i_8 - 3] [i_8 - 3] [i_8] [(unsigned char)10] [i_8] = (unsigned char)129;
                                var_27 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_12)))) * (((/* implicit */int) var_19)))) * (((/* implicit */int) ((unsigned char) arr_16 [i_10] [i_10] [i_3 - 1] [i_4 - 1] [i_8 - 2])))));
                            }
                        } 
                    } 
                    var_28 = (unsigned char)103;
                }
                for (unsigned char i_11 = 2; i_11 < 17; i_11 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((unsigned char)126), ((unsigned char)23)))) ? (((/* implicit */int) arr_9 [(unsigned char)15] [i_4] [i_11])) : ((+(((/* implicit */int) (unsigned char)107)))))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)81)) || (((/* implicit */_Bool) (unsigned char)126)))))));
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((unsigned char) (unsigned char)61))));
                }
                /* vectorizable */
                for (unsigned char i_12 = 1; i_12 < 15; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_30 [(unsigned char)5] [i_12 + 3] [i_13]))) ? (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_4 - 2] [i_12 + 3] [i_13])) : (((/* implicit */int) (unsigned char)46)))) : ((-(((/* implicit */int) (unsigned char)73))))));
                        arr_33 [i_3] [i_3] [i_4] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)168))));
                        var_32 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_21 [i_3 - 1] [i_4 + 1] [i_12]))))));
                        arr_34 [(unsigned char)8] [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)67)))))));
                    }
                    for (unsigned char i_14 = 3; i_14 < 16; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)130)) <= (((/* implicit */int) (unsigned char)195))));
                        var_34 -= var_5;
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_14 + 2] [i_4 - 1])) - (((/* implicit */int) arr_7 [i_14 - 1] [i_4 - 1]))));
                        arr_38 [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_21 [i_3] [i_3] [i_3]))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 14; i_15 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)245))));
                        arr_41 [i_3 + 1] [i_3 - 1] [(unsigned char)17] [i_15 + 2] [i_4 - 1] = (unsigned char)147;
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_42 [i_3] [i_3 - 1] [i_3] [i_4 + 1] [i_12 + 3] [i_16])) : (((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 2] [(unsigned char)5] [i_4 + 1]))));
                                var_38 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)193))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_15 [i_12] [i_4] [i_12] [i_16] [i_17]))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_4 - 2] [i_3 - 1]))));
                }
            }
        } 
    } 
}
