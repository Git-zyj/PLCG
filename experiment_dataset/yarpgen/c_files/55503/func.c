/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55503
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
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 += ((/* implicit */short) 2832545112U);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_12 -= ((/* implicit */_Bool) (unsigned short)65535);
                        var_13 -= ((/* implicit */long long int) ((((/* implicit */int) (short)-23607)) ^ (((/* implicit */int) (unsigned short)9))));
                        arr_11 [i_0] [i_2] [i_0] [i_0 - 3] [12U] |= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
                        var_14 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_3))))))), (((((-6673405610088355904LL) + (9223372036854775807LL))) >> (((690057912U) - (690057872U)))))));
                        var_15 = var_8;
                    }
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */short) var_1);
}
