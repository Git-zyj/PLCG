/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98278
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
    var_15 -= ((/* implicit */signed char) (-(0U)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(signed char)3] [i_1 + 2] [i_0 - 1] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1094843138630002277LL)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 1] [i_2 - 1])) : (((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 + 1] [i_2 - 1]))))) : ((~(2147483647)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_16 += ((/* implicit */int) arr_6 [i_3] [i_2 - 1] [i_1 - 2] [i_0 - 1]);
                        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2] [i_3])) ? (arr_5 [i_2 - 1] [i_2] [i_3]) : (arr_5 [i_2 - 1] [i_2 - 1] [i_2])));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (((((-(-1094843138630002270LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_11))) + (1094843138630002276LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))))));
    var_19 = ((/* implicit */unsigned char) var_3);
}
