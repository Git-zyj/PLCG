/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87906
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((_Bool) ((((/* implicit */_Bool) -250351931)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7716253242831081332LL)));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_0] [i_4] = ((/* implicit */long long int) ((int) ((long long int) 492249158)));
                                var_15 = arr_12 [19] [19] [i_1] [i_2] [i_3] [i_0];
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (unsigned short)24531))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_2] [i_0]);
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0]))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_19 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-1011496401281351894LL));
                                arr_23 [i_0] [(unsigned short)3] [10LL] [i_6] [24LL] [i_6] = ((/* implicit */unsigned short) ((long long int) -3690670877760300444LL));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_20 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
                                arr_26 [i_0 - 2] [8LL] [i_0] [15LL] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (16777215LL))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 4; i_9 < 24; i_9 += 4) 
                {
                    for (long long int i_10 = 1; i_10 < 24; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5578790226223836275LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1267774867453988216LL)));
                            arr_32 [i_0] [i_1 - 1] [i_9] [i_9] [i_10 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 5023240529539895601ULL))))), (((int) (_Bool)1))));
                        }
                    } 
                } 
                var_22 &= ((/* implicit */_Bool) ((long long int) (_Bool)1));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max((min(((-(288225978105200640ULL))), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) max((3690670877760300444LL), (-2486485513171919355LL))))));
}
