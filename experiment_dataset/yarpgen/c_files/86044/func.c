/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86044
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_1] [i_1] = min((8807641988774412324LL), (((/* implicit */long long int) (unsigned char)203)));
                arr_5 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_19 = ((unsigned char) max((arr_8 [i_3]), (arr_8 [i_3])));
                            arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = max((((/* implicit */unsigned char) min((((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2])))), (((-2636346835182611814LL) < (-359892712440866055LL)))))), (max((arr_2 [i_1] [i_2 + 4]), (((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1] [(_Bool)1] [i_3]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */int) (unsigned char)209)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                arr_11 [i_1] [i_1] [i_1] = var_2;
            }
        } 
    } 
    var_21 = (_Bool)0;
    var_22 = ((_Bool) (+(var_16)));
}
