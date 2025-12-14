/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77882
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) ((arr_1 [i_0]) >= (((/* implicit */unsigned int) arr_0 [i_0])))))), (((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)188)) | (((/* implicit */int) (unsigned char)82))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)82))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (+((~(arr_7 [(unsigned short)14])))))), (min((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) 1427720572U)), (18446744073709551615ULL)))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 3] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))) : (((382769172911249178ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
        {
            {
                arr_14 [i_3] = ((/* implicit */_Bool) (unsigned char)35);
                arr_15 [i_3] = ((/* implicit */int) arr_13 [i_3]);
            }
        } 
    } 
}
