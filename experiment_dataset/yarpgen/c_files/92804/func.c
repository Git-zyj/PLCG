/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92804
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
    var_19 -= ((/* implicit */unsigned short) (-(var_6)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(arr_1 [i_0 + 1]))))));
        var_21 -= ((/* implicit */unsigned int) max(((+(max((((/* implicit */int) (signed char)120)), (-913292227))))), (((/* implicit */int) (!(arr_0 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((int) (short)32205));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) (unsigned char)239))))) ? (((/* implicit */int) max((arr_4 [3] [i_1] [i_2 + 2] [i_2 + 2]), (arr_4 [i_0] [i_1] [i_2 + 1] [i_2 + 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [(short)5] [i_2] [9LL])) < (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */int) ((unsigned short) max((((/* implicit */int) (short)11733)), (913292256)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_8 [i_3] [i_3]))))) ? ((((_Bool)1) ? (0ULL) : (arr_3 [i_3] [5U] [5U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3])))))))))));
        var_24 -= ((/* implicit */_Bool) (((+(-850956589))) % (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]))));
    }
    var_25 = var_13;
    var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22445)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (short)11733)))))));
}
