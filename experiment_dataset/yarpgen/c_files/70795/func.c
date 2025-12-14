/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70795
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */long long int) ((arr_0 [i_0 + 3]) >= (((var_1) / (arr_0 [i_0])))));
        arr_2 [(unsigned char)10] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_0 + 3]));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
        var_21 = ((/* implicit */signed char) var_14);
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                {
                    var_22 = ((long long int) (+(((/* implicit */int) (signed char)-123))));
                    arr_16 [(signed char)17] [(signed char)17] = ((/* implicit */short) arr_10 [i_2] [i_2]);
                    arr_17 [i_2] = ((signed char) var_15);
                }
            } 
        } 
    } 
}
