/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72346
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
    var_10 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1892694257)))) ? (max((((/* implicit */int) var_2)), (-1892694257))) : (((/* implicit */int) ((1892694273) != (1892694257)))))), (min((min((1892694262), (1892694257))), ((+(67108863)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_11 *= (-(((/* implicit */int) ((-1892694257) >= (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_12 = ((67108851) + (arr_1 [i_0 + 4] [i_0 + 2]));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = (+(-67108863));
                        var_14 = ((((((/* implicit */int) (_Bool)0)) | (-957962739))) >= (arr_1 [i_1] [(_Bool)1]));
                        var_15 = ((((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_2] [i_3])) ? (-67108851) : (((/* implicit */int) arr_3 [i_2] [i_1])))) - (((((/* implicit */_Bool) 67108863)) ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : (arr_1 [i_0] [i_1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) 67108863)))));
                            arr_10 [i_0] [i_0] [i_4] [i_0] [(_Bool)1] = (-(((((/* implicit */_Bool) -1753536071)) ? (arr_5 [i_4 - 1] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0] [i_1] [i_0] [i_4 - 1]))));
                        }
                        var_17 = ((arr_1 [i_0 + 4] [i_0 + 4]) ^ ((~(((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_18 = ((int) (~(arr_11 [i_5 + 3] [i_5 - 1])));
            arr_17 [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
        }
        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                var_19 = ((/* implicit */_Bool) ((int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8]))))), (8184))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_20 += ((((/* implicit */_Bool) ((-67108849) | (arr_9 [(_Bool)1] [(_Bool)1] [i_8] [i_9] [i_5] [i_8] [i_8])))) ? ((+(arr_18 [i_8]))) : (((/* implicit */int) arr_22 [i_5 + 2] [i_5] [i_8] [i_9 - 1])));
                    arr_26 [i_8] [i_9 - 1] [i_8] [i_8] [i_7] [i_8] = ((((/* implicit */int) arr_23 [i_5])) - ((~(((/* implicit */int) (_Bool)1)))));
                }
                arr_27 [i_8] [i_8] [i_8] [i_8] = (~((((~(arr_11 [i_5] [i_7]))) | ((~(arr_11 [(_Bool)1] [(_Bool)1]))))));
            }
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7] [(_Bool)1] [i_5] [i_7] [i_5] [22] [22])) || (((/* implicit */_Bool) max((max((-8205), (1941231152))), (((/* implicit */int) ((_Bool) 1769156461)))))))))));
        }
        for (int i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            var_22 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    var_23 += ((int) min((((/* implicit */int) (_Bool)0)), ((~(-67108849)))));
                    var_24 = (~(((int) arr_24 [i_5 + 1])));
                    arr_38 [i_12] [23] [(_Bool)1] [i_10] [i_5 + 4] [i_5 + 1] = ((int) ((_Bool) -1941231152));
                    arr_39 [i_10] [i_11] = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) arr_11 [i_5 + 4] [i_11])))) ? ((~(-1779817433))) : ((~(((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */int) arr_36 [i_5] [i_10] [i_11 + 1])), (-1753536071)))));
                }
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_44 [i_13] = -1892694280;
                    arr_45 [i_5] [i_13] [14] [i_13] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(1779817432)))) ? (((int) arr_18 [i_5])) : ((-(((/* implicit */int) (_Bool)0)))))), (1143684971)));
                    arr_46 [(_Bool)1] [(_Bool)1] [i_13] [i_13] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_22 [2] [i_13] [i_10 - 1] [i_10])) : (((/* implicit */int) arr_37 [i_13]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (1187724933)))) : (((/* implicit */int) min((arr_31 [i_10]), (arr_4 [(_Bool)1] [i_5] [i_10] [i_5]))))))));
                }
            }
            for (int i_14 = 2; i_14 < 23; i_14 += 1) 
            {
                arr_51 [i_5] = (-(((arr_36 [i_14 - 1] [i_10 - 1] [i_5 + 1]) ? (((/* implicit */int) arr_36 [i_14 - 1] [i_10 - 1] [i_5 + 4])) : (((/* implicit */int) arr_36 [i_14 - 2] [i_10 - 2] [i_5 + 2])))));
                arr_52 [7] [i_5] = ((((((/* implicit */int) arr_14 [i_5 + 2] [i_10 + 1] [i_14 - 1])) >= (-427602919))) ? ((~(arr_5 [i_14 + 1] [i_5 - 2] [i_10 - 1]))) : (((((/* implicit */int) ((-8205) <= (((/* implicit */int) (_Bool)1))))) % ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1187724934))))));
            }
        }
        var_25 = ((((/* implicit */_Bool) max((max((arr_18 [i_5]), (-1725675784))), (((/* implicit */int) arr_36 [i_5 - 1] [i_5] [i_5]))))) ? (((((/* implicit */_Bool) min((1187724933), (((/* implicit */int) arr_36 [i_5] [i_5] [i_5 + 2]))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (-8182))) : ((-(((((/* implicit */_Bool) arr_20 [19] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_15 = 2; i_15 < 20; i_15 += 2) /* same iter space */
    {
        arr_55 [4] = ((_Bool) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
        var_26 *= ((max(((_Bool)0), ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((1386649695) - (((/* implicit */int) (_Bool)1)))))))));
        arr_56 [i_15 + 3] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_4 [i_15] [i_15 + 1] [20] [i_15 + 4])) ^ (((arr_31 [i_15]) ? (-1386649696) : (((/* implicit */int) arr_21 [i_15] [i_15 - 1] [i_15 + 1] [(_Bool)1])))))));
    }
    var_27 = ((/* implicit */_Bool) (+(max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_7), ((_Bool)1))))))));
    var_28 = ((int) (~(((int) 1567594166))));
}
