/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85780
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
    var_13 = ((/* implicit */unsigned int) var_6);
    var_14 = min((min((var_11), (((/* implicit */unsigned long long int) var_0)))), (max((((((/* implicit */unsigned long long int) var_9)) + (var_6))), (((/* implicit */unsigned long long int) var_7)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) arr_4 [i_0]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_3] [5U] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_3])) && (((/* implicit */_Bool) arr_7 [i_0] [10U] [i_2] [10U]))))) != ((~(arr_3 [i_0] [i_0])))))) >> (((arr_2 [i_0]) + (6676379516215915427LL)))));
                        var_16 += arr_10 [3] [3] [i_2] [i_3] [i_0];
                        var_17 &= ((/* implicit */unsigned int) var_10);
                    }
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) 4294967295U));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_1] [2] [(unsigned short)12]);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) 18446744073709551604ULL);
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((var_10) * (((var_6) % (var_10))))))))));
}
