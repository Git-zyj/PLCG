/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66927
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
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_9)), (((unsigned short) (-(((/* implicit */int) (signed char)66)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_18 = var_7;
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_19 -= ((/* implicit */_Bool) ((signed char) 135519215));
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
        }
        for (short i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (!((_Bool)0)))), ((unsigned short)28430)));
            var_21 = ((/* implicit */unsigned short) ((((unsigned int) ((1838252153) | (135519215)))) & (((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((unsigned char) (short)3840))))))));
            var_22 ^= ((/* implicit */long long int) ((unsigned short) (unsigned short)28424));
            var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */int) (unsigned short)37105)) < (135519205)))));
        }
    }
}
