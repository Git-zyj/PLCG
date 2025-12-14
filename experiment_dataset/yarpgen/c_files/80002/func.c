/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80002
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
    var_10 = ((/* implicit */short) (~(-1LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)32325))) < (4702850001057108278LL))) ? (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1LL) : (4610560118520545280LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))) : (arr_7 [(short)9])));
                    arr_8 [(short)12] [i_1 - 3] [i_2] [i_1] = ((long long int) (-(-8712550051875317149LL)));
                }
            } 
        } 
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-9279))) >= (9223372036854775807LL)))) : (((/* implicit */int) arr_3 [4LL] [i_0 - 1]))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 15; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */short) (((-(((/* implicit */int) var_9)))) <= (((/* implicit */int) arr_1 [i_5]))));
                                arr_17 [i_5] [i_3 - 1] = (~(arr_16 [i_0] [i_0] [7LL] [i_4 + 1] [i_5] [(short)15]));
                                var_14 &= ((/* implicit */short) (~(0LL)));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) 0LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                arr_23 [i_8] [i_8] = ((/* implicit */long long int) min((((/* implicit */short) ((arr_20 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1]) <= (((((/* implicit */_Bool) var_2)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))), (((short) ((-1LL) != (arr_20 [i_8] [i_7] [i_4 + 1] [i_3] [(short)1]))))));
                                arr_24 [i_8] [i_8] = ((/* implicit */short) 5824177305313383559LL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) var_7);
    }
    var_17 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) var_3)) ? (6242837337763641361LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), ((~(var_3)))))));
}
