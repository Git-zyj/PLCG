/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62372
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((((arr_1 [i_0]) & (((/* implicit */int) arr_2 [i_0] [i_0])))) | (min((max((arr_5 [(_Bool)1] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0]))), ((~(arr_1 [(_Bool)1]))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((int) arr_4 [i_0] [(_Bool)0]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((-1497026955) / (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_3 [i_0])) * (arr_0 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [(_Bool)1])) < (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (arr_9 [i_3])))));
        arr_11 [i_3] [i_3] = ((var_2) ? (var_4) : (-67108864));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                arr_18 [i_3] = (~(((/* implicit */int) ((var_0) || ((_Bool)1)))));
                arr_19 [(_Bool)1] [i_3] = ((_Bool) ((int) 67108864));
                arr_20 [10] [i_3] [i_3] = ((/* implicit */int) arr_13 [i_3]);
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_25 [i_5] [i_3] [i_5] [8] [i_3] [15] = ((/* implicit */int) ((((var_11) ? (2147483647) : (max((var_4), (((/* implicit */int) arr_14 [i_3] [i_3] [i_5])))))) >= (arr_10 [i_4])));
                    var_16 ^= (+((-2147483647 - 1)));
                }
                for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_17 = ((((/* implicit */_Bool) -906324715)) || (arr_29 [i_3] [i_4] [i_5] [i_7] [i_8] [i_5] [i_7]));
                        var_18 = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((int) min((var_7), (((/* implicit */int) arr_8 [i_3] [i_3]))))))));
                        arr_32 [i_3] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 906324711)) ? (262016) : (((/* implicit */int) var_10))))) ? (max((arr_10 [i_7]), (var_4))) : (8388592))));
                        var_19 = ((/* implicit */_Bool) var_5);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) 1056964608)) ? (((((/* implicit */_Bool) var_8)) ? (1610612736) : (var_7))) : (((/* implicit */int) arr_35 [i_3] [i_4] [i_4] [i_5] [i_7] [1])))))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) max((arr_24 [i_5] [6] [(_Bool)1] [6] [i_5] [i_3]), (arr_28 [(_Bool)1] [i_7] [i_5])))) > ((-(arr_21 [i_9] [i_7] [(_Bool)1] [i_3])))))) ^ (((((/* implicit */_Bool) ((arr_12 [i_3] [i_3] [i_7]) ? (((/* implicit */int) var_10)) : (arr_23 [i_3])))) ? (min((var_7), (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_7)))))));
                        arr_37 [i_3] [i_7] [i_5] [i_4] [i_3] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (506289711)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_3] [i_4] [i_3] [i_7] [10] = -399674051;
                        arr_41 [i_3] [i_3] = max((((_Bool) min(((_Bool)0), (var_10)))), (((_Bool) var_0)));
                        var_22 = ((/* implicit */int) ((_Bool) ((var_1) < (((/* implicit */int) arr_38 [i_3] [i_4] [i_3])))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_46 [i_3] [i_4] [i_5] [i_7] [i_11] [i_11] [i_11] = ((((/* implicit */int) ((((arr_14 [i_3] [i_3] [i_11]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (_Bool)0)) / (-12444509)))))) % (((((/* implicit */_Bool) ((int) var_9))) ? (min((87416740), (-1025284396))) : (((/* implicit */int) min(((_Bool)1), (arr_8 [i_3] [i_3])))))));
                        var_23 = ((min((-1596520167), (((/* implicit */int) arr_14 [i_3] [i_4] [i_5])))) / (max((1990937009), (((/* implicit */int) (_Bool)1)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) /* same iter space */
                    {
                        var_24 = ((((int) 1257985027)) <= ((~(((/* implicit */int) (_Bool)1)))));
                        var_25 += min((((arr_16 [6] [18]) ? (var_4) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_0))))))), (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_12] [i_5] [2] [i_5] [i_5] [i_3])))) < (((/* implicit */int) (_Bool)1))))));
                        var_26 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_39 [i_3] [i_5] [i_4] [i_4] [i_12] [i_5] [i_4])), (-1971926001)))) ? (((((/* implicit */int) arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) | (var_1))) : (((arr_39 [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_12] [i_4] [i_7]) ? (((/* implicit */int) arr_39 [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_39 [i_3] [i_4] [(_Bool)1] [i_3] [i_12] [(_Bool)1] [i_4])))));
                    }
                    for (int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_27 ^= (~(((/* implicit */int) (_Bool)1)));
                        var_28 = (-(((((/* implicit */_Bool) -7)) ? (((/* implicit */int) ((var_7) == (-2147483647)))) : (((((/* implicit */_Bool) 1706034624)) ? (arr_9 [i_3]) : (((/* implicit */int) arr_16 [i_5] [i_3])))))));
                    }
                    arr_53 [i_7] [i_4] [i_5] [i_7] [i_7] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((var_4), (((/* implicit */int) ((_Bool) var_0))))) : ((+(((/* implicit */int) ((((/* implicit */int) var_10)) < (-55863312)))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 67106816)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 19; i_15 += 1) 
                    {
                        arr_59 [i_3] [i_4] [i_4] [i_5] [(_Bool)1] &= var_1;
                        var_30 = ((/* implicit */int) ((1195204357) >= (((/* implicit */int) (_Bool)1))));
                        var_31 = ((var_1) <= (((((/* implicit */_Bool) -1)) ? (arr_54 [i_15] [(_Bool)1] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_13 [i_3])))));
                    }
                    var_32 *= ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_6)));
                }
            }
            arr_60 [17] [i_3] = ((/* implicit */int) var_0);
            arr_61 [(_Bool)1] |= ((/* implicit */_Bool) arr_51 [6] [6] [i_3] [(_Bool)0] [i_4]);
            var_33 = (-(((int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_22 [i_4] [i_3] [i_4] [i_4] [4] [i_4]))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_64 [i_3] = (_Bool)0;
            arr_65 [i_16] [i_3] [i_16] = max((0), (-65536));
            arr_66 [i_3] [i_3] = ((((/* implicit */_Bool) min((((int) var_12)), (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [8] [15]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)));
            var_34 = ((/* implicit */_Bool) min((var_34), ((_Bool)0)));
            arr_67 [i_3] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [(_Bool)1] [13] [i_16] [i_16])) && (((/* implicit */_Bool) arr_48 [i_16] [i_3] [i_3] [i_3]))))) : (((((/* implicit */_Bool) arr_48 [i_3] [i_3] [i_3] [i_16])) ? (((/* implicit */int) (_Bool)1)) : (arr_48 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1])))));
        }
    }
}
