/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96485
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_11))))) ? (var_6) : (max((-915321234), (var_8)))))) * ((-(var_5)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((int) ((((arr_1 [i_3]) + (2147483647))) >> (((-1) + (12)))))) : (-11)));
                        arr_11 [i_0] [i_3] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */short) max(((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1] [i_3])))), ((~(((/* implicit */int) arr_9 [i_1] [i_1 + 2] [i_1 + 3] [14ULL]))))));
                        var_20 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_4)))), (arr_0 [i_0])))), (min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3])) ? (((/* implicit */long long int) 1313933859U)) : (-5829796219420739358LL))), (((/* implicit */long long int) (-(-1))))))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((var_14) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 241057080)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((-(((/* implicit */int) (short)-28605)))))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) var_6)), (902008966U)))))));
                        var_21 = ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) (signed char)-42)) : (1)))));
                    }
                } 
            } 
            var_22 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (var_2)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0])), ((unsigned short)11820)))) : (((/* implicit */int) (unsigned char)215))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
            {
                arr_15 [i_4 + 2] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_13 [i_0] [i_4] [i_4] [i_1 - 1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    arr_19 [i_5] [i_0] [i_1] [i_4 - 1] [i_1] &= ((/* implicit */unsigned long long int) arr_16 [i_5] [i_5 + 3] [i_5 + 2] [i_5]);
                    arr_20 [i_0] [i_0] [i_1 + 3] [i_0] [i_5] = ((/* implicit */int) ((signed char) 16843078998633542076ULL));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_0] [i_5 - 2] [i_4] [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_4 + 3] [i_5 - 1] [i_1 + 1]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])))));
                        arr_25 [i_0] [i_5 + 2] [i_0] [0U] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_17 [i_5] [i_1 + 2]);
                    }
                    arr_26 [i_0] [i_5] = ((/* implicit */long long int) ((var_14) ? (((/* implicit */int) arr_23 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [4ULL])) : (((/* implicit */int) arr_9 [i_4 + 1] [i_4] [i_5] [9]))));
                }
                arr_27 [i_0] [i_0] = ((/* implicit */signed char) arr_21 [i_4] [i_1] [i_1] [i_1] [i_0]);
                arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_4);
            }
        }
    }
}
