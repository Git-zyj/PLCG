/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86129
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
    var_11 *= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) / (((((/* implicit */_Bool) var_1)) ? (-300336544) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))))) != (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_2)))) : (min((4917316938351971337LL), (-4917316938351971338LL)))))));
                arr_7 [i_0] [6LL] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)27016)), (9U)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */int) (((+(9U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [(signed char)12])) <= (((/* implicit */int) var_3))))) - (((/* implicit */int) var_1)))))));
                            arr_12 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_4])) << (((/* implicit */int) arr_13 [i_4]))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) / (arr_14 [i_4])));
    }
}
