/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98915
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
    var_17 = (+(var_14));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) arr_2 [i_0 - 2]))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1417915338U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (arr_1 [i_0] [i_0])))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0] [i_0 + 1])))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1417915337U)) ? (1656562184U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))))), (max((((/* implicit */unsigned int) arr_0 [i_0 - 2])), (arr_1 [i_0 - 1] [i_0 + 1])))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1656562158U)) ? (1934073141U) : (((/* implicit */unsigned int) 439110173))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) 131071U);
        var_20 = (-(11U));
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_17 [i_4] [i_2] [i_2] = ((/* implicit */long long int) max((max((2638405112U), (((/* implicit */unsigned int) arr_6 [i_2 - 1])))), (((/* implicit */unsigned int) max((16776704), (((/* implicit */int) (unsigned char)81)))))));
                    var_21 = ((/* implicit */int) arr_8 [i_2] [i_2]);
                }
            } 
        } 
    } 
}
