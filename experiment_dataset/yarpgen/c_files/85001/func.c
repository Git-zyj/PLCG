/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85001
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
    var_13 = ((/* implicit */short) (~(((/* implicit */int) ((max((var_4), (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) -972061430);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1718101814U))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [5ULL] = ((/* implicit */unsigned short) (~(((((long long int) arr_4 [i_1] [i_0])) / (((/* implicit */long long int) var_1))))));
                            var_15 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((int) 268435455))) ? (var_11) : (((arr_8 [(unsigned short)0] [i_3] [i_0]) | (((/* implicit */int) var_10))))))));
                            arr_15 [i_0] [i_0] [(_Bool)1] [i_0] [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1])) - (((/* implicit */int) arr_12 [i_3] [2] [i_3] [2] [i_3 + 1]))))));
                        }
                        arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_2] [i_2] [(signed char)14] [(signed char)14]))))) >= (((((/* implicit */_Bool) 7103406220361796942LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (709899318U)))));
                        var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : ((~(3585067978U))));
                    }
                    var_18 |= ((/* implicit */int) var_4);
                }
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) (((~(var_8))) & (((/* implicit */unsigned long long int) (~(var_6))))))) ? (max((min((13371210743666419765ULL), (((/* implicit */unsigned long long int) (signed char)96)))), (((/* implicit */unsigned long long int) ((int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
}
