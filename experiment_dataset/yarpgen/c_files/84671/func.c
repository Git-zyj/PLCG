/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84671
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_12 &= (unsigned short)62568;
                                var_13 += max(((+(arr_5 [i_0]))), (arr_9 [i_0] [i_1 + 1] [i_2] [i_3] [i_4]));
                                var_14 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1 - 3] [i_1 - 3] [i_1 - 4] [i_3 - 1]))) | (-3461037949787944546LL))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_1 - 1])), ((unsigned short)62568)))))));
                                arr_11 [i_0] [i_3] [i_2 - 2] [i_3 - 1] [i_4] = ((/* implicit */_Bool) (unsigned short)3968);
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */_Bool) ((((_Bool) ((unsigned short) arr_2 [i_0]))) ? ((+(((/* implicit */int) arr_0 [i_1 - 4])))) : (((/* implicit */int) var_3))));
                    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (+(arr_7 [i_2 - 2] [i_2] [i_1 - 2] [i_0])))))));
                    arr_12 [i_2] [i_1 - 1] [9LL] = ((_Bool) min((var_4), (var_3)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_1);
    var_18 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((var_9) || (((((/* implicit */int) var_6)) < (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_20 [i_5] = ((/* implicit */_Bool) var_0);
                var_19 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) % (8976841727976934929LL))))));
                var_20 = min((((/* implicit */long long int) arr_17 [i_5] [i_5] [i_5])), (max((6LL), (16LL))));
                var_21 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_19 [i_5] [i_6])))));
                var_22 = ((/* implicit */long long int) arr_8 [i_5] [i_5] [(_Bool)1] [i_6]);
            }
        } 
    } 
}
