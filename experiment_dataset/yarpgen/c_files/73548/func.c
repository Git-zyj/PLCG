/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73548
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [18LL] &= ((/* implicit */int) ((-3058337922277573541LL) + (((/* implicit */long long int) -5))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [(unsigned char)4] = ((/* implicit */unsigned short) -3058337922277573541LL);
                        var_13 = ((/* implicit */int) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84)))));
                        arr_13 [i_0] [(unsigned short)2] [i_0] [(unsigned short)6] [5LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7268)) || (((/* implicit */_Bool) -608481625))));
                        var_14 = ((/* implicit */int) arr_4 [i_1] [i_2] [i_3]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) 104843435U)) : (((/* implicit */unsigned long long int) -3058337922277573550LL))));
                            var_16 = ((/* implicit */long long int) (~(0ULL)));
                            arr_17 [i_0] [i_1] = var_5;
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */long long int) ((unsigned short) arr_14 [i_3] [i_3 + 1] [i_0] [i_3 - 1] [i_3 + 1] [i_5] [i_0]));
                            arr_20 [(_Bool)1] [i_1] [i_2] [i_3] [i_0] = (-(16178227620896573545ULL));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 19; i_6 += 2) 
            {
                for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    {
                        arr_26 [i_7] [i_0] [i_0] [i_0] = ((/* implicit */int) ((long long int) var_1));
                        var_18 = ((/* implicit */unsigned short) 19LL);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) (-(arr_6 [i_0])));
            arr_27 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [18] [i_1])) && ((!(((/* implicit */_Bool) var_9))))));
        }
        for (int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (-(-2147468127)));
            arr_30 [i_0] [i_0] = ((/* implicit */long long int) ((arr_28 [i_0]) < (arr_28 [i_0])));
        }
    }
}
