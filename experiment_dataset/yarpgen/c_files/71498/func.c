/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71498
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_5)))) | (((/* implicit */int) ((_Bool) var_11)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (2634800178U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                var_14 = max((((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4267))) : ((+(var_10))))), (((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2 + 2] = ((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2 + 2] [i_2 - 1])) + (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_6 [i_1]) : (((/* implicit */int) var_5)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_12 [(unsigned short)10] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) (+((+(arr_6 [i_0])))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) var_11))) < (((unsigned int) arr_2 [i_0]))));
                        arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                        var_16 = ((/* implicit */int) var_8);
                    }
                    for (signed char i_4 = 1; i_4 < 24; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) (-(arr_14 [i_0])));
                            arr_20 [6U] [i_0] [i_0] [i_2] [4] [i_4 + 1] [i_5] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_17 [i_5] [i_4 - 1] [i_2] [i_1] [i_0]))))));
                            var_18 &= ((/* implicit */unsigned char) ((int) (~(arr_18 [i_0] [i_1] [i_2] [(_Bool)1] [i_1]))));
                        }
                        arr_21 [(_Bool)0] [i_0] [i_1] [(_Bool)1] [(_Bool)0] [i_1 - 1] = ((/* implicit */long long int) ((_Bool) arr_7 [i_1] [21U] [i_2] [i_1 - 2]));
                        arr_22 [i_0] [i_0] [i_2 - 1] [i_4 - 1] [i_0] = (+(((/* implicit */int) var_0)));
                        var_19 *= ((/* implicit */signed char) ((unsigned char) ((unsigned int) (short)-20876)));
                    }
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -722546145)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_1 [i_0] [i_1]))));
                    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_1] [i_1] [i_0])) <= (((/* implicit */int) arr_7 [5] [i_1] [5] [(_Bool)1])))))));
                    var_22 = ((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_1 + 3] [i_1 - 1]);
                }
            }
        } 
    } 
}
