/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58088
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_13))));
    var_21 = var_9;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] |= ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (short)18388))));
                        var_23 = ((/* implicit */signed char) 102366248101139660ULL);
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (short)-18388))));
                        arr_15 [i_4 - 1] [i_4] [i_4] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    arr_16 [i_0] = ((/* implicit */_Bool) -853396404);
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    arr_20 [i_0] [i_1] [i_5] = ((/* implicit */short) 853396404);
                    var_25 = ((/* implicit */signed char) (_Bool)0);
                    var_26 = ((/* implicit */unsigned int) min((var_26), (4051668326U)));
                }
                arr_21 [i_0] [i_0] [i_1 - 4] = ((/* implicit */unsigned short) (short)-26391);
            }
        } 
    } 
}
