/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87404
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? (var_4) : (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)89)), (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 += ((/* implicit */short) (~(arr_12 [(_Bool)1] [i_0] [i_1] [i_1] [i_2] [i_3])));
                            var_20 = ((/* implicit */signed char) arr_11 [(short)4] [(unsigned char)9] [3] [i_1] [7] [i_0]);
                            arr_13 [i_0] [i_2] [(signed char)3] = ((/* implicit */_Bool) (short)-15780);
                        }
                    } 
                } 
                var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
            }
        } 
    } 
}
