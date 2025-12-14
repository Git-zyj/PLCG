/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76753
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_17 = ((((/* implicit */_Bool) (~(((var_11) >> (((arr_2 [0] [i_0]) - (756131086)))))))) ? (arr_2 [i_0] [i_0]) : ((~(((/* implicit */int) var_0)))));
        var_18 = min((((((/* implicit */_Bool) (~(var_4)))) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_11))))))), (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) max((var_0), ((_Bool)1)))))));
        var_19 = ((/* implicit */_Bool) (-(min(((-(arr_0 [i_0] [i_0]))), (arr_2 [i_0] [i_0 + 1])))));
        arr_3 [i_0] = ((/* implicit */int) var_16);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((arr_1 [i_1 + 1]) + (2147483647))) >> (((arr_1 [i_1 + 1]) + (985057869))))))));
        var_21 = ((((/* implicit */int) ((_Bool) var_16))) << ((((~(((/* implicit */int) (_Bool)1)))) + (30))));
        var_22 = ((/* implicit */int) var_13);
    }
    var_23 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 7; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_24 = (~(((/* implicit */int) ((((/* implicit */_Bool) ((arr_7 [(_Bool)1] [i_3]) - (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) arr_2 [i_3] [i_3]))))));
                var_25 *= ((_Bool) var_16);
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) -545147834))))) <= (min((((/* implicit */int) ((_Bool) var_3))), (var_14)))));
    var_27 = ((/* implicit */int) ((((((/* implicit */int) var_9)) <= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_12))) & (min((2140602703), (var_3))))))));
}
