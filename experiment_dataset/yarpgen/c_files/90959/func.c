/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90959
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
    var_14 = ((min((((var_6) - (var_0))), ((~(17U))))) & (((var_0) + (min((var_12), (var_4))))));
    var_15 = 1266145932U;
    var_16 = ((var_12) ^ (var_9));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [15U] = max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2173074606U) >= (3028821358U))))) >= (((4294967295U) & (3892248007U)))))), (var_5));
        var_17 &= 3028821337U;
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                var_18 = var_11;
                var_19 = ((unsigned int) var_0);
            }
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                var_20 += var_10;
                arr_13 [i_3] [i_1] [i_0] = min((min((3U), (2997309681U))), (939524096U));
                arr_14 [i_0] [i_1] [i_1] [i_1] = ((((min((var_11), (939524108U))) | ((~(var_13))))) & ((~(min((var_8), (var_7))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_4 = 3; i_4 < 15; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned int) ((min((var_9), (max((var_12), (var_0))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6))))))))));
                            var_21 -= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_13))))), ((~(3028821337U))))) > (max((955298882U), (var_5)))));
                        }
                    } 
                } 
            } 
            var_22 += max((var_11), (var_7));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            arr_25 [11U] [i_7] = (((~(8192U))) ^ (4294967279U));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 2; i_8 < 14; i_8 += 1) 
            {
                var_23 += var_3;
                arr_29 [i_0] = var_0;
                var_24 = ((/* implicit */unsigned int) ((var_0) >= (((unsigned int) var_10))));
                var_25 = (+(((1U) / (var_7))));
            }
        }
        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (unsigned int i_11 = 1; i_11 < 15; i_11 += 4) 
                {
                    {
                        var_26 += ((min(((-(4294959103U))), ((-(var_9))))) >> (((986566312U) - (986566290U))));
                        arr_37 [i_9] [i_10] [i_9] [i_9] = max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) || ((!(((/* implicit */_Bool) var_7))))))), (((min((4294967295U), (0U))) << (((((unsigned int) var_9)) - (2748216052U))))));
                    }
                } 
            } 
            var_27 = var_6;
            var_28 = min((((/* implicit */unsigned int) ((max((1297657613U), (4294967295U))) < (((576289629U) | (var_13)))))), (1941644045U));
        }
        arr_38 [i_0] = max((1266145929U), (0U));
    }
    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        arr_41 [i_12] [i_12] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((var_12) & (var_0))), (var_4))))));
        arr_42 [i_12] [i_12] = (-(var_9));
    }
}
