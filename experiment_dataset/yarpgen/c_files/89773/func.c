/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89773
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
    var_12 = ((/* implicit */unsigned int) (-(var_11)));
    var_13 = ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (var_3)))) ? ((~(6207820063301858392ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_8)) + (31384)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) ((signed char) 1322309944U));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_7)))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_11 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_11 [i_1 - 3] [3] [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 1]))));
                        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                    }
                } 
            } 
            var_18 += ((/* implicit */short) ((12238924010407693223ULL) ^ (21ULL)));
            var_19 = (_Bool)0;
            var_20 = var_2;
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (arr_3 [i_0])));
            var_22 = arr_13 [17ULL];
        }
        for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            var_23 &= ((/* implicit */unsigned char) (~(arr_7 [i_5 - 2] [i_5 - 2] [(_Bool)1] [(_Bool)1])));
            var_24 = ((/* implicit */int) ((unsigned long long int) arr_11 [i_5 + 4] [i_5 + 4] [(short)8] [(unsigned char)19] [(unsigned short)3] [i_5 + 4]));
        }
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_16 [i_0] [i_0]) : (arr_16 [i_0] [i_0])));
        var_26 = ((/* implicit */unsigned short) arr_2 [i_0] [(unsigned char)18]);
    }
}
