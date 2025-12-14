/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82803
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
    var_12 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))) | (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4615301987168190443ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_1] [i_1] = arr_7 [i_0] [i_0] [i_0];
                            arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3] [(_Bool)1] [i_3]))))), (arr_7 [i_0] [i_0] [(_Bool)1])));
                        }
                    } 
                } 
                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) * (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (7636540482352123415ULL)))));
                var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
}
