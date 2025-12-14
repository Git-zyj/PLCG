/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69568
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_2 [(unsigned short)4] [(short)0]));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                arr_9 [i_1] |= ((/* implicit */unsigned short) max((((arr_4 [i_1] [i_1] [i_1]) ? (((/* implicit */int) min((arr_3 [i_2] [i_0] [i_0]), (((/* implicit */unsigned short) (short)-4546))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16209)) >= (((/* implicit */int) (unsigned short)54849))))))), (((/* implicit */int) ((unsigned short) (short)4519)))));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)4546)))) - (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_17)))))))));
            }
            var_21 ^= ((/* implicit */long long int) ((unsigned short) (unsigned short)65535));
        }
        arr_10 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [(unsigned short)3])) << (((((/* implicit */int) (unsigned short)61194)) - (61182)))))) ? (max((((/* implicit */long long int) (unsigned short)21369)), (arr_8 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-10460)))))) ? (((/* implicit */int) arr_1 [(short)8])) : (((((/* implicit */_Bool) var_8)) ? ((((_Bool)0) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)59862)))) : (((((/* implicit */int) (short)6841)) ^ (((/* implicit */int) (short)15375)))))))))));
    }
    var_23 = ((/* implicit */short) (_Bool)1);
}
