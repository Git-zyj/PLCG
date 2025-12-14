/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65476
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
    var_10 = ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))) > (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_0))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((_Bool) (_Bool)1);
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_20 [i_1] [i_2] [(_Bool)1] [i_4] [i_5] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_4 [i_4 - 1])) == (((/* implicit */int) (unsigned char)114)))));
                                arr_21 [i_5] [i_4] [(_Bool)0] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_1 [i_3])) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) arr_4 [i_2]))));
                                var_12 = ((min(((~(((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1])))), (((/* implicit */int) var_5)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [i_4 + 3] [i_1 + 3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
                        {
                            {
                                arr_29 [i_6] [i_6] [i_1] [(_Bool)1] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) ((_Bool) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) min((((((/* implicit */int) var_6)) > (((/* implicit */int) var_3)))), (arr_24 [i_1] [i_2] [i_2] [i_6] [i_7]))))));
                                var_13 = max((arr_26 [i_1] [i_2] [i_3] [i_3] [i_6]), ((unsigned char)141));
                                var_14 = ((((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_2])) > (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [i_2] [i_1])), ((unsigned char)144)))) ? (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0)))));
                                arr_30 [i_3 - 1] [i_6] [i_3 - 1] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_6 - 1]))))) ? (((/* implicit */int) min((arr_10 [i_6 - 1]), (arr_10 [i_6 - 1])))) : (((((/* implicit */int) arr_10 [i_6 - 1])) * (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    arr_31 [i_3 - 1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) max(((_Bool)0), (arr_1 [(unsigned char)4])))) > ((~(((/* implicit */int) (_Bool)1))))))) * (((/* implicit */int) ((((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) == (((arr_12 [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1])))))))));
                }
            } 
        } 
        arr_32 [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_5 [i_1 + 4] [i_1])) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) arr_22 [i_1 + 2] [i_1 + 3] [i_1] [i_1 + 2])) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */int) arr_19 [i_1] [(_Bool)1] [(_Bool)1])) >= (((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((var_1), (var_2)));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_45 [i_10] [i_11] [i_10] [i_11] = ((/* implicit */unsigned char) (_Bool)0);
                        var_16 = ((/* implicit */_Bool) ((min(((_Bool)1), (var_2))) ? (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)113)) < (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_11] [i_10] [i_9] [i_8])) > (((/* implicit */int) var_1))))) < (((((/* implicit */int) arr_33 [(_Bool)1] [i_10])) % (((/* implicit */int) (unsigned char)216)))))))));
                        arr_46 [i_8] [i_10] [i_8] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_35 [i_8]) ? (((/* implicit */int) arr_26 [i_10] [i_9] [i_9] [i_9] [i_10])) : (((((/* implicit */int) arr_1 [(_Bool)1])) * (((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)206)) - (196)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        arr_51 [i_10] [i_10] = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)14))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)60)) == (((/* implicit */int) (_Bool)1))))))));
                        arr_52 [i_10] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)16))));
                        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)242))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_10] [i_10] [(unsigned char)3] [i_10] [i_10]))))) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_6 [i_12] [i_10])))))))));
                    }
                }
            } 
        } 
        arr_53 [i_8] = ((_Bool) ((((/* implicit */int) var_4)) == (((/* implicit */int) min((var_9), (var_3))))));
    }
}
