/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60897
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) || (((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_18 = ((int) ((-1289798346) + (arr_2 [i_0])));
        var_19 = ((((/* implicit */_Bool) var_4)) ? (((int) arr_1 [i_0])) : ((-(-1))));
        var_20 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((arr_0 [i_0]) | (-252304388))) : (arr_0 [i_0]))) : (arr_2 [i_0]));
        var_21 &= (-(((/* implicit */int) (((-(-967212022))) >= (arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_22 = (~((-(arr_5 [i_1 + 2]))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) (((-(arr_14 [i_1] [i_5] [i_3] [i_1 + 2] [i_5] [i_3]))) > (arr_10 [i_3] [i_2] [i_5])));
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_5] [i_2] [i_2] = (-2147483647 - 1);
                            var_24 = ((((/* implicit */_Bool) (+(((int) arr_16 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (arr_5 [i_1 + 1]) : (max((((((/* implicit */_Bool) var_5)) ? (var_14) : (var_12))), (arr_16 [i_5] [i_5] [i_5] [i_5] [i_3] [i_1 - 1]))));
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_2] = arr_12 [i_1] [i_3] [i_4] [i_5];
                        }
                    } 
                } 
            } 
            arr_19 [i_2] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 + 1]))))));
            arr_20 [i_1] [i_2] = ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? ((+(min((arr_5 [i_2]), (var_7))))) : (arr_9 [i_2] [i_2]));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                arr_25 [i_2] [i_2] = ((int) ((((/* implicit */int) ((1073741823) <= (var_17)))) * ((-(arr_21 [i_1 + 2] [i_2] [i_6])))));
                arr_26 [i_1 + 2] [i_2] [i_6] [i_6] = min((((/* implicit */int) ((arr_9 [i_2] [i_1 - 2]) >= (((/* implicit */int) (!(((/* implicit */_Bool) 1715148970)))))))), (var_6));
                arr_27 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_1 + 1] [i_1 - 2])) ? ((-(arr_5 [i_1]))) : (arr_6 [i_1] [i_6]))))));
            }
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 967212006)) || (((/* implicit */_Bool) (~(min((arr_21 [i_1] [i_2] [i_1]), (arr_7 [i_1 + 1] [i_2]))))))));
        }
        for (int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
        {
            arr_30 [i_1] [i_1] [i_7] = (~(max((max((7), (arr_23 [i_1] [i_1] [i_7]))), (max((arr_11 [i_1 - 2] [i_7] [i_1]), (879065926))))));
            var_26 = arr_9 [i_1] [i_7];
        }
        for (int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
        {
            arr_35 [i_8] [i_8] [i_8] = ((((-3) + (2147483647))) >> (((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_8])) ? (arr_6 [i_1 + 1] [i_8]) : (arr_6 [i_1 - 1] [i_8]))) + (655857688))));
            arr_36 [i_1] [i_8] [i_8] = arr_11 [i_1] [i_8] [i_8];
            var_27 |= (-2147483647 - 1);
            var_28 = arr_34 [i_1 - 2];
        }
        arr_37 [i_1] [i_1 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_1] [i_1 + 1]) : (arr_9 [i_1] [i_1 + 1])))) ? (var_1) : (max((arr_33 [i_1] [i_1]), (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (arr_5 [i_1]) : ((-2147483647 - 1)))))));
    }
    for (int i_9 = 2; i_9 < 17; i_9 += 4) /* same iter space */
    {
        arr_40 [i_9] [i_9] = (+((-(arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
        arr_41 [i_9 - 1] = ((int) arr_28 [i_9 + 1]);
    }
    var_29 = ((/* implicit */int) max((var_29), (min((var_8), (2147483647)))));
    var_30 = ((((/* implicit */_Bool) 1610612736)) ? (7) : (var_14));
    var_31 = ((((/* implicit */_Bool) ((int) var_15))) ? ((+(var_2))) : (var_12));
}
