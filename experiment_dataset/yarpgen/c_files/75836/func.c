/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75836
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)39)))))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min(((~(((/* implicit */int) max(((signed char)22), ((signed char)-23)))))), (((/* implicit */int) (signed char)-22)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = (signed char)-47;
        arr_2 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [(signed char)6] &= arr_3 [i_1];
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [(signed char)16])) : (((/* implicit */int) arr_3 [i_1]))));
    }
    for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        var_17 = (i_2 % 2 == zero) ? (((/* implicit */signed char) (((-(((/* implicit */int) arr_8 [i_2])))) << (((((((/* implicit */_Bool) min((arr_10 [i_2]), ((signed char)-35)))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((((/* implicit */int) (signed char)77)) != (((/* implicit */int) (signed char)-1))))))) + (37)))))) : (((/* implicit */signed char) (((((-(((/* implicit */int) arr_8 [i_2])))) + (2147483647))) << (((((((((/* implicit */_Bool) min((arr_10 [i_2]), ((signed char)-35)))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) ((((/* implicit */int) (signed char)77)) != (((/* implicit */int) (signed char)-1))))))) + (37))) - (8))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_20 [(signed char)18] [i_4 - 1] [i_5] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) arr_15 [(signed char)13] [(signed char)0] [(signed char)6])) : (((/* implicit */int) arr_16 [i_2] [(signed char)16] [i_4] [i_4] [(signed char)16])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_2 + 1] [i_3] [i_3] [(signed char)6] [i_4 - 1] [i_5]))))))) ? ((~((~(((/* implicit */int) var_11)))))) : ((((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)51)))))))));
                            arr_21 [i_2] [i_3] = (signed char)-3;
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_18 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)121)) | (((/* implicit */int) (signed char)48))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) min((arr_12 [i_4 + 1]), (arr_12 [i_4 + 1])))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)64)) * (min(((~(((/* implicit */int) (signed char)-34)))), (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)53))))))));
                            var_21 = ((/* implicit */signed char) (((~(((/* implicit */int) ((signed char) arr_7 [i_4 - 1] [i_4 - 1]))))) ^ (((/* implicit */int) min((min((var_4), (var_5))), ((signed char)-78))))));
                            arr_24 [(signed char)12] [(signed char)10] [(signed char)12] [i_2] [(signed char)12] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)-8))))));
                        }
                        var_22 += ((/* implicit */signed char) min((min((((((/* implicit */int) (signed char)-100)) * (((/* implicit */int) (signed char)-97)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_0)))))), (((((((/* implicit */int) arr_17 [i_2 + 1] [i_2] [i_3] [(signed char)16] [i_4] [i_5])) != (((/* implicit */int) (signed char)114)))) ? (((/* implicit */int) arr_22 [(signed char)20] [(signed char)20] [(signed char)20] [i_5] [(signed char)0] [(signed char)2])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)64))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) < (((/* implicit */int) min(((signed char)113), (var_7)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-74))));
                    arr_32 [i_2 + 1] [i_8] [i_2] [i_8] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-50)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_19 [i_2] [i_9] [i_2] [(signed char)10] [i_9] [i_2 + 3])) : (((/* implicit */int) (signed char)-30))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-112)) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_2] [(signed char)4] [i_2])) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) arr_27 [i_2] [i_2] [i_2]))))))));
    }
    for (signed char i_10 = 4; i_10 < 16; i_10 += 4) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (min((min((arr_34 [i_10 + 3]), (arr_34 [i_10 + 4]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_10 + 4])))))))));
        var_26 &= max((var_8), (var_5));
        var_27 = (signed char)31;
    }
    /* LoopNest 3 */
    for (signed char i_11 = 0; i_11 < 16; i_11 += 4) 
    {
        for (signed char i_12 = 3; i_12 < 13; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-((~(((/* implicit */int) max((var_13), (var_13)))))))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        for (signed char i_15 = 2; i_15 < 13; i_15 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) (signed char)89)))) : (((/* implicit */int) arr_30 [(signed char)14] [(signed char)14] [i_13] [(signed char)2])))))));
                                var_30 = arr_33 [i_13] [i_15];
                            }
                        } 
                    } 
                    var_31 -= arr_51 [i_11] [i_12 - 3] [i_11] [i_11] [i_13] [i_11] [i_11];
                    var_32 = ((/* implicit */signed char) ((min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_10)))))) / ((+(((/* implicit */int) max((arr_17 [i_11] [(signed char)8] [(signed char)2] [i_11] [i_11] [(signed char)8]), (arr_42 [i_13] [i_11] [i_11] [i_11]))))))));
                    var_33 = ((/* implicit */signed char) min((var_33), (var_12)));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))), (((/* implicit */int) min((var_12), ((signed char)-45))))))) ? (((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (signed char)-8))))) ^ (((/* implicit */int) min(((signed char)45), (var_6)))))) : (((/* implicit */int) (signed char)-27))));
}
