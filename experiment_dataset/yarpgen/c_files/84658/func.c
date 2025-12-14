/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84658
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
    var_14 = ((/* implicit */unsigned short) (_Bool)1);
    var_15 = ((/* implicit */signed char) var_13);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) -387644146)) ? (((/* implicit */int) arr_0 [i_1 + 2] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_0 - 1])))) + (2147483647))) << (((((((-498741298) / (((/* implicit */int) (_Bool)1)))) + (498741301))) - (3)))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (!((_Bool)1)));
            var_16 = min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_7))), (((/* implicit */int) arr_2 [i_0] [i_1 + 2] [i_0])));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1 + 1] [i_0] = (+((+(((/* implicit */int) (unsigned char)238)))));
                        arr_14 [i_0 - 1] [i_0 - 1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24379)) != (260407134)));
                        var_17 += ((/* implicit */signed char) var_3);
                        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_0 [i_1 - 1] [i_3 - 1]), (arr_0 [i_1] [i_0 - 1])))), (((arr_5 [i_1 + 2]) ? (((/* implicit */int) (unsigned char)92)) : (488487033)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_19 ^= ((/* implicit */int) ((1263451315) <= (((/* implicit */int) (signed char)-29))));
                arr_17 [i_0] [i_1 + 2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41167)) >> (((/* implicit */int) (_Bool)1))));
            }
        }
        arr_18 [i_0] [i_0] = ((/* implicit */short) ((int) var_2));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
        var_21 = ((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) != (((/* implicit */int) ((((((/* implicit */int) arr_16 [i_0] [i_0] [i_0 - 1])) >> (((((/* implicit */int) (signed char)-111)) + (134))))) >= (arr_11 [i_0] [i_0 - 1]))))));
    }
    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_6)) == (117440512)))), (arr_4 [i_5] [i_5] [i_5])))) : (((/* implicit */int) min((((((/* implicit */_Bool) 4095)) && ((_Bool)1))), (max(((_Bool)1), (var_5))))))));
        var_22 = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_9)))), (((312089059) >> (((((/* implicit */int) (unsigned char)165)) - (158)))))));
    }
}
