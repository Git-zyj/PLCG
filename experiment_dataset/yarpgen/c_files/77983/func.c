/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77983
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [16] = ((/* implicit */short) (((!(((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) arr_4 [9ULL] [9ULL] [i_2 + 1]))))))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2])), (arr_3 [10U])))), (max((3243138228U), (4294967295U))))))));
                    var_10 += ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (signed char)-2)), (((arr_0 [(unsigned char)18] [(unsigned char)18]) ^ (arr_2 [i_0] [i_1] [i_2 + 1]))))), ((~((~(arr_2 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) max(((unsigned short)44503), (((/* implicit */unsigned short) (unsigned char)28))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_9 [i_3] = ((/* implicit */_Bool) (unsigned char)13);
        var_13 += ((/* implicit */unsigned char) ((var_3) < (((/* implicit */unsigned long long int) arr_8 [i_3]))));
    }
    var_14 = var_8;
}
