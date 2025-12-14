/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62445
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
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_12 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)61431))));
                var_13 = ((/* implicit */short) (((~(((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) != (((/* implicit */int) ((signed char) min((arr_1 [i_0 - 1] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0 - 1]))))))));
                arr_5 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 2])))) * ((+(((/* implicit */int) var_11))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 2] [i_0])) ? (arr_7 [i_0 - 3] [i_0 - 1] [i_0]) : (arr_7 [i_0 + 1] [i_0 - 3] [i_0])))) ? ((~(arr_7 [i_0 - 1] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 2] [i_0])) ? (arr_7 [i_0 + 1] [i_0] [i_0]) : (arr_7 [i_0 - 2] [i_0 - 1] [i_0])))));
                            arr_11 [i_0] = ((/* implicit */unsigned char) ((long long int) ((int) (unsigned short)4130)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 ^= ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_4)))));
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
    var_16 = ((/* implicit */int) (unsigned short)61420);
}
