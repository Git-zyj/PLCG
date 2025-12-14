/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70126
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
    var_10 = ((/* implicit */short) ((unsigned int) (-(min((1280021371U), (593866999U))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [(unsigned short)14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [4U]))))) & (1280021371U)));
                    var_11 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_0 [18U])) ? (var_5) : (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))) > (((/* implicit */unsigned int) arr_2 [(unsigned char)16] [(unsigned char)5])))) ? (max((((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (4268302885U) : (((/* implicit */unsigned int) arr_1 [(signed char)4] [(signed char)4])))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)-46)), (var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)5] [(unsigned char)5] [i_2] [i_3] [i_4] = ((/* implicit */long long int) arr_11 [i_0] [i_1] [(unsigned char)14] [(short)19] [(signed char)10]);
                                arr_15 [14LL] [14LL] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_2)), (min((0U), (((/* implicit */unsigned int) 805306368)))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [7] [i_1] [(unsigned char)0] [11U] [i_4] [i_3] [i_4])) ? (3014945915U) : (521671478U))) == (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                            }
                        } 
                    } 
                    arr_16 [14U] [i_1] [12] = min((((/* implicit */int) max((arr_13 [i_0] [(_Bool)1] [(unsigned short)5] [i_1] [(signed char)18] [i_0] [i_2]), (((/* implicit */unsigned char) arr_6 [(signed char)19] [15] [(signed char)13] [1]))))), (((var_8) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)15] [i_1] [15])) : (((/* implicit */int) arr_8 [i_0] [(unsigned char)2] [17LL] [(signed char)10])))));
                }
            } 
        } 
    } 
}
