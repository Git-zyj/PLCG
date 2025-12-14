/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69028
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6))) >> ((((~(2881282555633882446LL))) + (2881282555633882485LL))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (((((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))) / (arr_0 [i_1]))) << (((((((/* implicit */_Bool) (~(-111062386)))) ? (((/* implicit */int) (unsigned short)15496)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))))) - (15468)))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) (-(-947366385)));
            arr_11 [i_0] = (~(((/* implicit */int) ((min((-947366381), (((/* implicit */int) arr_2 [i_0])))) == (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_3 [i_0] [i_2]))))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_0 - 1]))));
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
            var_21 = ((/* implicit */int) arr_8 [(signed char)6]);
        }
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(var_1))))));
        arr_16 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
    }
    var_23 = var_2;
}
