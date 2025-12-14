/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68681
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = (~(((/* implicit */int) (_Bool)1)));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((min((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-32751)))), (arr_1 [i_0]))) + (2147483647))) >> ((((+(var_12))) - (263476860564449620LL)))));
        arr_4 [i_0] = ((/* implicit */long long int) min(((((-(((/* implicit */int) (_Bool)1)))) - ((-(var_5))))), (((/* implicit */int) ((((/* implicit */_Bool) (-(var_12)))) || ((_Bool)1))))));
        var_14 = ((/* implicit */int) min((var_14), ((~((-(((/* implicit */int) (signed char)-70))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_11))))));
                    var_16 *= ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2977639417U))))) : (((/* implicit */int) arr_5 [0LL])));
                    arr_13 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-18942)) ? (((/* implicit */int) arr_5 [i_2 + 2])) : (((/* implicit */int) (signed char)-37))))));
                }
            } 
        } 
        var_17 -= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [2LL] [2] [i_1] [0])));
        arr_14 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1]))));
    }
    for (int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((8678829464899311070LL), (var_8))))))), (2977639431U)));
        arr_17 [i_4] [i_4] = ((/* implicit */int) arr_16 [i_4]);
    }
    for (int i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
    {
        arr_20 [(unsigned char)10] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5 + 2]))));
        var_19 = ((/* implicit */int) ((3487101432U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) : (807865848U)))) ? ((~(((/* implicit */int) (signed char)-67)))) : (((/* implicit */int) var_7)))))));
        var_20 = ((/* implicit */unsigned char) max((2977639423U), (3782234602U)));
    }
    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)15125))))) - (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_9)))))))) < (var_12)));
    var_22 = ((/* implicit */long long int) var_6);
    var_23 = (+(max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_5)) : (var_12))), (((/* implicit */long long int) max(((short)15125), (((/* implicit */short) (signed char)50))))))));
}
