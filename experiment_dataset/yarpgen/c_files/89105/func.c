/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89105
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
    var_15 = var_14;
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_5))));
    var_17 += ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 -= ((/* implicit */unsigned short) (+(117440512U)));
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        var_19 = ((/* implicit */short) 4294967279U);
        arr_3 [i_0] = (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)4]))) - (var_3))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_5 [i_1] [i_2])))) ? (42U) : (var_11)));
            var_20 -= ((/* implicit */unsigned int) (unsigned short)12545);
        }
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                arr_16 [i_1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned int) var_13);
                var_21 = ((/* implicit */unsigned int) min((var_21), (max(((+(10U))), (((/* implicit */unsigned int) (short)32752))))));
                var_22 *= (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 3]))) * (var_11))));
            }
            var_23 &= arr_12 [(short)2];
        }
        var_24 = ((/* implicit */short) 1977689587U);
        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_5 [i_1] [i_1]) <= (arr_5 [i_1] [i_1]))))));
    }
    var_26 *= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) var_12))))))))) ^ (max((((/* implicit */unsigned int) var_1)), (var_3))));
}
