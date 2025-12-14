/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7439
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
    var_14 = var_0;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) (short)29052);
                var_16 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_8))))))), ((-(((unsigned long long int) arr_3 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((long long int) ((unsigned short) var_2))) / (((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_2])), (var_10)))))))));
        var_18 = ((/* implicit */unsigned short) min((((long long int) (~(((/* implicit */int) var_3))))), (((/* implicit */long long int) ((unsigned char) (short)15143)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3])) & (((/* implicit */int) (short)-15143))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_5)))))));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        var_21 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) 2305561534236983296LL)) ? (arr_5 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4]))))), ((~(((((/* implicit */_Bool) arr_8 [i_4] [2LL])) ? (1572717744U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4])))))))));
        var_22 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_9 [i_4]))))));
        arr_11 [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_4] [(signed char)10]);
        var_23 += ((/* implicit */unsigned short) arr_7 [20LL]);
    }
}
