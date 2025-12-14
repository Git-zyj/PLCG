/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90558
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((-576972607) / (((/* implicit */int) (signed char)-100))))) / ((+(var_4)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) / (18325419961561976361ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) (signed char)17);
                    var_14 = ((/* implicit */int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_9)))))))))));
                }
            } 
        } 
        var_15 = ((long long int) ((max((((/* implicit */unsigned long long int) var_0)), (arr_6 [11LL] [(unsigned short)12] [11U] [i_0]))) >> (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)17))))));
    }
}
