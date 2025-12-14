/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59060
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) (+(arr_1 [i_1 - 1] [i_2 - 1])));
                    var_14 -= ((/* implicit */unsigned short) arr_3 [i_0] [(unsigned short)3] [i_2]);
                }
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1]);
                    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)511))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((((/* implicit */_Bool) (unsigned short)41011)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)24525))))))) ? (max((((unsigned long long int) (unsigned short)41012)), (((/* implicit */unsigned long long int) 16LL)))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0] [i_0 - 1]))))));
                    var_18 = (+(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (unsigned char)251)), ((unsigned short)24541))))));
                }
                var_19 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned short)24524)))));
            }
        } 
    } 
    var_20 |= ((/* implicit */_Bool) var_11);
}
