/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98529
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
    var_11 = min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) (((_Bool)0) ? (2147483633) : (((/* implicit */int) (short)22))))), ((~(var_0))))));
    var_12 = (!(((/* implicit */_Bool) -1398855112)));
    var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (var_1) : (((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) var_1);
                    var_15 = 9091011059089203849LL;
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_16 = ((/* implicit */long long int) (signed char)19);
        arr_11 [i_3] = arr_8 [i_3] [i_3];
        var_17 = ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (3844776624051599437LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
    }
    var_18 = ((/* implicit */int) max((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -3844776624051599415LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-3844776624051599415LL)))));
}
