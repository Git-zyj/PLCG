/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77168
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) arr_0 [i_0 - 1])))) * (((((/* implicit */int) max((arr_0 [i_0 - 1]), ((_Bool)1)))) * (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_18 = arr_1 [i_0];
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((arr_10 [i_0 - 1] [i_1] [i_0] [i_3]) ? (((/* implicit */int) (!(min(((_Bool)0), (var_11)))))) : (((((/* implicit */int) min((arr_10 [i_0 - 1] [i_1] [i_0] [i_3]), ((_Bool)1)))) * (((/* implicit */int) var_14))))));
                        arr_12 [i_3] [i_0] [i_2 - 1] [i_1] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_7 [i_0 - 1]), (var_4)))) | (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 - 1])) >= (((/* implicit */int) arr_4 [i_0 - 1])))))));
                        arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), (arr_8 [i_0 - 1] [i_0] [i_1] [i_3])))) % (((/* implicit */int) arr_10 [i_2 - 1] [i_0] [i_0] [i_0 - 1]))));
                        var_20 = (!((_Bool)1));
                    }
                } 
            } 
            arr_14 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0])) * (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_1]))))) || ((((_Bool)1) || (arr_4 [i_0 - 1]))));
            var_21 = ((/* implicit */_Bool) max((((/* implicit */int) min((var_5), (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) (_Bool)0))))))), ((-(((arr_3 [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_10))))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_22 = var_3;
                var_23 = arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1];
                var_24 = arr_17 [i_0 - 1] [i_4] [i_5 - 1] [i_0 - 1];
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 - 1] [i_5 - 1] [i_0] [i_5 - 1]))));
                            var_26 = ((((/* implicit */_Bool) ((arr_3 [i_4] [i_0]) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])) : (((/* implicit */int) (_Bool)1))))) || (arr_15 [i_0 - 1] [i_4] [i_0]));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_10 [i_0 - 1] [i_7] [i_0] [i_7]))));
                        }
                    } 
                } 
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_33 [i_10] [i_10] [i_9] [i_0] [i_8 - 1] [i_4] [i_0 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_28 *= ((/* implicit */_Bool) (~(((arr_9 [i_9] [(_Bool)0] [i_4]) ? (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_20 [i_0 - 1] [i_8 - 1] [i_8 - 1] [i_9]))))));
                            arr_34 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) ((arr_6 [i_0 - 1] [i_4] [i_8 - 1] [i_9]) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_8 - 1] [i_9])) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                var_29 += (!(arr_32 [(_Bool)1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]));
                arr_35 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8 - 1])) & (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_4] [i_11])) % (((/* implicit */int) arr_30 [i_0 - 1] [i_8 - 1]))));
                            arr_41 [i_0 - 1] [i_4] [i_0] [i_11] [i_11] [i_12] [i_12] = (_Bool)1;
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_38 [i_14 + 1] [i_14 + 1] [(_Bool)1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1])))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_0 - 1] [i_13] [i_14 + 1])) << (((/* implicit */int) arr_7 [i_0 - 1]))));
                        var_33 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_14 + 1] [(_Bool)1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) min((var_34), (var_10)));
                            var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                            var_36 = ((/* implicit */_Bool) max((var_36), ((_Bool)1)));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_14 + 1] [i_0])) | (((/* implicit */int) arr_47 [i_14 + 1] [i_0 - 1] [i_0 - 1]))));
                            var_38 = ((/* implicit */_Bool) max((var_38), (arr_24 [(_Bool)1])));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_54 [i_0 - 1] [i_4] [i_13] [i_0] [i_16] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_44 [i_16] [i_16] [i_16] [i_16])))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) arr_30 [i_0 - 1] [i_14 + 1]))));
                            var_39 = ((/* implicit */_Bool) ((arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_14 + 1]) ? (((arr_51 [i_13] [i_4] [i_13]) ? (((/* implicit */int) arr_28 [i_16] [i_0] [i_0] [i_4])) : (((/* implicit */int) var_5)))) : ((((_Bool)1) ? (((/* implicit */int) arr_48 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (_Bool)1))))));
                            var_40 *= arr_40 [i_14 + 1] [i_14 + 1] [(_Bool)1] [i_16] [i_16];
                        }
                        var_41 = (_Bool)1;
                    }
                } 
            } 
            var_42 = ((/* implicit */_Bool) ((arr_52 [i_0 - 1]) ? (((/* implicit */int) arr_51 [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_52 [i_4]))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */_Bool) ((((arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_21 [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_21 [i_17] [i_17] [i_0 - 1] [i_0 - 1])))) * (((/* implicit */int) max((arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_21 [i_17] [i_17] [i_0 - 1] [i_0 - 1]))))));
            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_17] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) arr_16 [i_17])) : ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))));
            var_45 *= max((((_Bool) arr_24 [(_Bool)1])), (var_12));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_46 = arr_29 [i_0 - 1] [i_0 - 1] [i_18] [i_18];
            var_47 = ((((/* implicit */int) ((_Bool) arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))) >= (((arr_49 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_49 [i_0 - 1] [i_18] [i_18] [i_0 - 1] [i_0])) : (((/* implicit */int) var_16)))));
            var_48 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_10 [i_0 - 1] [i_18] [(_Bool)0] [i_18]) || (arr_4 [i_18]))))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
    {
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            {
                var_49 *= (((-(((((/* implicit */int) arr_64 [i_19 - 1])) % (((/* implicit */int) arr_60 [(_Bool)1])))))) < (((((((/* implicit */int) arr_61 [(_Bool)1])) / (((/* implicit */int) var_10)))) >> (((((/* implicit */int) arr_66 [i_19 - 1] [i_20 - 1])) << (((/* implicit */int) arr_65 [i_19 - 1] [i_20 - 1] [i_20 - 1])))))));
                var_50 = ((/* implicit */_Bool) max((var_50), (var_16)));
            }
        } 
    } 
    var_51 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
}
