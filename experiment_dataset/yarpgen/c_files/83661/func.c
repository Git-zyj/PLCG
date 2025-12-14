/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83661
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
    var_11 = ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [(unsigned char)7] = ((/* implicit */signed char) (-(((long long int) min((var_8), (((/* implicit */unsigned int) var_2)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned short) ((unsigned int) arr_0 [i_0 - 1])));
            arr_6 [i_0 + 1] [i_0 + 1] = (~(((int) arr_0 [i_0 - 1])));
            var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_8 [i_3] [i_2] [i_0])), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_3 [i_0] [i_2] [(short)6]))))) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))))));
                    var_14 = ((/* implicit */unsigned int) ((signed char) min((0U), (3900151525U))));
                    var_15 += ((/* implicit */unsigned int) arr_4 [i_0]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)31549)) : ((+(((/* implicit */int) arr_9 [i_0] [i_0 + 1] [(signed char)18]))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_18 [(short)14] [2U] [i_5] = ((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_4] [i_5 - 1]);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((var_4) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_3)))))))))));
}
