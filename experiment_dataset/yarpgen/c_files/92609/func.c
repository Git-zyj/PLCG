/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92609
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
    var_16 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)511)), (3498703205U)))) ? ((+(33521664U))) : (min((131071U), (((/* implicit */unsigned int) (signed char)124)))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0]))))) ? (max((max((var_14), (((/* implicit */unsigned int) (signed char)1)))), (((/* implicit */unsigned int) ((unsigned short) 131071U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (3190389051U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_0 [i_0])) ^ (514304089)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)6784), (((/* implicit */unsigned short) (signed char)53))))), ((-(arr_1 [i_0] [i_0])))))) : (min((min((411888199U), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) min((2147483630), (((/* implicit */int) (_Bool)1)))))))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) var_11)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) 1819315393U))), (arr_0 [i_0]))))) : (16369310256062945977ULL));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_2 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1104578217U))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_8))));
                }
            } 
        } 
    }
}
