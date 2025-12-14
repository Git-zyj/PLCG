/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85212
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
    var_15 = var_4;
    var_16 = var_4;
    var_17 *= var_12;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max((((arr_3 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_3 [(_Bool)1] [i_1])))), ((-(((/* implicit */int) (_Bool)1))))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((((((arr_2 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) * (((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) arr_0 [(_Bool)1])))))) == (min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_0 [(_Bool)1]))))), ((~(((/* implicit */int) (_Bool)1))))))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_3 [(_Bool)1] [i_1]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (!(arr_1 [i_0] [i_0]))))))) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((arr_3 [i_1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0])))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((((var_4) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2])) : (((/* implicit */int) arr_6 [i_2])))) > (((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_6 [i_2])))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_7 [i_2] [(_Bool)1])))) : (((/* implicit */int) ((_Bool) (_Bool)1))))));
        var_22 ^= ((/* implicit */_Bool) ((((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) (!(var_4)))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : ((((!(arr_6 [(_Bool)1]))) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 1])) : (((/* implicit */int) (!(arr_7 [i_2] [i_2]))))))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                arr_13 [(_Bool)1] |= ((/* implicit */_Bool) ((((min((arr_7 [i_2 - 1] [i_2 - 1]), (arr_12 [i_2] [i_2] [i_4]))) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_3])) : (((/* implicit */int) (!((_Bool)1)))))) % (((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) ((arr_9 [i_4]) && (var_11)))) : ((((_Bool)0) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) arr_7 [i_3] [i_3]))))))));
                var_23 = arr_11 [i_2] [i_2] [i_2] [i_2];
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_24 = ((((/* implicit */int) max((arr_16 [i_2 - 1] [i_2 - 1] [i_2] [i_6]), (max(((_Bool)1), ((_Bool)0)))))) != (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_7 [i_6] [i_6]))) > (((/* implicit */int) var_0))))));
                            var_25 |= ((_Bool) (~(((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
            }
            var_27 = ((/* implicit */_Bool) (-((~(((/* implicit */int) min((arr_19 [i_2] [i_2] [i_2] [i_2]), ((_Bool)1))))))));
            var_28 -= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_20 [i_2 - 1] [i_2 - 1] [(_Bool)1]), (arr_20 [i_2 - 1] [i_2 - 1] [(_Bool)1])))) ^ (((arr_12 [i_2] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2 - 1]))))));
            var_29 ^= ((((((arr_12 [(_Bool)1] [i_3] [i_2 - 1]) ? (((/* implicit */int) arr_18 [i_2] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_3])))) * (((arr_11 [(_Bool)1] [i_2 - 1] [i_2] [i_3]) ? (((/* implicit */int) arr_23 [(_Bool)1] [(_Bool)1] [i_3])) : (((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [i_2 - 1])))))) > (((/* implicit */int) arr_14 [i_2] [(_Bool)1])));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_30 = (((~((~(((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) max((arr_10 [i_2] [i_2]), (max(((_Bool)1), ((_Bool)1)))))));
            var_31 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_32 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) + (((/* implicit */int) arr_24 [(_Bool)1] [i_8]))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_11] [i_10] [i_2])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) arr_21 [i_2] [i_9]))) : (((/* implicit */int) ((_Bool) arr_27 [i_11])))));
                            var_34 = var_6;
                            arr_34 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] [i_9] = ((arr_20 [i_2 - 1] [i_2 - 1] [i_2]) && (arr_8 [i_2] [i_2 - 1]));
                            var_35 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_20 [i_2] [i_2 - 1] [i_2]))));
                            arr_35 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [(_Bool)1] = ((((_Bool) arr_31 [i_2] [(_Bool)1] [(_Bool)1] [i_10] [i_11])) || (((/* implicit */_Bool) ((arr_12 [i_2] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) arr_32 [(_Bool)1] [i_8] [i_8] [(_Bool)1] [i_8] [i_8])) : (((/* implicit */int) arr_15 [i_8] [i_8] [i_2] [i_10]))))));
                        }
                    } 
                } 
                arr_36 [i_2] [i_2] [i_2] [i_2] = arr_9 [(_Bool)1];
                var_36 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 - 1])) * (((/* implicit */int) (!((_Bool)1))))));
            }
            /* vectorizable */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_37 ^= ((/* implicit */_Bool) (((!(arr_15 [i_2] [i_8] [(_Bool)1] [i_12]))) ? (((/* implicit */int) arr_16 [i_8] [i_8] [(_Bool)1] [i_8])) : (((((/* implicit */int) var_12)) >> (((/* implicit */int) (_Bool)1))))));
                arr_40 [i_2] [i_2] [i_2] = var_11;
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_8] [i_8] [i_12] [i_8])) : ((-(((/* implicit */int) arr_20 [i_2] [i_8] [i_2]))))));
            }
        }
    }
}
