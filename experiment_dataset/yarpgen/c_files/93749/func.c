/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93749
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            arr_15 [(short)4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) 72057594037927936LL);
                            arr_16 [i_1] [i_2] = ((/* implicit */unsigned char) 3100742548278678967ULL);
                            arr_17 [i_1] [i_4] = ((/* implicit */short) (unsigned char)148);
                            arr_18 [(short)6] [i_1] [0U] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) -2022694502);
                        }
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_5] = ((/* implicit */int) 4167122127010227570LL);
                            arr_22 [i_5] = ((/* implicit */_Bool) -2022694502);
                        }
                        arr_23 [4LL] [i_1] [4LL] [i_1] [(_Bool)1] = ((/* implicit */_Bool) 4167122127010227577LL);
                        arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 1598854077U);
                    }
                    arr_25 [i_1] = ((/* implicit */unsigned char) (unsigned short)41826);
                    arr_26 [(signed char)6] [(signed char)6] [i_2] = ((/* implicit */int) -858035479719905750LL);
                    arr_27 [i_0] [i_1] [2ULL] = ((/* implicit */unsigned long long int) 4167122127010227561LL);
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */unsigned short) 4167122127010227561LL);
    var_14 = ((/* implicit */_Bool) (short)-6);
}
