/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55525
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
    var_11 = ((/* implicit */unsigned long long int) ((int) 13442449958625065137ULL));
    var_12 = ((/* implicit */unsigned char) ((13442449958625065128ULL) << (((((/* implicit */int) var_0)) - (498)))));
    var_13 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [(unsigned short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7346)) ^ (max((max((var_8), (((/* implicit */int) arr_0 [(short)6] [(unsigned short)12])))), (((((/* implicit */_Bool) arr_3 [0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)58181))))))));
                arr_7 [1] [2U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13442449958625065137ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (min((5004294115084486468ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)73)) << (((((/* implicit */int) (signed char)-99)) + (108))))))))));
                arr_8 [13LL] [13ULL] [(unsigned short)4] = min((((/* implicit */signed char) (!(((/* implicit */_Bool) (~(3066562348U))))))), (((signed char) var_2)));
            }
        } 
    } 
}
