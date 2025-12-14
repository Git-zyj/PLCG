/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88675
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_2] [(unsigned short)1] [i_4] [i_4]);
                                var_14 = ((/* implicit */unsigned short) ((_Bool) min(((~(((/* implicit */int) arr_2 [i_1] [i_3] [i_1])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_4]))) == (var_12)))))));
                            }
                            var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) ((int) arr_10 [i_2] [i_1] [i_1] [i_2] [i_1]))) ? (((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_2] [i_0] [6U])))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_3] [i_3]))) ? (((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_6)))) : (var_12)))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_7 [i_0] [i_1])) * ((-(max((((/* implicit */long long int) arr_6 [i_0] [i_0])), (var_8)))))));
                var_17 &= ((/* implicit */unsigned short) arr_6 [i_0] [i_1]);
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (-(var_9))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))) : (max(((-(((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))));
    var_19 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min((max((var_3), (var_3))), (((/* implicit */signed char) var_10))))));
    var_20 = ((/* implicit */int) max((var_20), (var_13)));
}
