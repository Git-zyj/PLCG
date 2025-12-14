/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74573
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
    var_13 |= ((/* implicit */_Bool) ((558422637) + (var_8)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) var_1);
                    arr_9 [i_0] [3LL] [i_2] = ((/* implicit */signed char) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))));
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) (unsigned char)52)), (4492975438630539308ULL))))) && (((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39521))) + (var_1))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_15 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned short)30904)) : (arr_11 [i_0] [i_0] [(unsigned short)2] [i_0]))) << (((((4U) ^ (var_9))) - (806366124U)))));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-11)) ? ((+(((/* implicit */int) (signed char)10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        var_17 = ((/* implicit */long long int) 0);
                    }
                }
            } 
        } 
    } 
}
