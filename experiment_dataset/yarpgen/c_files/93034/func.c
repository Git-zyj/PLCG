/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93034
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [1] [1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (arr_2 [i_1])))) ? (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) arr_7 [i_2] [i_0] [i_0]))))) : (((/* implicit */int) var_2)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_2] [i_2] [20ULL] [i_1] [i_0] &= ((/* implicit */_Bool) arr_5 [i_1] [i_2 - 2] [i_2]);
                        var_15 = ((/* implicit */long long int) ((((arr_9 [i_0] [i_2 + 1] [i_2 - 2] [i_1]) & (((/* implicit */int) arr_7 [i_2 - 1] [i_2] [i_2 - 2])))) * (((/* implicit */int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) || (((((/* implicit */int) var_2)) == (((/* implicit */int) var_7)))))))));
                    }
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_24 [i_4] [16U] [i_4] &= ((/* implicit */unsigned long long int) ((_Bool) -7857828933873460903LL));
                                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_19 [i_4] [i_7])))) / (arr_11 [i_4] [i_5] [i_7] [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_20 [(short)18] [i_6] [i_4])) ? (arr_20 [i_5] [i_6] [i_4]) : (arr_20 [i_4] [i_5] [i_4]))) : (((/* implicit */int) arr_3 [i_7]))));
                            }
                        } 
                    } 
                    arr_25 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_4] [i_5] [i_6])) ? (arr_16 [i_4] [i_5] [i_6]) : (arr_16 [i_5] [i_5] [(_Bool)1]))) | (((/* implicit */long long int) max((arr_13 [i_4] [(signed char)5]), (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_6 [i_5]))))))))));
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)1048))) * (445433350U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5])))));
                    arr_26 [i_5] = ((/* implicit */long long int) arr_22 [i_4] [i_4] [i_5] [i_6] [i_5]);
                }
            } 
        } 
    } 
}
