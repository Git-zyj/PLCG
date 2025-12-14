/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79207
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
    var_16 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_17 &= ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))) != (5365407903080621446ULL)))));
        var_18 -= ((/* implicit */short) (((+(5365407903080621446ULL))) & (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) + ((+(var_5)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            {
                arr_10 [i_1 + 1] [i_2] [i_2 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (((long long int) (unsigned char)68))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) -1060482683))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 2]))) % (13081336170628930169ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            arr_16 [(_Bool)1] [i_2] [i_2 - 1] [i_3] [(unsigned short)23] = ((/* implicit */unsigned int) arr_2 [6LL]);
                            arr_17 [9ULL] [(_Bool)1] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_6)))) - (((/* implicit */int) arr_3 [(unsigned char)2]))));
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))) != (((/* implicit */int) ((arr_7 [20ULL] [(_Bool)1]) && (((/* implicit */_Bool) 13081336170628930170ULL))))))) ? (((/* implicit */int) arr_11 [(unsigned char)12] [i_4] [i_2])) : (max((((((/* implicit */int) arr_3 [(unsigned short)3])) - (((/* implicit */int) var_1)))), (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
