/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94834
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_4);
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8))) > (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0] [(short)0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1762782551))) : (((/* implicit */int) (short)-29774))));
            arr_6 [i_0] [(short)0] = ((/* implicit */unsigned short) var_12);
        }
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_16 [i_3 + 3] [i_4] [i_4 - 2] = ((/* implicit */short) ((_Bool) ((unsigned char) ((_Bool) var_12))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_14 [i_3 + 3] [i_3 - 1] [i_5 - 1]);
                        var_19 = ((/* implicit */unsigned short) ((((arr_17 [i_2] [11ULL] [3] [i_2]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) arr_14 [i_2] [16] [(unsigned short)19]))));
                        arr_22 [i_2] [16ULL] [i_4 - 1] [i_5 + 1] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_8 [(signed char)4])) || (((/* implicit */_Bool) var_5))))));
                        var_20 = ((/* implicit */signed char) (-((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) var_9))))));
                    }
                    arr_23 [i_2] [i_3 + 1] [i_4] = ((/* implicit */_Bool) var_1);
                    arr_24 [i_4 + 1] [i_3 + 3] [1] [(_Bool)1] = ((/* implicit */short) (+(((((/* implicit */_Bool) -1762782548)) ? (((/* implicit */unsigned long long int) 134217728)) : (2251799813685247ULL)))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) 0))))) && (((/* implicit */_Bool) arr_17 [10LL] [i_2] [(_Bool)1] [i_2]))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) && (((((/* implicit */_Bool) arr_13 [i_2] [i_2])) && ((_Bool)1))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        arr_29 [15] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)34594)) : (((/* implicit */int) (_Bool)1))));
        arr_30 [i_6] [i_6] |= ((/* implicit */signed char) min((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) ((unsigned char) var_1)))));
        var_22 = ((/* implicit */short) (-(max((((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6] [i_6] [(signed char)11] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_6]))) : (var_2))), (((/* implicit */long long int) var_11))))));
        var_23 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) 381389522)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (~(arr_17 [(signed char)13] [i_6] [i_6] [i_6]))))))));
    }
    var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (-(-1762782552))))) ? ((-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) (unsigned short)18989))));
    var_25 = ((/* implicit */_Bool) max((((short) var_1)), (((/* implicit */short) var_4))));
    var_26 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)3840)) ? (((/* implicit */long long int) -1762782552)) : (((var_2) | (((/* implicit */long long int) var_9)))))));
}
