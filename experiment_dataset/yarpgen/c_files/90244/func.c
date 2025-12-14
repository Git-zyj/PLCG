/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90244
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((unsigned int) (short)12494)) - (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-12516)) : (((/* implicit */int) (short)12511)))))))), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        var_21 |= ((/* implicit */short) var_15);
                    }
                    for (short i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) (-(arr_7 [(_Bool)1] [i_4 - 1] [i_0 - 2] [i_0 - 2])));
                        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) arr_0 [i_0 - 1] [i_0 + 2]))), (max((arr_0 [i_0 - 1] [i_0 + 2]), (arr_0 [i_0 - 1] [i_0 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 13; i_5 += 3) 
                    {
                        arr_15 [6LL] [6LL] [6LL] [6LL] = ((/* implicit */unsigned long long int) (((+(arr_3 [i_0 + 2]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)0]))))))));
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_3)))))));
                    }
                    var_25 = (short)12494;
                    var_26 -= ((/* implicit */short) arr_13 [i_0 - 2] [i_1] [i_0 - 2] [i_2]);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) var_8);
    var_28 |= ((/* implicit */signed char) (-((((~(var_7))) - (var_8)))));
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((_Bool) var_0)))) + (((/* implicit */int) var_12))));
        var_29 *= ((/* implicit */_Bool) var_6);
    }
}
