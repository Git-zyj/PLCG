/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85752
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) arr_1 [i_2] [i_1]);
                    var_13 -= ((/* implicit */unsigned char) ((long long int) ((((arr_5 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned int) 87655110)))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_2]))))))));
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) arr_3 [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_3] [i_3 + 1])) << (((((/* implicit */int) arr_0 [i_3 + 1])) - (51075)))));
        arr_10 [i_3 + 1] = ((/* implicit */signed char) ((long long int) arr_5 [i_3] [i_3] [i_3]));
        var_15 = ((/* implicit */long long int) ((((87655110) >> (((((/* implicit */int) var_0)) + (11933))))) >> (((((/* implicit */int) arr_0 [i_3 + 1])) - (51070)))));
        arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -87655111)) ? (87655110) : (-87655117)));
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)103)) - (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_3 [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_13 [i_4] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4]))))) : (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_4 [i_4] [i_4] [i_4] [i_4]))))))) : (((long long int) var_2)));
        var_17 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_14 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) : ((+(2170665311U)))));
        var_18 ^= ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_4] [i_4]))));
    }
}
