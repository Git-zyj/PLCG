/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94700
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
    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) ((signed char) 3969051364U))) & ((~(((/* implicit */int) (unsigned char)202)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_6)))));
                    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) 2147483647));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)7))))))) / (((((/* implicit */int) (signed char)127)) >> (((/* implicit */int) ((_Bool) var_6)))))));
        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) == ((~(((/* implicit */int) max((var_9), ((signed char)-5))))))));
        var_18 = ((/* implicit */int) (unsigned short)23761);
        var_19 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 2] [i_3 + 1])) | (((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_3 - 1])))));
        arr_14 [i_3 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 3]))))) ? (((/* implicit */int) ((short) 4412378457352802253LL))) : (((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((/* implicit */int) ((-4412378457352802254LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56332))))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_20 = var_9;
        arr_19 [(unsigned char)11] [0LL] = ((/* implicit */_Bool) arr_2 [i_4] [(_Bool)1]);
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_1 [11U]))));
        arr_23 [i_5] &= ((/* implicit */signed char) var_11);
    }
}
