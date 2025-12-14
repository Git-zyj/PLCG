/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63837
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_3 - 1] [i_4 + 1] [i_4] = ((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1] [i_2]);
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [(unsigned char)0])) ? (((unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_2] [i_3 - 1] [i_1])) == (((/* implicit */int) arr_6 [i_4] [i_3] [i_2] [i_1 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [19ULL] [i_2] [i_0] [i_0])))));
                                var_12 = ((/* implicit */_Bool) ((unsigned char) (~((~(((/* implicit */int) arr_10 [i_4] [i_3 - 2] [i_2] [i_1] [i_0])))))));
                                arr_13 [i_0] [i_1] [i_1] [(signed char)12] [i_4 - 3] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) - (((15325098753001698987ULL) * (((/* implicit */unsigned long long int) 1744614197))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_13 ^= ((/* implicit */signed char) var_5);
        var_14 ^= ((/* implicit */unsigned long long int) ((((_Bool) ((2601772801U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5] [(unsigned char)0] [i_5] [(_Bool)1])))))) ? ((~((~(arr_14 [i_5]))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_15 = ((/* implicit */unsigned short) max((3121645320707852629ULL), (((/* implicit */unsigned long long int) ((15325098753001698987ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
}
