/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65290
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
    var_19 = ((/* implicit */_Bool) ((signed char) var_18));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_1)))));
                            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                        }
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */_Bool) max((min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) var_18)))), (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))));
            }
        } 
    } 
    var_22 = var_11;
    var_23 &= var_18;
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                arr_25 [i_4] [i_6] [i_5] = ((/* implicit */_Bool) min((((/* implicit */signed char) arr_19 [(signed char)7] [i_4] [i_6] [i_4])), (min((((/* implicit */signed char) var_12)), (arr_21 [i_6 - 1] [i_6] [(_Bool)1] [i_6] [i_6 - 1] [i_6 - 1])))));
                                var_24 &= var_13;
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */_Bool) arr_22 [(_Bool)1] [(signed char)11] [i_5] [i_5]);
                arr_26 [i_5] = ((/* implicit */_Bool) ((arr_17 [i_5] [i_4] [i_4]) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4])) % (((/* implicit */int) var_10))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_23 [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(signed char)5] [(signed char)1])), (arr_15 [i_4])))) : (((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_18)))))) : (((/* implicit */int) var_8))));
            }
        } 
    } 
}
