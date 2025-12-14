/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56225
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) ((((arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 2]) << (((-705076816) + (705076857))))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((((/* implicit */int) (unsigned char)71)) - (69)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_6 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2 + 1])))))) - (969ULL)))));
                    var_19 = ((/* implicit */unsigned int) var_10);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] [i_1] [i_4 - 1] = ((/* implicit */unsigned int) var_17);
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_4 - 1] [i_4 - 1] [i_4 + 2]))))) ? (((min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))) >> (((var_7) + (6270478081579908158LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) arr_5 [i_2 - 1] [i_1])))))));
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = arr_3 [i_3] [i_2] [i_0];
                            }
                        } 
                    } 
                }
                var_20 = arr_4 [i_0] [i_0] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) != (((/* implicit */int) ((short) var_9))))))) - (-7808876907687291964LL))))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_30 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1691218638)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)227)))))));
                            var_22 = ((/* implicit */unsigned char) arr_29 [i_6] [i_6] [i_6 + 1] [i_6 + 2] [i_6]);
                            arr_31 [i_5] [i_6 + 1] [i_6] [i_5] [i_6] [i_8] [i_9] = ((/* implicit */long long int) (~((+(arr_25 [i_5] [i_6 + 1] [i_6] [i_8])))));
                            arr_32 [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 1] [i_9])) ? (8644623701379980632ULL) : (((/* implicit */unsigned long long int) var_6))));
                        }
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_5))));
                        var_24 = ((/* implicit */unsigned long long int) var_0);
                        arr_33 [i_6] = ((/* implicit */long long int) var_17);
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        arr_36 [i_6] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (((~(arr_25 [i_5] [i_6 + 2] [i_6] [i_6 + 2]))) > (((unsigned long long int) var_12))));
                    }
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) + (((long long int) arr_10 [i_5] [i_5] [i_7] [i_6]))));
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_2)));
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) == (((var_8) << (((((/* implicit */int) var_14)) - (233)))))))) + ((+(var_15)))));
}
