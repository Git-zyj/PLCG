/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68985
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (~((+((~(var_0))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((int) (unsigned char)255))) : (1073741823U)));
        var_12 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)54))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(var_0)))), (((unsigned int) (unsigned short)15438))));
                        arr_11 [i_0] = ((/* implicit */unsigned int) min((((int) arr_4 [i_0] [i_1] [i_2])), ((~(((/* implicit */int) ((_Bool) 2ULL)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            {
                arr_17 [(signed char)6] [(signed char)13] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4]))) != ((-9223372036854775807LL - 1LL)))))));
                arr_18 [i_4] = ((/* implicit */unsigned short) ((_Bool) ((max((((/* implicit */unsigned long long int) (unsigned short)50103)), (18446744073709551609ULL))) ^ (max((arr_14 [i_4]), (((/* implicit */unsigned long long int) 0U)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2577738521U)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)0))));
}
