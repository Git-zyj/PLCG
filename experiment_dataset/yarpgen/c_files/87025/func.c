/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87025
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) min(((unsigned char)157), ((unsigned char)243)))), (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */short) (unsigned char)243)), ((short)31408))), (((/* implicit */short) ((unsigned char) var_18))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (max((var_14), (((/* implicit */unsigned long long int) (unsigned char)243))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-113)) - (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (268435455) : (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */int) min(((signed char)-46), ((signed char)-113)))) : (((((/* implicit */_Bool) 2950145293714139452LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : (max((((939524096) - (((/* implicit */int) (unsigned short)31892)))), (((int) arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_22 = min((((((/* implicit */int) ((_Bool) arr_0 [i_0]))) & (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)113)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)100)))))));
                        var_23 = ((/* implicit */_Bool) ((int) ((short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_2 [i_0] [i_0])) - (55)))))));
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0]))));
    }
    var_25 = ((/* implicit */int) var_4);
    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 2950145293714139452LL))) | (var_15)));
    var_27 = ((unsigned char) ((signed char) max((var_12), (((/* implicit */unsigned long long int) -1631152039)))));
}
