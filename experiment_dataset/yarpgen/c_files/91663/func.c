/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91663
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])), ((((_Bool)1) ? (((/* implicit */int) (short)-11243)) : (((/* implicit */int) (_Bool)1))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), (arr_0 [i_0 - 1] [i_0])))) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) var_7))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                    arr_11 [i_1] = ((/* implicit */short) 0);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (signed char)34)))) : (((/* implicit */int) arr_6 [3] [i_1]))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (short)9260))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20751)) ? (arr_5 [i_1]) : (((/* implicit */long long int) 3083638699U))))) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (arr_7 [i_4 + 3] [i_4 + 3] [i_1])));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -787972141)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_4 + 3])) : (((/* implicit */int) var_8)))))));
        }
    }
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_2)));
}
