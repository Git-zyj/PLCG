/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88439
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
    var_20 = ((/* implicit */unsigned int) var_1);
    var_21 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) var_4);
                                var_23 = ((((/* implicit */int) ((arr_15 [i_0 + 1]) < (arr_15 [i_0 + 1])))) + (((((/* implicit */_Bool) arr_15 [i_0 - 1])) ? (1029551303) : (var_12))));
                                arr_16 [i_0] [i_0] [(short)1] [i_3] [i_4] = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                    var_24 = min(((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 2]))), (((/* implicit */long long int) ((int) var_13))));
                    arr_17 [(_Bool)1] [i_1] [i_0] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (((((arr_7 [i_0]) > (1029551278))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_2])) >= (var_17))))))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 4] [8LL] [i_1 + 4] [i_0] [i_5])) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_5 + 1])) > (arr_15 [i_0 - 2])))) : (((/* implicit */int) ((short) arr_1 [i_0])))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1 - 3]))) ? (arr_9 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) (-(-1029551304))))));
                }
                arr_21 [i_0] = ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) var_10)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((var_15) != (var_15))))))) : (max((((var_13) + (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((var_1), (var_6))))))));
}
