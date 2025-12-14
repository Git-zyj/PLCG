/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85283
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_0))))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_15))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_19 *= ((/* implicit */_Bool) (~((+(((/* implicit */int) var_4))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            arr_13 [i_2] [i_2 - 1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) arr_10 [(signed char)3])))));
                            var_20 += (~(((/* implicit */int) ((_Bool) var_7))));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) var_15)));
                            var_22 -= ((/* implicit */long long int) (+(((unsigned int) var_0))));
                            arr_17 [i_2] [i_2] [i_5] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) 9LL)));
                        }
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) arr_1 [(signed char)8]))))))));
                            arr_20 [i_2] [i_1 + 1] [i_2] [i_2 - 1] [i_2] [i_3] [i_6] = (!(((/* implicit */_Bool) ((unsigned char) 0ULL))));
                            arr_21 [i_0] [i_0] [i_2] [i_2] [1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 18446744073709551592ULL))))));
                            var_24 = ((/* implicit */_Bool) ((signed char) ((short) 18446744073709551592ULL)));
                        }
                    }
                    arr_22 [(unsigned short)3] [i_1 + 1] [i_2] = ((/* implicit */_Bool) ((unsigned short) (+(var_11))));
                }
            } 
        } 
    }
    var_25 = (+((-((+(29360128))))));
}
