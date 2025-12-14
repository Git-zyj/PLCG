/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7568
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_6 [i_0] [i_1] [i_1] [i_2])))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_0 - 3] [i_0] [i_2])), (1387842594264297370ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_0]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        var_18 ^= 17058901479445254245ULL;
                        arr_15 [i_0] [i_0] [(short)12] [i_0] = ((/* implicit */short) var_16);
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_12);
    var_20 = ((/* implicit */signed char) max((min(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) var_3)))))), (((max((((/* implicit */unsigned long long int) var_11)), (var_3))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)5809)))))))));
    var_21 = ((/* implicit */unsigned char) (-(1387842594264297371ULL)));
    var_22 = var_2;
}
