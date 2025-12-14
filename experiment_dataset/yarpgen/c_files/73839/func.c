/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73839
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned int) 14206693683832676595ULL));
                var_11 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (short)-23630)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_7)))) : (arr_1 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                var_12 += ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_3] [i_3])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_13 = ((/* implicit */_Bool) ((unsigned short) (~(3526460120U))));
                    var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [16LL] [i_3] [i_2 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [i_3] [i_2])) << (((((/* implicit */int) arr_9 [i_2] [8LL] [i_2])) - (182)))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 2]))) : (arr_14 [i_2] [i_2])))));
                    arr_15 [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (!((_Bool)1)));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_18 [i_5] [i_2] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_2] [(_Bool)1] [i_2 - 1])) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2 - 2]))));
                    arr_19 [i_2] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))) | (((((/* implicit */_Bool) (unsigned short)65519)) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_3] [i_2])))))));
                }
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_24 [i_2] [i_2] [i_6] [i_7] = ((/* implicit */short) max(((~(arr_2 [i_2] [i_6 - 1] [1]))), (((/* implicit */int) var_0))));
                            arr_25 [i_7] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) min(((unsigned short)65518), (((/* implicit */unsigned short) arr_0 [i_2] [i_2]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) || (arr_3 [i_2] [17] [i_2])))) << (((((((/* implicit */unsigned long long int) arr_14 [i_3] [i_2])) | (var_5))) - (17941765862272184313ULL))))));
            }
        } 
    } 
}
