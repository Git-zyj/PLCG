/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57238
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
    var_11 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_12 = var_10;
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) 1048572);
                            arr_15 [i_0] [i_0] [i_0] [i_3] = arr_12 [i_0] [i_1] [8] [i_3];
                        }
                    } 
                } 
                var_13 = min((min((((((/* implicit */_Bool) (unsigned char)242)) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */int) arr_1 [2])))), (((/* implicit */int) var_4)))), (-533901839));
                arr_16 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] = min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_4 [i_1] [i_0]))))) < (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) != (arr_6 [i_0] [8] [(unsigned char)4]))))))), (min((((((/* implicit */int) var_0)) ^ (arr_5 [i_0] [5] [7]))), (((758315657) | (1476655948))))));
            }
        } 
    } 
    var_14 += ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))));
}
