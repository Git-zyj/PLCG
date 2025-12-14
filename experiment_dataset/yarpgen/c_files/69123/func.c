/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69123
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
    var_11 ^= ((/* implicit */_Bool) (~(max((((/* implicit */int) max((var_4), (var_4)))), (((var_7) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))));
    var_12 = ((/* implicit */_Bool) max((max((((/* implicit */int) var_8)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))), (max(((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_6)))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_0 [i_1])) : ((((-(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) var_5))))));
            arr_6 [i_1] = arr_1 [i_1 + 1];
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_0] [(_Bool)1] = (_Bool)1;
                var_14 -= ((_Bool) (_Bool)0);
                arr_13 [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((((arr_8 [i_3] [i_2] [i_0]) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) max((var_3), (var_9)))))) / (((/* implicit */int) (_Bool)1))));
                var_15 -= var_7;
                arr_14 [(_Bool)1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_11 [i_3] [i_2] [i_2] [i_0]))) : (((/* implicit */int) max((arr_11 [i_3] [i_2] [i_3] [i_3]), (var_9))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_16 -= max(((_Bool)0), ((_Bool)1));
                    var_17 += ((/* implicit */_Bool) ((((((/* implicit */int) ((var_4) && (var_5)))) != (((/* implicit */int) arr_16 [i_5] [(_Bool)1] [i_2] [i_0])))) ? (((/* implicit */int) max((max((arr_1 [i_4]), ((_Bool)1))), (max((var_2), ((_Bool)0)))))) : (((/* implicit */int) max((var_8), ((_Bool)1))))));
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_2] [i_2])) | (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_0 [i_5]))));
                    var_19 = ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2] [(_Bool)1] [i_5])) < (((/* implicit */int) var_6))))) == (((/* implicit */int) max((var_3), (arr_16 [i_5] [i_4] [i_2] [i_0])))));
                    arr_21 [i_5] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))));
                }
                var_20 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_19 [i_0] [i_4] [i_4] [i_0] [i_4]))), (((((_Bool) (_Bool)0)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(var_0))))))));
                var_21 = max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) && (max(((_Bool)1), ((_Bool)1))))), (((((/* implicit */int) var_0)) < (((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [i_4])))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_25 [i_0] = (_Bool)0;
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((((/* implicit */int) var_1)) << (((/* implicit */int) max((arr_9 [i_2]), (var_6)))))), (((/* implicit */int) var_7)))))));
                var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) max((((_Bool) (_Bool)0)), (arr_23 [i_6] [i_0])))) * ((+(((((/* implicit */int) var_6)) - (((/* implicit */int) var_2))))))));
            }
            var_24 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))));
        }
        arr_26 [i_0] = var_2;
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0] [i_7]))))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~((-(((/* implicit */int) arr_31 [i_0] [i_7] [i_0] [i_8])))))))));
                var_26 = ((/* implicit */_Bool) min((var_26), (arr_11 [i_0] [i_0] [i_0] [i_8])));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_31 [i_0] [i_7] [i_9] [i_9])) : ((-(((/* implicit */int) var_9))))));
                var_28 = var_9;
            }
            var_29 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0]))));
        }
    }
    var_30 = max(((_Bool)1), ((_Bool)1));
}
