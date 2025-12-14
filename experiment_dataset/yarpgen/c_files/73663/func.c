/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73663
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (var_12))))) ? ((-(max((((/* implicit */long long int) 644370343)), (4738481814683953961LL))))) : (((/* implicit */long long int) (~(max((644370334), (-644370344))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */int) max((((long long int) (+(((/* implicit */int) arr_1 [i_0]))))), ((~(-5534773180703539686LL)))));
        var_22 = ((/* implicit */short) ((max((((/* implicit */long long int) 4294967286U)), (-5534773180703539686LL))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), ((~(var_4))))) : (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) + (((/* implicit */int) max((var_0), (var_5)))))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_24 |= ((/* implicit */unsigned long long int) var_17);
            var_25 = ((((/* implicit */_Bool) min((min((((/* implicit */int) arr_3 [i_1 - 1] [i_0])), (var_15))), ((+(var_12)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (var_15))), (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))))) : (max((-5534773180703539707LL), (((/* implicit */long long int) 3416854552U)))));
        }
        var_26 |= ((/* implicit */int) (((_Bool)1) ? (1U) : (4294967286U)));
    }
    var_27 = ((/* implicit */int) (~(var_16)));
}
