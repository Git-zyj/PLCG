/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74407
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = min((((/* implicit */unsigned int) var_9)), (((min((((/* implicit */unsigned int) (_Bool)0)), (4049976182U))) - (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_9))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
        var_14 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned int) var_3))))) : (var_3)));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [i_1] [11U] [i_3 + 3] [i_4] [i_3] = ((unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 3150279411U))));
                                var_16 ^= var_8;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (244991110U) : (((unsigned int) var_12))))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) (_Bool)1)));
        var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((var_0) / (var_6))) : (var_6))));
    }
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_20 ^= min((var_4), (((/* implicit */unsigned int) var_9)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 4) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            /* LoopSeq 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_22 = (-(var_4));
                var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (0U) : (((var_11) * (var_10))));
            }
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                var_24 = ((/* implicit */_Bool) (~(var_11)));
                arr_30 [i_7 + 2] = (((+(var_5))) >> (((var_7) - (3738415863U))));
            }
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                arr_35 [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_25 = var_2;
                            var_26 = ((/* implicit */unsigned int) (!(((var_9) || (((/* implicit */_Bool) var_7))))));
                            var_27 ^= var_5;
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
            }
        }
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        var_29 = (!(((/* implicit */_Bool) var_3)));
        var_30 ^= ((unsigned int) ((unsigned int) ((_Bool) var_2)));
        var_31 = (-(((((/* implicit */_Bool) var_6)) ? (((unsigned int) 1429007581U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))))));
        var_32 ^= ((/* implicit */unsigned int) ((_Bool) 0U));
    }
    var_33 = (((+(((unsigned int) 250391471U)))) * (var_5));
}
