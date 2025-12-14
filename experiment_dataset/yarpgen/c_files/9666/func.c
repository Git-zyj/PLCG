/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9666
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
    var_19 = ((/* implicit */unsigned int) ((signed char) var_10));
    var_20 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3802678347U)))))) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (var_17)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((unsigned int) (+(((/* implicit */int) var_1))));
                            var_21 *= ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_10))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 317426472019364979ULL)) || (((/* implicit */_Bool) 725666715))));
                        var_23 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 3802678359U)) ? (79129972) : (((/* implicit */int) (signed char)34))))));
                    }
                    var_24 |= ((/* implicit */int) var_4);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_17)))) ? ((-(-1220110781))) : ((-(1946038809)))));
                    arr_19 [i_0] [i_0] [i_0] [i_4 + 3] = ((/* implicit */unsigned long long int) ((unsigned int) -1));
                }
            }
        } 
    } 
}
