/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94139
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        arr_11 [13] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-26)) + (((/* implicit */int) (unsigned short)0)))))));
                        var_15 = ((/* implicit */signed char) ((int) (_Bool)1));
                        var_16 = ((/* implicit */unsigned short) ((signed char) ((arr_0 [i_0] [i_1 + 2]) << (((arr_2 [i_0] [i_1 - 2]) - (1473973738))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((4294967290U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74)))))) ? (((9223372036854775807LL) / (((/* implicit */long long int) 4294967268U)))) : (-9223372036854775788LL)));
                        arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_4] [i_1] [i_1] [i_0])) : (((/* implicit */int) (signed char)121)))))));
                    }
                    arr_16 [i_2] [i_2] [(unsigned char)3] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1])));
                    var_17 = arr_2 [(signed char)7] [(signed char)7];
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (var_12)));
}
