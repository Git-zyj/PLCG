/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88346
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
    var_11 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), ((!(((/* implicit */_Bool) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [(unsigned char)2] [(unsigned char)2] [i_3 + 1] [i_4] [i_4] [i_4]), (arr_9 [i_1] [i_3] [i_3 - 3] [i_3] [i_4] [i_4])))) ? (max((var_2), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned char)17] [i_1] [i_2] [(unsigned char)9] [i_4] [i_1]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_3] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [(_Bool)1] [i_3] [i_4])))))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_9 [i_4] [i_3] [8ULL] [i_2 + 1] [12] [i_0]))));
                                arr_11 [i_0] [i_1] [i_2] [(_Bool)1] [i_4] = 7236274333719756821ULL;
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
    var_17 -= ((/* implicit */_Bool) (((_Bool)0) ? (max((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_0))));
}
