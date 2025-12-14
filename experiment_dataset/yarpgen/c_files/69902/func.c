/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69902
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
    var_16 &= ((((/* implicit */_Bool) var_2)) ? (var_11) : (var_8));
    var_17 = ((/* implicit */long long int) (~(13172382260792366044ULL)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 640891448658787424LL)) ? (17281306327887512685ULL) : (((/* implicit */unsigned long long int) (-(2264453745074550291LL))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 26ULL)) ? (18394039767087278344ULL) : (14586387790808447721ULL)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((8753016166261531876LL), (1611029988652618647LL)));
        arr_4 [i_1] [i_1] = 14586387790808447721ULL;
        arr_5 [i_1] = ((unsigned long long int) (+((-(arr_2 [5ULL])))));
        var_21 = arr_0 [4ULL];
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned long long int) arr_6 [i_2]);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_14 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) || (((/* implicit */_Bool) var_0))))), (var_2)));
                    arr_15 [i_3] [i_3] [5ULL] [i_2] = 13172382260792366044ULL;
                }
            } 
        } 
        var_23 = min((max((arr_7 [i_2] [i_2]), (7085248992502614138ULL))), (max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned long long int) 2264453745074550291LL)))));
        arr_16 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_2]))));
    }
}
