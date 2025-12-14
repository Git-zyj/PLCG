/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59179
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_8);
                                var_16 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((675559805U) & (var_3)))) ? (1567663469U) : (var_10))) : ((((~(var_14))) | (min((var_12), (1801652584U))))));
                                var_17 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 3]))) - (4294967295U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [(unsigned char)16] [i_0 + 2] [i_0 + 1] [i_0 - 1])))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((518982595U) <= (var_8)))), ((-(var_14)))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            {
                                arr_22 [i_7] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)123)) | (((/* implicit */int) var_4)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [20U] [i_0] [2U])))))))) < (((var_12) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_5] [i_6]))) - (3775984696U)))))));
                                arr_23 [i_5] [i_5] = ((((/* implicit */_Bool) (unsigned char)112)) ? (max((((((/* implicit */_Bool) var_0)) ? (arr_5 [i_7]) : (518982603U))), (arr_1 [(unsigned char)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_13))))) : (var_14)))) ? (max((((unsigned int) 518982600U)), (min((3775984707U), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) == ((~(var_8)))))))));
}
