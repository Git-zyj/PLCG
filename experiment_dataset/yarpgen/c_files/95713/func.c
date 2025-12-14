/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95713
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
    var_18 = ((/* implicit */long long int) (unsigned short)46906);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 4; i_4 < 18; i_4 += 4) /* same iter space */
                        {
                            arr_12 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_0 + 1]);
                            var_19 = ((/* implicit */unsigned long long int) (unsigned short)27451);
                            arr_13 [i_1] [i_1] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 + 2] [i_1]);
                            var_20 -= ((/* implicit */unsigned int) ((unsigned short) arr_4 [i_4]));
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_6 [i_0 + 1] [i_1 + 2] [i_4 + 4]));
                        }
                        for (unsigned short i_5 = 4; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            var_21 = 576460752303423487ULL;
                            var_22 = ((/* implicit */unsigned short) ((int) (+(2526135796349575636ULL))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 4; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [(unsigned short)12] [i_2] [20U] [i_1] [i_6] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) 18446744073709551614ULL)))));
                            var_23 |= ((/* implicit */int) ((unsigned short) arr_9 [i_0] [(unsigned short)6] [i_6] [i_0 + 1]));
                        }
                        arr_23 [i_0] [(unsigned short)16] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 - 1] [i_2] [i_1 + 3] [i_0])))))));
                    }
                } 
            } 
        } 
        var_24 ^= ((/* implicit */unsigned int) (unsigned short)27451);
        /* LoopNest 2 */
        for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                {
                    var_25 &= ((/* implicit */int) ((unsigned long long int) (+(arr_20 [i_0] [i_0 + 1] [10] [i_0] [i_7] [i_7 - 1]))));
                    arr_28 [6LL] [4LL] [i_8] &= ((/* implicit */unsigned short) 0U);
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) arr_17 [i_0] [18ULL] [4ULL] [i_0] [i_0]);
    }
    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) (+((~(((/* implicit */int) (unsigned short)22)))))));
}
