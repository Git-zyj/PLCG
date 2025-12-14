/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7243
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
    var_11 = ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) var_6)), ((~(var_9))))) : (var_9));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) var_8)) << (((max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) - (428178717840744789LL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((unsigned int) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0 + 2] [i_0] = ((/* implicit */int) var_9);
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (8388607U)));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 549755813887ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_0] [i_2] [i_2] = arr_4 [i_0] [i_2 - 1];
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(var_9))))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                {
                    arr_18 [i_5 + 1] [i_4 - 1] [i_5 + 1] [i_5 - 1] = ((/* implicit */_Bool) max((min((0), (-1721306200))), (((/* implicit */int) arr_16 [i_5] [i_3 - 2] [i_3 - 2]))));
                    var_14 = ((/* implicit */short) arr_14 [(_Bool)1]);
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_5 - 1])))))));
                    arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_5 + 1] = ((/* implicit */signed char) min((-2172013350067104234LL), (((/* implicit */long long int) ((signed char) arr_13 [i_3 - 1])))));
                    arr_20 [i_3] [i_5 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3600)) << (((3380078099U) - (3380078084U)))));
                }
            } 
        } 
    } 
}
