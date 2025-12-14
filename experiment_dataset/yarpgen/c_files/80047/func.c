/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80047
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((127U) ^ (148U)))) ? (1947119321U) : (((4294967281U) & (min((((/* implicit */unsigned int) (_Bool)1)), (arr_4 [i_0] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 4294967146U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6))) : (min((max((((/* implicit */unsigned int) arr_5 [4U] [i_1])), (arr_0 [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (127U)))))));
                            var_15 ^= ((((/* implicit */_Bool) 4294967150U)) ? (4294967168U) : (3997956637U));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = (!(((/* implicit */_Bool) ((arr_17 [i_0] [8U] [i_1] [i_4] [(_Bool)1] [i_1] [8U]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_17 &= ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) | (((/* implicit */int) ((var_5) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((arr_4 [i_0] [i_0] [i_0]) == (arr_4 [i_0] [i_0] [i_4])));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_3 [i_4])))));
                    arr_20 [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((var_0) ? (((var_0) ? ((~(1756731290U))) : ((~(4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(172661473U)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_7))))))))));
    var_21 = ((/* implicit */unsigned int) var_0);
}
