/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63911
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (((-(14480674471719757041ULL))) >= (((/* implicit */unsigned long long int) ((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
        {
            var_18 *= ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_3 [(short)8] [i_1]))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) (~(arr_3 [i_0 + 1] [i_0 + 1])));
            var_21 = ((/* implicit */short) ((arr_3 [i_0 - 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4092)))));
            arr_6 [i_2] = (+(((/* implicit */int) (signed char)0)));
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            arr_9 [i_3] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) % (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
            var_22 = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_0 + 1] [i_3] [i_0 - 1]));
            var_23 = ((/* implicit */unsigned char) (~(arr_2 [i_0 - 1] [i_3] [i_0 - 1])));
        }
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_10 [0ULL]))));
                    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))));
                    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [i_0 - 1] [i_0 + 1] [i_4]));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((((/* implicit */int) min(((signed char)-27), (arr_18 [i_6])))) % (((((/* implicit */int) (short)17288)) << (((((((/* implicit */int) arr_16 [i_6] [(short)16])) + (22645))) - (8))))))) != (((/* implicit */int) ((4294967277U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6])))))))))));
        arr_19 [i_6] = ((/* implicit */unsigned short) arr_16 [i_6] [i_6]);
        arr_20 [i_6] = ((/* implicit */short) min((18U), (min((((1655260512U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [5]))))), (min((((/* implicit */unsigned int) (short)-1)), (4294967290U)))))));
    }
    var_28 = ((/* implicit */_Bool) 18U);
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            {
                var_29 *= ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-26)) | (((/* implicit */int) (short)21985)))))), (((max((((/* implicit */int) (short)-27864)), (3))) << (((max((34359738360ULL), (((/* implicit */unsigned long long int) (short)30946)))) - (34359738335ULL)))))));
                arr_26 [15ULL] [i_8] [(unsigned short)12] = ((/* implicit */unsigned char) min((((unsigned long long int) (!(((/* implicit */_Bool) arr_12 [(signed char)12]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) arr_24 [i_7]))), (((1655260512U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8]))))))))));
            }
        } 
    } 
}
