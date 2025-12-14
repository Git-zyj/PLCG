/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61539
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = min(((+(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 3])))), (((/* implicit */int) min(((unsigned char)3), ((unsigned char)3)))));
                var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (unsigned char)3))))) ? (((/* implicit */unsigned int) var_19)) : (max((min((0U), (((/* implicit */unsigned int) (unsigned char)12)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)127)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_22 = arr_9 [i_2];
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_3]);
            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2])))) >> (((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_3])), (var_4)))) - (18972)))))));
        }
    }
}
