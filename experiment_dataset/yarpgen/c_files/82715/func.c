/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82715
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)246)), (arr_11 [i_1] [i_1] [i_2] [i_2 + 1])))), (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_1])), (max((var_2), (((/* implicit */unsigned long long int) var_3))))))));
                        arr_15 [i_3] [i_1] [i_2] [i_1 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */int) (unsigned char)0)), (var_0))), (((/* implicit */int) max(((signed char)-127), ((signed char)93))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (max((max((4427982099702678051ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((arr_6 [i_0 - 1] [4U]), (arr_6 [i_0 + 1] [(signed char)0]))))))));
    }
    for (unsigned char i_4 = 3; i_4 < 18; i_4 += 3) 
    {
        var_13 *= ((/* implicit */signed char) max((max((12329337801909553376ULL), (arr_17 [i_4 - 2] [i_4 + 1]))), (((/* implicit */unsigned long long int) max((var_3), (4294967295U))))));
        var_14 *= ((/* implicit */unsigned int) min((max((arr_17 [i_4] [i_4 - 3]), (((/* implicit */unsigned long long int) 4294967271U)))), (((/* implicit */unsigned long long int) max((arr_18 [i_4 - 3] [i_4 + 2]), (arr_18 [i_4 + 1] [i_4 - 2]))))));
        arr_20 [i_4] [i_4] = ((/* implicit */short) max((max((arr_16 [i_4 - 3] [i_4 - 2]), (((/* implicit */long long int) var_4)))), (max((((/* implicit */long long int) (unsigned short)20321)), (arr_16 [i_4] [i_4 - 1])))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        var_15 = ((/* implicit */short) 6U);
        var_16 *= 4294967242U;
    }
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (var_2)));
    var_18 = max((((/* implicit */unsigned char) var_7)), (var_4));
    var_19 ^= ((/* implicit */signed char) var_4);
}
