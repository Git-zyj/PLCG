/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59071
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_20 += (unsigned short)40274;
        var_21 = ((/* implicit */unsigned char) max((arr_1 [i_0]), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 2])) & (((/* implicit */int) (unsigned short)40671))))));
                    arr_8 [i_0] [i_0] = arr_4 [i_0] [0];
                    var_22 &= ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]);
                    arr_9 [i_0] [i_1 - 2] [i_0] = ((/* implicit */short) 1288552559);
                    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24883)) ? (((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) : (var_10)))) ? (min((((unsigned int) (unsigned short)24857)), (((/* implicit */unsigned int) -316349202)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_24 *= ((/* implicit */unsigned char) arr_3 [i_3] [i_3]);
        var_25 += ((/* implicit */int) ((unsigned char) arr_2 [i_3] [i_3] [i_3]));
        arr_13 [i_3] = ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_11))))) * (((((/* implicit */int) (unsigned short)24865)) | (((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3])))));
        var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)0)) : (arr_10 [4] [i_3])));
    }
    var_27 = ((/* implicit */short) (~((~(((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)24883))))))));
}
