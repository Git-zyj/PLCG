/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76552
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
    var_14 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (~(-6886885567060401824LL)))))), (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_5)) : (var_12))))))));
    var_15 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((short) ((((/* implicit */_Bool) ((arr_2 [1LL]) + (var_0)))) ? (((/* implicit */int) ((signed char) -2098756367))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
                        var_17 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_0]))) != (var_5))));
                    }
                } 
            } 
        } 
        arr_9 [1] [i_0 - 1] = ((/* implicit */unsigned char) ((signed char) 6886885567060401850LL));
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        arr_14 [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-6420256822328896347LL), (((/* implicit */long long int) var_1))))) ? ((~(arr_12 [i_4]))) : (((/* implicit */int) ((signed char) arr_12 [i_4])))));
        arr_15 [i_4] [(_Bool)1] = ((/* implicit */int) ((max((var_7), (((/* implicit */long long int) arr_11 [i_4])))) & (((/* implicit */long long int) min((((((/* implicit */_Bool) 6886885567060401850LL)) ? (((/* implicit */int) arr_11 [i_4])) : (arr_12 [i_4]))), (((/* implicit */int) max((var_9), (arr_11 [i_4])))))))));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) (+(var_7)))));
    }
}
