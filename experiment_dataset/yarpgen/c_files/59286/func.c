/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59286
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
    var_20 = ((/* implicit */short) ((min((var_2), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_18)), (var_7)))))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_19))))));
    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (min((14932343324338739598ULL), (((/* implicit */unsigned long long int) (unsigned char)103)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((3514400749370812021ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-102)) || (((/* implicit */_Bool) (short)-8192))))) == (((/* implicit */int) (unsigned char)153)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3 - 1] [1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((int) 1023U));
                                arr_17 [11] [i_1] [i_0] [i_3] [11] = max((((/* implicit */long long int) ((unsigned char) (unsigned char)153))), (((arr_7 [i_0]) - (arr_7 [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        var_23 &= ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((var_10) != (((/* implicit */long long int) arr_9 [i_0 + 3] [i_2 - 1] [i_5]))))) <= (arr_9 [i_0 + 2] [i_2 + 2] [i_2])));
                        var_25 = ((/* implicit */unsigned int) min((((arr_14 [i_0] [i_0] [i_0]) - (arr_14 [i_0] [i_0] [(_Bool)1]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)129)) >= (((/* implicit */int) (unsigned short)33808)))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((arr_10 [(_Bool)1] [i_0] [(_Bool)1]), (((/* implicit */int) var_4))))) | (((arr_15 [i_0] [i_2 + 2] [i_0] [i_2 + 2] [i_2 + 2]) | (((/* implicit */unsigned long long int) arr_10 [i_2] [i_0] [i_2]))))));
                        var_27 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))) ^ (min((((/* implicit */long long int) arr_8 [i_0 + 3] [i_0])), (arr_7 [i_0]))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_0] [(short)16] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                        arr_24 [i_0] [i_2] [i_2] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned char)103))) >> (((arr_14 [i_0 + 4] [i_0] [13U]) + (5349287688445015396LL)))))) : (((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned char)103))) >> (((((arr_14 [i_0 + 4] [i_0] [13U]) + (5349287688445015396LL))) + (606403925524876575LL))))));
                        arr_25 [i_0] [i_1] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_9 [i_2 + 2] [i_1] [i_1]) / (arr_9 [i_2 + 2] [i_1] [i_0])));
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((_Bool) arr_18 [i_0] [(unsigned char)5] [i_2] [(_Bool)1] [(unsigned short)11]);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_17))));
                        arr_29 [14U] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_19 [i_0] [10ULL] [i_0 + 4] [i_2 + 3] [i_7 + 2] [i_7]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) arr_27 [i_0 + 3] [i_0 + 3] [i_2 + 2] [i_0] [i_7 + 1] [i_7 + 1])) >= (((/* implicit */int) var_5))));
                    }
                    var_30 = ((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)));
                    var_31 = ((/* implicit */long long int) max((max((arr_22 [i_2 - 2] [i_0] [i_2] [i_2]), (arr_22 [i_2 + 2] [i_0] [i_1] [i_1]))), (max((arr_22 [i_2 + 3] [i_0] [i_2] [i_2]), (arr_22 [i_2 + 3] [i_0] [i_0] [4])))));
                }
            } 
        } 
    } 
}
