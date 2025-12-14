/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78763
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
    var_14 = min((1013012500U), (((/* implicit */unsigned int) (unsigned short)20175)));
    var_15 = (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : ((-(2001165059U))))));
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)20175))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_8 [i_1] [i_1] [i_1] = var_1;
                var_18 = ((/* implicit */unsigned int) min((var_18), ((-((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (var_3)))))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_7);
            }
        }
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) / (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [4U] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)20191)) ? (3571469604U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) : ((-(var_11)))))) ? (((((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)8] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4102292394U))) << ((((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) + (45241))))) : (((((/* implicit */_Bool) 1486398879U)) ? (var_12) : (192674901U))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (min((((((/* implicit */_Bool) 2445864739U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (4102292409U))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (3907000375U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0])))))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)65530)), (min((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_0]))), (max((var_13), (4294967295U)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_15 [i_3] [i_3] = arr_14 [i_3];
        var_21 = ((/* implicit */unsigned int) var_9);
    }
    var_22 = var_8;
}
