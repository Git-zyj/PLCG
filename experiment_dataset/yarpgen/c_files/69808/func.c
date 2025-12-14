/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69808
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((_Bool) (((~(((/* implicit */int) var_0)))) != (((/* implicit */int) var_0))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_1 - 1] = ((arr_2 [i_0]) || (var_8));
                            var_13 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                            var_14 = ((_Bool) var_5);
                            arr_13 [i_0] [i_0] [i_0] = ((_Bool) arr_11 [i_0] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_3] [(_Bool)1] [i_4]);
                        }
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_3] = arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_0];
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(_Bool)1] [i_2 - 1] [i_5]))));
                        arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_6))))) >= (((((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1] [i_1])) * (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5]))))))) * (((/* implicit */int) var_4))));
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_0] = (i_0 % 2 == 0) ? ((((((~(((/* implicit */int) var_5)))) % (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) >= (min((((((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_2])) * (((/* implicit */int) var_3)))), (((/* implicit */int) var_4)))))) : ((((((~(((/* implicit */int) var_5)))) * (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) >= (min((((((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_2])) * (((/* implicit */int) var_3)))), (((/* implicit */int) var_4))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_16 -= ((((/* implicit */int) ((_Bool) (_Bool)1))) < (((/* implicit */int) ((_Bool) (!(arr_9 [i_0] [i_0] [i_1] [(_Bool)1] [i_1 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)1))));
                                arr_27 [(_Bool)1] [i_7] [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) max((var_10), (var_8)))))) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_18 = min((var_0), (((((var_8) && (arr_3 [i_0]))) && (((_Bool) var_8)))));
                                arr_33 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_0])) + (((/* implicit */int) arr_30 [i_0]))))));
                                arr_34 [i_0] [i_0] [i_6] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * ((~(((/* implicit */int) arr_32 [i_0] [i_1] [i_1 - 1] [i_1] [i_10]))))));
                                arr_35 [i_6] [i_0] [i_0] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_1] [i_6] [i_10]))))) || ((_Bool)0))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
