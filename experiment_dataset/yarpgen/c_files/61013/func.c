/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61013
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
    var_20 = ((/* implicit */long long int) (+(var_0)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_2] [1ULL] = ((((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_0] [i_0] [i_2]))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((/* implicit */int) arr_6 [i_2])));
                        arr_10 [i_0] [i_2] = ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2 - 2] [i_3] [3LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1] [(unsigned short)11] [i_3])))) : (arr_7 [(unsigned short)4] [i_2] [i_2] [i_2 + 1] [i_2 + 1]));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_21 = (~((((-(arr_5 [i_4] [i_0] [i_0]))) & (((/* implicit */long long int) arr_12 [i_2] [i_1] [6LL])))));
                        arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_5 [i_2] [i_0] [i_2]);
                    }
                    arr_14 [i_0] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) ((int) arr_11 [i_0] [i_0] [i_2] [i_2]));
                    arr_15 [i_0] [i_2] [i_2] = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_0] [i_2]))) ^ ((-(arr_4 [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}
