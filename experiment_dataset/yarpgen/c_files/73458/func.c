/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73458
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 = min((((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) var_5)), (var_7))))), (arr_2 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((int) arr_1 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */int) arr_6 [i_1] [i_1]);
        var_13 = (-(((/* implicit */int) max((((/* implicit */short) arr_5 [i_1])), (((short) arr_4 [i_1] [i_1]))))));
        var_14 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
    }
    var_15 &= ((/* implicit */_Bool) min((((unsigned long long int) -3272453426459432820LL)), (((/* implicit */unsigned long long int) (-(var_5))))));
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    for (int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        var_17 = ((/* implicit */long long int) arr_8 [(unsigned short)9]);
        var_18 = ((/* implicit */long long int) var_4);
        var_19 = ((/* implicit */unsigned int) max((arr_7 [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_2 + 1]))));
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((short) ((signed char) arr_8 [i_3])));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (short i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) var_1);
                        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) 2644148512893487060ULL))), (((int) arr_18 [i_5 + 2] [i_5] [i_5] [i_5 + 2] [(short)8] [i_5 + 1]))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */int) (~(-8887859962796566438LL)));
                        var_24 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_3] [(unsigned char)9] [i_3] [i_3] [i_3] [i_3]))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) max((((int) arr_18 [i_3] [5LL] [i_3] [i_8] [i_3] [i_5 + 1])), (((/* implicit */int) arr_18 [i_3] [7LL] [i_5 + 1] [i_3] [i_3] [i_5 + 1]))));
                        arr_28 [i_5] = ((/* implicit */unsigned short) var_8);
                        var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (-(arr_27 [i_4] [i_5] [i_5 + 2]))));
                        var_27 ^= ((/* implicit */_Bool) min((arr_24 [i_5 - 1] [i_4] [i_4] [i_5 + 1]), (((unsigned char) max((((/* implicit */unsigned int) var_6)), (var_7))))));
                        var_28 = ((/* implicit */unsigned int) ((unsigned char) ((short) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3])));
                    }
                    arr_29 [i_3] [i_5] = ((/* implicit */int) ((unsigned int) ((int) var_8)));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) var_5);
}
