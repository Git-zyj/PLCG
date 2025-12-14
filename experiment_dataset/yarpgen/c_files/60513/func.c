/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60513
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
    var_19 = ((/* implicit */short) ((_Bool) ((_Bool) (+(((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_20 *= ((/* implicit */short) max((((((/* implicit */_Bool) (short)1252)) ? (((/* implicit */int) (short)28789)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_0 [i_1]))));
                    var_21 += ((((/* implicit */int) ((short) arr_4 [i_2 - 1] [i_2 - 1]))) <= ((((_Bool)1) ? ((~(((/* implicit */int) (short)-31200)))) : (((/* implicit */int) (short)-1774)))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_1] [i_3])) ? (((/* implicit */int) arr_2 [i_0] [(_Bool)1] [(short)10])) : (((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_3]))))) : (((/* implicit */int) arr_1 [i_0])))))))));
                    arr_11 [i_3] [i_3] [i_0] &= (short)-8813;
                    var_23 &= ((/* implicit */_Bool) arr_5 [i_0] [i_1] [(short)8] [i_3]);
                    arr_12 [i_1] [i_0] [i_0] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_7 [i_1] [i_0] [i_3] [i_3]))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */int) (_Bool)1)), ((-((-(((/* implicit */int) arr_1 [i_0])))))))))));
                }
                arr_13 [i_1] = ((_Bool) ((_Bool) arr_2 [i_0] [i_1] [(_Bool)1]));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_1] [(_Bool)1] = (short)7208;
                            arr_21 [i_1] [i_1] = (!(((/* implicit */_Bool) arr_6 [i_0] [i_5 - 1])));
                            arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((_Bool) (!(var_3)));
}
