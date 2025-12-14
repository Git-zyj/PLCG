/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95650
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
    var_11 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) arr_0 [6U]);
                arr_5 [(_Bool)1] [i_1] = 18446744073709551615ULL;
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_11 [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294965248U)) ? (6148313887841405399ULL) : (6148313887841405399ULL)));
                var_13 ^= ((/* implicit */unsigned int) arr_6 [i_2]);
            }
        } 
    } 
}
