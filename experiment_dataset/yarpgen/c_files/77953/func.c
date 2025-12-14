/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77953
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (~((+(max((((/* implicit */unsigned int) var_5)), (arr_2 [i_1] [i_1]))))))))));
                    var_13 = ((/* implicit */int) (~(8388607U)));
                }
            } 
        } 
    } 
    var_14 = (~(4286578688U));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_10 [i_3] [i_3] = (~((+(1359055530U))));
        var_15 = ((/* implicit */int) (+(((unsigned int) var_1))));
        var_16 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_0 [i_3] [i_3])));
        var_17 = ((long long int) ((int) 8388608U));
        var_18 = ((/* implicit */unsigned int) (+((~(var_1)))));
    }
    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) max((-1206680087707708118LL), (3657282332964443489LL)))))));
        arr_13 [i_4] [i_4] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) var_9)) : (1206680087707708118LL)))) ? (max((var_3), (-1206680087707708118LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_4]) : (arr_12 [i_4] [i_4]))))));
    }
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_5]))) ? ((-(4286578688U))) : (max((var_4), (((/* implicit */unsigned int) arr_15 [i_5] [i_5]))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) 2147483647)), (536870911U)))) : (max((((long long int) 350660318U)), (((/* implicit */long long int) ((unsigned int) arr_1 [i_5])))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1206680087707708118LL), (((/* implicit */long long int) 2133636024U))))) ? (0U) : (((unsigned int) 963322657U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 4286578689U))))))) : (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) 0))))) ? (1719626753U) : (4294967295U)))));
    }
}
