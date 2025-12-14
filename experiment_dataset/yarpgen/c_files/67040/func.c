/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67040
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */int) var_6)) | (-821373080)))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(((long long int) 18446744073709551612ULL))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) max((var_8), (((/* implicit */short) var_3)))))));
    var_12 = ((/* implicit */signed char) 821373051);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_13 = (-(((/* implicit */int) ((short) arr_7 [i_2]))));
        var_14 = ((/* implicit */signed char) max((var_14), (max((max((arr_5 [i_2] [i_2]), (arr_5 [i_2] [i_2]))), (arr_2 [i_2])))));
    }
}
