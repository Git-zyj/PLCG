/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56496
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((4422345546311464582LL), (var_4)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            var_16 = ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 2] [i_1])) ? (min((((/* implicit */unsigned long long int) var_4)), (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (arr_5 [i_1 - 2] [i_1 + 2] [i_1])))));
            var_17 = ((/* implicit */_Bool) max((var_17), (((((/* implicit */long long int) ((-1413386017) + (2147483647)))) == (-6855967101796813781LL)))));
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])), (var_5)));
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) max(((~(arr_3 [i_1]))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 1413386013)) ? (((/* implicit */int) var_14)) : (arr_5 [i_0] [i_0] [i_1]))))))));
            arr_7 [i_1] = ((short) arr_1 [i_1 - 2] [8ULL]);
        }
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_19 += ((/* implicit */short) (((~(arr_5 [i_2 + 1] [i_2 + 1] [10U]))) ^ ((~(((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_14 [i_2] [i_2] [i_2])), (min((2147483647), (((/* implicit */int) (unsigned char)145))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((short) var_0))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) arr_20 [(unsigned char)6]))))));
                                var_22 = ((/* implicit */unsigned int) (+((~(min((var_9), (((/* implicit */unsigned long long int) arr_18 [i_3] [i_4] [i_5] [i_6]))))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_3] [i_4 - 1] [i_4 - 1] [i_6])))) ? (((/* implicit */int) min((((_Bool) 805306368)), ((_Bool)1)))) : (((/* implicit */int) arr_8 [i_2 + 1])))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_3] [i_3] [i_2 + 1] = ((/* implicit */int) ((unsigned long long int) (short)16383));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [i_7 - 1] [i_7 - 1])), (var_4)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))));
                    var_25 *= min((((/* implicit */unsigned long long int) 3589705548U)), (max((((unsigned long long int) arr_27 [i_8] [i_8] [i_7 - 1])), (arr_23 [i_7 - 1]))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) (_Bool)1);
}
