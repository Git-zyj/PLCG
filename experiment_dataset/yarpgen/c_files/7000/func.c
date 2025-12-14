/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7000
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
    var_20 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)9)) : (arr_1 [i_0])));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) % (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) var_13)))));
        var_23 = ((/* implicit */unsigned short) ((int) var_16));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!((_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1])) < (((/* implicit */int) arr_4 [i_1 - 2]))));
        var_25 = ((/* implicit */_Bool) -277761361);
        arr_7 [(unsigned short)8] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned short) var_19))), (min((((/* implicit */unsigned int) max((var_16), (((/* implicit */int) arr_2 [i_2] [(unsigned short)17]))))), (min((((/* implicit */unsigned int) var_3)), (var_19))))))))));
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_9 [i_2]))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))), ((~(((/* implicit */int) (_Bool)0))))))) > (min((((/* implicit */unsigned int) var_8)), (min((((/* implicit */unsigned int) -532140647)), (var_15)))))));
    }
    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_15 [i_3] = ((/* implicit */_Bool) ((((unsigned int) var_3)) << (((((/* implicit */int) arr_14 [i_3])) - (10607)))));
            arr_16 [i_4] [(unsigned char)12] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_19)));
            arr_17 [(unsigned char)7] = ((((var_0) > (((/* implicit */int) var_5)))) ? (((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
        }
        var_29 ^= ((/* implicit */unsigned char) var_16);
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned int) ((unsigned char) (unsigned short)15140))))));
        var_31 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_3 - 2])) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_14))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) > (var_9))))))));
    }
}
