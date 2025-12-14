/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86234
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
    var_12 |= min((var_10), (var_5));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (!(var_4)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = (_Bool)1;
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] |= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            arr_15 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [i_3] [i_4] = ((_Bool) (!(arr_13 [(_Bool)1] [i_1] [i_2 - 1] [i_3] [i_4])));
                            arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = (_Bool)1;
                            arr_17 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_1 [i_0])))) - (((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = arr_5 [(_Bool)1] [i_2] [i_1] [(_Bool)1];
                            arr_21 [i_0] [i_1] [i_2 - 1] [i_3] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_0))))));
                            var_15 -= arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((/* implicit */int) var_6))));
                        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((var_3) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        arr_22 [i_0] [i_0] = ((/* implicit */_Bool) ((((_Bool) ((_Bool) (_Bool)1))) ? (min((((var_9) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) var_2))))) : (((/* implicit */int) (!(var_8))))));
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */_Bool) max(((-((-(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_26 [i_6] [i_6] = (_Bool)1;
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])) * (((/* implicit */int) arr_5 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (arr_4 [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1])));
                        arr_34 [i_7] [i_9] [(_Bool)1] [i_9] = ((/* implicit */_Bool) ((arr_10 [(_Bool)1] [(_Bool)1] [i_8 - 1] [i_6]) ? (((/* implicit */int) arr_10 [i_8 - 1] [i_8 - 1] [i_8 - 1] [(_Bool)0])) : (((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_32 [i_6] [i_6] [(_Bool)1] [(_Bool)1]))))));
        arr_35 [i_6] = (_Bool)1;
        var_22 *= ((/* implicit */_Bool) ((arr_2 [i_6] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_6] [i_6]))));
    }
    var_23 = ((/* implicit */_Bool) (+(((((/* implicit */int) max((var_8), (var_7)))) >> ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))))));
}
