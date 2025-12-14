/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76832
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 = arr_10 [4LL] [(unsigned char)0] [i_2] [i_2];
                                arr_15 [i_4] [i_1] [i_2] [(short)10] [i_2] = ((/* implicit */unsigned int) arr_13 [i_1] [i_2] [i_2] [i_3 + 2] [i_4]);
                            }
                        } 
                    } 
                    var_13 *= ((unsigned long long int) (!(((/* implicit */_Bool) 10763758717715740872ULL))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [18U] [i_0] [i_0] [i_0])))))));
    }
    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) ^ (10763758717715740872ULL)));
    var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 6984651933440177822LL)) ? (1524269921U) : (((/* implicit */unsigned int) ((int) 10763758717715740894ULL)))))));
}
