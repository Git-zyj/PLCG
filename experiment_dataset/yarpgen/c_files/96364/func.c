/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96364
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
    var_12 = ((((var_5) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_2)))))) ? ((~(max((-1050604811455384097LL), (-326502103547818421LL))))) : (((/* implicit */long long int) max((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((long long int) min(((+(326502103547818420LL))), (((/* implicit */long long int) min((((/* implicit */signed char) var_5)), (arr_3 [i_1])))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))) ^ (min((-326502103547818421LL), (2422651201728214024LL)))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-1)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        for (signed char i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                    {
                        arr_18 [i_2] [(_Bool)1] [i_4] [i_4 + 2] [i_4 + 2] = ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_2] [i_3 - 1])), (var_0)))), (min((arr_10 [i_5 + 2]), (arr_10 [i_5 + 1])))));
                        var_15 = ((/* implicit */int) var_4);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (unsigned char)255);
                                arr_24 [i_2] [i_2] [i_3 + 1] [i_4] [i_6] [i_6] [i_7] = (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
