/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63678
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = (~(((((/* implicit */_Bool) (+(-6562407353278459497LL)))) ? (((var_14) - (-6562407353278459503LL))) : (((long long int) var_4)))));
                    var_21 = ((max((var_15), (arr_0 [i_1 - 2]))) / (((((/* implicit */_Bool) 7127229480736829166LL)) ? (-6562407353278459497LL) : (-7127229480736829166LL))));
                    arr_6 [2LL] [i_1 - 3] [i_1 - 2] [i_2] = (((-(max((arr_3 [i_0] [8LL] [i_2]), (arr_5 [i_2] [i_1] [3LL]))))) | (((/* implicit */long long int) ((/* implicit */int) ((-665115053501371852LL) > (-8998799088630866770LL))))));
                }
            } 
        } 
    } 
    var_22 = (+((~(var_18))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        arr_11 [i_3] &= (+(var_18));
        arr_12 [i_3 + 2] = ((((/* implicit */_Bool) 879811646034550477LL)) ? (-6562407353278459485LL) : (-6562407353278459500LL));
        var_23 ^= ((/* implicit */long long int) ((var_4) < (-348772034452079596LL)));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_24 = var_14;
                    arr_18 [i_3 + 2] = arr_15 [i_5];
                    var_25 = var_2;
                }
            } 
        } 
    }
}
