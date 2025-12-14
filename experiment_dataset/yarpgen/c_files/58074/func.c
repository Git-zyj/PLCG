/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58074
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (unsigned char)223))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 *= arr_0 [(_Bool)1] [i_0];
        arr_3 [i_0] = (unsigned char)255;
        var_16 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_1 [(unsigned char)1] [i_0])))) <= (((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)53))))));
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) % ((~(((/* implicit */int) arr_4 [i_1 - 1] [i_2]))))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((_Bool) (_Bool)1))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((_Bool) (unsigned char)64))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (unsigned char)152))))))));
                    var_22 *= ((/* implicit */unsigned char) (!(arr_6 [i_3 - 1] [i_1 - 1])));
                    var_23 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)81))));
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [(unsigned char)2] [(_Bool)1] [(_Bool)1] [i_1 - 1] [i_3])) ? (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_3] [i_3 - 1])) : (((/* implicit */int) arr_13 [(_Bool)1] [i_2] [i_1 - 1] [i_5] [(_Bool)1] [i_5])))))));
                    arr_18 [i_2] [(unsigned char)8] [i_3] [i_1] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                }
                arr_19 [(unsigned char)13] [(unsigned char)5] [i_3] [i_1 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_2]))));
            }
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                var_26 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_6] [i_1 - 1]))));
                var_27 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                var_28 *= ((/* implicit */unsigned char) (_Bool)1);
                var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)221))));
            }
            arr_23 [(_Bool)1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_1 - 1] [i_1 - 1] [i_2] [i_2])) + (((/* implicit */int) arr_20 [i_1] [(unsigned char)4] [i_2] [i_2]))));
            arr_24 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            arr_25 [(unsigned char)3] = arr_13 [(unsigned char)9] [i_2] [i_1] [i_1] [i_2] [i_2];
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_30 [(unsigned char)13] [(unsigned char)1] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_14 [(_Bool)1] [i_7])))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                arr_34 [i_8] = ((/* implicit */_Bool) max(((((~(((/* implicit */int) (_Bool)0)))) ^ ((~(((/* implicit */int) (unsigned char)18)))))), ((~(((/* implicit */int) arr_5 [i_1 - 1]))))));
                var_30 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) arr_17 [i_1 - 1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_17 [i_8 - 1] [i_7] [i_7])))) << (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_7])) : (((/* implicit */int) (unsigned char)191))))) ? (((/* implicit */int) ((_Bool) ((unsigned char) (unsigned char)3)))) : (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) arr_26 [(_Bool)1] [i_1 - 1] [i_1 - 1])) : ((-(((/* implicit */int) (unsigned char)38))))))));
                var_33 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)53))));
                var_34 *= arr_28 [i_1] [i_7] [i_1 - 1];
            }
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_1 - 1] [(_Bool)1] [(_Bool)1])) - (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1] [i_7])), (arr_35 [(_Bool)1]))))))) && (((_Bool) arr_26 [i_1 - 1] [(unsigned char)9] [i_7])))))));
            var_36 *= ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)1)), ((-(((/* implicit */int) arr_29 [i_1 - 1]))))));
        }
        var_37 = arr_21 [i_1 - 1];
        arr_38 [i_1] [i_1] = ((/* implicit */_Bool) (((-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1] [i_1]))));
        var_38 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_39 = ((/* implicit */_Bool) (unsigned char)119);
        arr_41 [i_10 - 1] = ((/* implicit */_Bool) ((arr_21 [i_10 - 1]) ? (((/* implicit */int) arr_28 [(_Bool)1] [i_10 - 1] [i_10 - 1])) : (((/* implicit */int) arr_13 [i_10 - 1] [i_10 - 1] [i_10] [(_Bool)1] [i_10 - 1] [i_10 - 1]))));
    }
}
