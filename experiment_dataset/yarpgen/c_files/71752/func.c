/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71752
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
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
    var_16 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]);
                    var_17 |= ((/* implicit */unsigned char) arr_2 [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_13 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (max((max((3488477638U), (((/* implicit */unsigned int) (short)3406)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)3420))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-3381)) ? (arr_2 [i_0]) : (((/* implicit */int) var_10)))))))));
                    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_3] [(unsigned char)20] [(unsigned char)17]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */signed char) (_Bool)1);
        arr_18 [i_5] = ((/* implicit */unsigned int) arr_16 [i_5] [i_5]);
    }
}
