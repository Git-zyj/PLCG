/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65487
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
    var_12 = ((/* implicit */unsigned long long int) ((signed char) var_8));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_8))))) ? (var_0) : (((((/* implicit */int) (short)23797)) + (((/* implicit */int) var_9))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) & (var_1)))) ? (((((/* implicit */_Bool) 775364717)) ? (3758096384U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (_Bool)1)))))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 3] [i_2 + 2]))) | (9605897542848434989ULL))) - (18446744073709551533ULL))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) var_5)) >> (((4556610769453376618LL) - (4556610769453376614LL))))))));
                        var_16 -= ((/* implicit */unsigned int) ((long long int) var_1));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        var_17 *= ((/* implicit */unsigned short) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0])) : (var_6))) - (235)))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5879))) + (arr_0 [i_5 + 1])));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (var_0))))));
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0 + 4] [i_1 + 2] [i_2] [i_5]))));
                        var_21 ^= ((/* implicit */unsigned char) ((_Bool) 207087568U));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) var_11);
}
