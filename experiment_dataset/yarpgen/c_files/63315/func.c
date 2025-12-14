/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63315
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((/* implicit */int) var_0))));
            var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */int) arr_1 [i_1])) < (((/* implicit */int) arr_1 [i_0]))))));
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_3 [i_0])))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 += arr_1 [i_0];
            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >> (((/* implicit */int) var_2))))));
            var_18 -= arr_6 [i_0];
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))), ((+(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))))));
                var_19 = ((((/* implicit */int) max((arr_12 [i_0] [i_2] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0])))) > (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_0)))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) max((arr_9 [(_Bool)1] [i_0] [(_Bool)1]), (var_0)))) * (((/* implicit */int) ((((/* implicit */int) arr_9 [(_Bool)1] [i_0] [(_Bool)1])) > (((/* implicit */int) arr_9 [(_Bool)1] [i_0] [(_Bool)1]))))))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_21 += ((/* implicit */_Bool) (+(((/* implicit */int) min((var_11), (var_10))))));
                var_22 &= arr_17 [(_Bool)1] [i_0] [i_0] [(_Bool)1];
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((~(((/* implicit */int) arr_5 [(_Bool)1])))) % (max(((~(((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))))));
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = arr_13 [i_0] [i_0] [i_0] [i_0];
            var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_5])) ^ (((/* implicit */int) arr_3 [i_0]))));
            var_26 += ((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_2))));
            var_27 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_5])) ^ (((/* implicit */int) arr_18 [(_Bool)0] [i_5]))));
        }
        var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_0] [i_0])) & (((((/* implicit */int) arr_6 [i_0])) % (((/* implicit */int) arr_2 [i_0])))))) << (((min(((+(((/* implicit */int) var_7)))), (((((/* implicit */int) var_6)) - (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))) + (30)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_29 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0]))));
            var_30 = arr_17 [i_0] [i_0] [i_0] [i_0];
        }
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
        var_32 |= min((min((var_11), (arr_15 [(_Bool)1] [(_Bool)1]))), (min((arr_21 [i_0] [i_0]), (arr_21 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_7]))));
        var_34 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_7])) - (((/* implicit */int) arr_24 [i_7]))));
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((var_2) || (var_0))))));
    var_37 = ((/* implicit */_Bool) max((var_37), (var_5)));
    var_38 |= ((/* implicit */_Bool) max((((((((/* implicit */int) var_4)) << (((/* implicit */int) var_0)))) - (((/* implicit */int) var_6)))), (((/* implicit */int) max((max((var_0), (var_2))), (var_1))))));
}
