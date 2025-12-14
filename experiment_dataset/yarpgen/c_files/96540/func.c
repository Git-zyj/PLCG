/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96540
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
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 130023424)) ? (1423825169145628870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (var_7))) <= (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_17)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_3)))))));
    var_20 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((unsigned short) (short)511))), (var_16))) << (((/* implicit */int) ((short) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)527)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-492)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -2014811230)) ? (((/* implicit */int) arr_3 [i_2])) : (arr_12 [(short)0] [i_0] [i_4] [(signed char)2] [i_0]))) <= (((int) (signed char)17))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)0))))) - (arr_4 [i_2 + 2] [i_2 + 2] [i_2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */int) ((arr_7 [i_2] [i_2 - 1]) << (((arr_7 [i_5] [i_2 + 2]) - (9992055374957145561ULL)))));
                                arr_23 [i_5] [i_5] [11] [i_5] [i_5] [i_5] [(unsigned char)19] = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) -1);
    }
    var_24 = ((/* implicit */unsigned char) var_15);
}
