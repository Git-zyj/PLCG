/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89720
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
    var_17 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((4294967284U) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4294967285U)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((((((/* implicit */_Bool) 396548875U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) + ((-(((/* implicit */int) arr_1 [i_0])))))))))));
        arr_3 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) arr_2 [i_0]))))))))));
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 3])) <= (((/* implicit */int) var_1)))))));
        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)348))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-127)))))));
    }
    for (long long int i_1 = 3; i_1 < 10; i_1 += 3) 
    {
        arr_7 [i_1] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)10)) < (((/* implicit */int) (_Bool)1)))))));
        arr_8 [i_1] |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1]))) : (arr_6 [i_1])))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 3097666821510913525LL))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_2]))) % (((/* implicit */int) var_6))))))));
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 11U)) ? (3097666821510913525LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)348)))))))) ? (((unsigned int) ((((/* implicit */_Bool) (unsigned short)809)) && (var_6)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2] [i_2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_13 [i_3])))));
        var_23 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (6100614542284337176LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
        arr_16 [i_3] = ((/* implicit */short) (+(max((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-14855)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_13 [i_3])) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        arr_17 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3])) + (((/* implicit */int) arr_14 [i_3])))))));
        var_24 = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))), (((long long int) (unsigned char)102))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 23; i_4 += 3) 
    {
        var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) && ((!(((/* implicit */_Bool) var_9))))))));
        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
    }
    var_27 &= ((/* implicit */unsigned short) (_Bool)0);
    var_28 = ((/* implicit */_Bool) var_9);
}
