/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93358
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
    var_10 = ((/* implicit */unsigned int) ((int) (unsigned char)61));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_0] [i_1 - 2] = ((/* implicit */_Bool) (signed char)0);
            arr_5 [i_0] [(short)15] [10ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_0 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)7)) != (((/* implicit */int) (signed char)4)))))) : (((((/* implicit */_Bool) (short)32742)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            arr_9 [i_2] [11U] = ((/* implicit */int) ((11639480934789858993ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-35))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */int) (signed char)72)) != (((/* implicit */int) arr_6 [i_0] [i_2]))));
                            arr_18 [i_0] [i_0] [i_3 + 1] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (arr_0 [i_3 + 1]) : (arr_0 [i_3 + 1])));
                            arr_19 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (_Bool)1);
                            arr_20 [2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0])) - (100)))));
                        }
                    } 
                } 
            } 
            arr_21 [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned short)35512)) ^ (((/* implicit */int) (unsigned char)24)))) : (((((/* implicit */_Bool) (unsigned short)15512)) ? (var_0) : (978689148))));
        }
        arr_22 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32762)) ? (479524598728498997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26140)))));
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-30474);
        arr_24 [i_0] = ((/* implicit */_Bool) (short)-9161);
    }
}
