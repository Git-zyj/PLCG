/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69807
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
    var_14 = ((/* implicit */unsigned long long int) max(((((-(var_4))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-4)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) 4897653445843033189LL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_16 = arr_8 [i_2 + 2] [i_2 - 1];
                    arr_10 [1U] [(unsigned char)5] [i_1 - 1] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) var_5))))))) | (14481231186219250889ULL)))));
                    arr_11 [i_0] [i_2 + 1] [i_2 - 1] [i_1 + 1] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_0 [i_2 + 2])))) * (((/* implicit */int) var_7))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) arr_5 [i_3]);
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)14997))))) * (((arr_6 [i_3]) - (arr_6 [i_3])))));
    }
    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 4) 
    {
        var_18 = ((/* implicit */long long int) (unsigned char)15);
        var_19 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
    }
    for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_22 [(unsigned short)14] = ((/* implicit */unsigned int) min((arr_21 [i_5 + 1] [i_5 + 1] [(short)1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) & (((((/* implicit */int) (unsigned short)63488)) & (arr_20 [(short)15] [16U]))))))));
            var_20 = ((/* implicit */_Bool) (+(min((arr_16 [i_5 - 1] [i_5 + 1]), (((/* implicit */int) var_7))))));
        }
        var_21 = ((/* implicit */int) ((max((((/* implicit */long long int) arr_18 [i_5 + 1])), (-4318607762474221371LL))) ^ (((/* implicit */long long int) arr_20 [(unsigned short)2] [i_5 - 1]))));
    }
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_2))));
}
