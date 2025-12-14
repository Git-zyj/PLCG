/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83130
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) (~(((/* implicit */int) var_5))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_7)), (3681781547081141495LL))) << (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_7))));
    var_18 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) > (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (-157869485376792485LL)))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(max((arr_3 [i_0]), (arr_3 [i_0]))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) || ((_Bool)1)));
                            arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || ((_Bool)0)))) : ((-(((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 3]))))));
                        }
                        var_20 ^= ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_1 + 1] [i_1 + 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_0 - 3] [i_1 + 1] [i_2] [i_5] = ((/* implicit */long long int) arr_9 [i_2] [i_1]);
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 1])))))));
                    }
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_1])) || (arr_12 [i_0] [i_0] [i_2] [i_0]))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_4))))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_23 &= ((/* implicit */_Bool) arr_16 [i_6]);
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((min((((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_6 + 1] [i_6 + 1] [i_0] [(short)12] [i_0 + 1]))))), (arr_16 [i_1]))), ((~(((long long int) (_Bool)0)))))))));
                }
                for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((var_10), (((/* implicit */short) arr_22 [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1]))))) : (((/* implicit */int) arr_24 [i_0 - 2] [i_0 + 1])))), (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_9))))))))));
                    arr_25 [(_Bool)0] [i_1] [i_7] = ((/* implicit */_Bool) var_15);
                }
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) (short)20260))))) == (var_1)));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) var_14))))), (var_1))))));
                            var_28 = ((/* implicit */short) var_5);
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] [i_1 + 1] = ((((/* implicit */_Bool) max((min((var_4), (((/* implicit */short) var_0)))), (min((var_4), (var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((var_0) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (arr_6 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))))));
                var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
            }
        } 
    } 
}
