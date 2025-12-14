/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97059
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 += ((/* implicit */long long int) (signed char)-11);
        var_15 = ((/* implicit */unsigned char) ((long long int) min((((((-5624412744376071540LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-1)) + (37))) - (36))))), (((/* implicit */long long int) ((((-1) + (2147483647))) << (((((-4053357639568921163LL) + (4053357639568921186LL))) - (23LL)))))))));
        var_16 -= ((/* implicit */_Bool) ((long long int) ((3) << (((8778913153024LL) - (8778913153016LL))))));
        var_17 &= ((/* implicit */signed char) ((((long long int) arr_1 [i_0] [i_0])) & (-8778913153027LL)));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_8 [i_2] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)31543)) ? (max((34359214080LL), (((/* implicit */long long int) (unsigned char)70)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 8778913153024LL))))));
                        var_19 = ((/* implicit */long long int) (short)31543);
                    }
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_17 [i_5] = ((/* implicit */short) ((var_3) || (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_14 [i_1] [i_5] [i_5]))) | ((+(((/* implicit */int) var_10)))))))));
            arr_18 [i_1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)32765)) ? (arr_14 [i_1] [1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [(_Bool)1] [(_Bool)1] [i_5]))))))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [(short)23])) : ((+(((/* implicit */int) (signed char)127))))));
        }
        arr_19 [i_1] &= ((long long int) (+(((/* implicit */int) ((short) arr_12 [(short)18] [i_1] [i_1] [i_1] [(_Bool)1])))));
        var_20 |= ((/* implicit */unsigned char) arr_0 [i_1]);
    }
    for (long long int i_6 = 2; i_6 < 9; i_6 += 4) 
    {
        var_21 |= ((/* implicit */long long int) arr_12 [i_6] [i_6] [i_6 + 2] [i_6] [i_6]);
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-31396), ((short)-26339)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6 - 1] [(unsigned char)16] [i_6 + 3]))) & (var_11))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7))))));
    }
    var_23 += ((/* implicit */short) ((long long int) ((((var_8) * (((/* implicit */long long int) ((/* implicit */int) (short)0))))) + (((/* implicit */long long int) 2147483647)))));
}
