/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88620
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(short)5] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) (short)15492))))))))));
                var_11 = max((((/* implicit */int) (!(((/* implicit */_Bool) (short)29936))))), (((int) arr_4 [i_1 + 3] [i_1] [i_0])));
                arr_6 [i_0] [9] = ((/* implicit */short) max((((arr_2 [i_1 + 3] [i_1 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) : (arr_4 [i_0] [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) arr_7 [i_2] [i_3 + 2]);
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_7 [i_2] [i_2]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 7; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (short i_6 = 4; i_6 < 9; i_6 += 2) 
            {
                {
                    arr_19 [i_4 - 2] [i_4 - 2] [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) 520093696LL))));
                    /* LoopSeq 2 */
                    for (short i_7 = 1; i_7 < 7; i_7 += 3) 
                    {
                        arr_24 [9LL] = ((/* implicit */long long int) ((short) ((long long int) arr_16 [i_4 - 1])));
                        var_14 = ((/* implicit */short) arr_2 [i_6] [i_4]);
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        arr_28 [i_4] [i_5] [i_6] [(short)1] = ((/* implicit */int) ((arr_11 [i_4 - 2] [i_4 + 2]) & (arr_11 [i_4 + 3] [i_4 - 2])));
                        arr_29 [i_5] [i_6 - 1] = ((/* implicit */long long int) arr_13 [i_8]);
                    }
                    var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((short) arr_8 [i_5] [i_4 + 2])))))));
                }
            } 
        } 
    } 
}
