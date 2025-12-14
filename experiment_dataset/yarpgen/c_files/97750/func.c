/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97750
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
    var_10 = (((+((-(var_3))))) ^ (min((((((/* implicit */_Bool) 3799298134U)) ? (15U) : (var_8))), (var_8))));
    var_11 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) 4294967293U)) ? (var_2) : (2U))) : ((-(4294967292U)))))) ? (var_7) : (var_6));
    var_12 = ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((((/* implicit */_Bool) (~(16U)))) ? (4294967293U) : ((~(3014748233U))))) : (var_0));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0 - 3] [i_1] [i_0 - 3] = var_3;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_14 [23U] [23U] [i_2 + 2] = ((((/* implicit */_Bool) min((4294967291U), (3014748233U)))) ? (15U) : (arr_3 [i_3]));
                                arr_15 [i_0] [i_0 - 3] [i_0 - 2] [i_0] [i_0 - 2] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 136529119U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_2])))))) : ((-(var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (arr_1 [i_0])))) ? ((+(arr_0 [i_0 - 3]))) : (((((/* implicit */_Bool) 4244492482U)) ? (var_8) : (50474824U))))));
                                arr_16 [15U] [i_1] [i_1] = ((((/* implicit */_Bool) max((50474818U), (((unsigned int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((136529119U) <= (min((arr_3 [i_2 - 1]), (arr_12 [21U] [12U]))))))) : (arr_9 [11U] [i_1]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = max((var_1), (((((/* implicit */_Bool) var_8)) ? (var_9) : (((((/* implicit */_Bool) 15U)) ? (350956504U) : (var_4))))));
}
