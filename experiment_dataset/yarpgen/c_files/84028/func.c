/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84028
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24817))) : ((~(8135517144451617395LL)))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)57664)) : (((/* implicit */int) (short)-24815))));
                        var_18 = (~(-9223372036854775804LL));
                        var_19 = ((/* implicit */unsigned int) ((int) (short)16));
                    }
                    for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        arr_12 [i_0] [(unsigned short)5] [i_2] [i_2] [(_Bool)1] [i_4] = max((min((((/* implicit */long long int) (short)-3)), (-8135517144451617405LL))), (((/* implicit */long long int) (-(31271459)))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)224))) ? (((unsigned long long int) -7189889657926913844LL)) : (1462812571165653467ULL)))) ? (((unsigned long long int) ((((/* implicit */_Bool) 15916632570287953234ULL)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (short)-24817))))) : (((/* implicit */unsigned long long int) (~(-1797595423651197143LL))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) (-(5012108524217599949ULL)));
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (short)4718))));
                    }
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) var_12);
}
