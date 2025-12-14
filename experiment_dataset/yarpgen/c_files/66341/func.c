/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66341
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_5 [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [i_0]))))) ? (((/* implicit */int) (!(max((var_4), (var_6)))))) : (((/* implicit */int) var_11))));
                        var_17 = ((/* implicit */_Bool) (((((_Bool)1) || (max((var_11), ((_Bool)1))))) ? (max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) arr_5 [i_1] [i_2] [i_3])) >> (((/* implicit */int) var_15)))))) : (((((/* implicit */int) var_1)) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))));
                        var_18 = max((var_2), (var_6));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_4] [i_0] [i_4]) ? (((/* implicit */int) arr_7 [i_5] [(_Bool)1] [i_5] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [i_4]))))) ? (((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_4]), (arr_7 [i_0] [i_4] [i_5] [i_4])))) : ((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_18 [i_4] = var_2;
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (!(max(((_Bool)1), ((_Bool)1))))))));
                                var_21 &= var_6;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_4] [i_5]))));
                                var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((_Bool)1), (arr_8 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [(_Bool)0] [i_0])) != (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) var_7)))))))) : (((/* implicit */int) ((((arr_4 [i_5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1))))))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_30 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((var_6) || (var_12)))))) : (((((/* implicit */int) max((arr_25 [i_10]), (var_6)))) - (((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))));
                var_25 = ((/* implicit */_Bool) min((((/* implicit */int) arr_29 [i_10] [i_10] [i_11])), ((~(((/* implicit */int) var_12))))));
            }
        } 
    } 
    var_26 += (!(((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
}
