/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98237
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_8) && (arr_2 [i_0] [i_1] [i_0])))) - (max((((((/* implicit */int) (signed char)-52)) * (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_20 &= ((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (_Bool)1)))) | ((~(((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_13))))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)30), (((/* implicit */signed char) (_Bool)1)))))))) ? ((+((-(((/* implicit */int) arr_0 [i_1 - 1])))))) : ((-(((/* implicit */int) max((arr_2 [i_0] [(_Bool)1] [i_2]), ((_Bool)1))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min(((+((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((var_12), (((_Bool) var_9)))))));
    var_23 = var_18;
    /* LoopSeq 4 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_24 = ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_8 [i_3]))))));
        var_26 = ((/* implicit */_Bool) ((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) - (((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_27 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_4])) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) (!(arr_12 [(_Bool)1])))))) < (((/* implicit */int) min((((/* implicit */signed char) max((var_6), (var_13)))), (arr_10 [i_4] [i_4])))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1] [i_6])) || (var_10)))) * (((/* implicit */int) max((arr_18 [i_5] [i_6]), ((_Bool)1))))))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_14 [(_Bool)1] [i_5])), (((arr_14 [i_4] [i_6]) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_5] [i_6])) : ((-(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))))));
                    var_30 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) min(((signed char)64), (((/* implicit */signed char) var_18))))) >= (((/* implicit */int) arr_16 [i_4] [i_5] [i_6] [i_6]))))), (((((((/* implicit */int) arr_16 [i_4] [i_4] [i_5] [i_6])) * (((/* implicit */int) arr_17 [i_6] [i_5] [i_5] [i_4])))) ^ (((((/* implicit */int) arr_11 [i_6])) + (((/* implicit */int) var_13))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                {
                    var_31 = ((/* implicit */_Bool) ((signed char) max((arr_17 [i_4] [i_4] [i_4] [i_4]), (arr_17 [i_8] [i_7 - 1] [i_7] [i_4]))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) min((var_32), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))));
                                var_33 = ((/* implicit */_Bool) min((max((((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_4] [i_7])) == (((/* implicit */int) arr_20 [i_9] [i_10]))))), (arr_13 [i_7 - 1] [i_7 - 1] [i_7 - 1]))), (((/* implicit */signed char) arr_16 [i_4] [i_4] [i_9] [i_4]))));
                                var_34 = min(((_Bool)1), ((_Bool)0));
                                var_35 = ((/* implicit */_Bool) min((var_35), (((_Bool) var_14))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_36 = ((((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((signed char) arr_16 [i_4] [i_4] [i_4] [i_4]))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_37 = ((/* implicit */signed char) max((((min((var_13), (arr_9 [i_11]))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_19 [i_11] [i_11])), (arr_32 [(_Bool)1])))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */signed char) ((arr_17 [(_Bool)1] [i_11] [(_Bool)1] [(_Bool)1]) || ((_Bool)1)))), (arr_32 [i_11]))))));
        var_38 = ((/* implicit */signed char) min(((~(((/* implicit */int) (signed char)41)))), (((/* implicit */int) (signed char)31))));
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        var_39 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_12 - 1] [i_12 - 1] [i_12])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127))))));
        var_40 &= ((((/* implicit */int) (signed char)-41)) < (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                {
                    var_41 = ((/* implicit */_Bool) max((((/* implicit */int) (!(arr_37 [i_12 - 1] [i_13])))), (((((/* implicit */int) ((_Bool) arr_31 [i_12] [i_12]))) >> (((/* implicit */int) ((signed char) (_Bool)1)))))));
                    var_42 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    arr_41 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_10 [i_12 - 1] [i_12 - 1])))));
                }
            } 
        } 
        var_43 = ((/* implicit */_Bool) (~(((((/* implicit */int) max((var_4), (((/* implicit */signed char) arr_16 [i_12 - 1] [i_12] [i_12] [i_12 - 1]))))) - (((/* implicit */int) (_Bool)1))))));
    }
}
