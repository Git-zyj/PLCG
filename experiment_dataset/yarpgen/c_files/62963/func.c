/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62963
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) > (((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) max(((unsigned short)16110), (((/* implicit */unsigned short) var_5)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) var_2);
                        arr_12 [i_0] [i_1 + 1] |= ((/* implicit */_Bool) (unsigned short)49426);
                        var_12 = ((/* implicit */unsigned int) arr_4 [i_3] [(short)5] [i_1]);
                        var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 3] [i_1])) || (((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 1])) + ((+(((/* implicit */int) var_5))))));
        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)190)) ? (((/* implicit */int) (unsigned short)43420)) : (((/* implicit */int) (_Bool)1))));
        arr_13 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43833)) ? (((/* implicit */unsigned int) 1366738659)) : (2107088073U)));
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        arr_19 [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_4 + 2]));
        var_16 = ((/* implicit */unsigned long long int) (~(var_2)));
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_6))));
    var_18 = ((/* implicit */unsigned int) var_8);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_2)), (var_10))), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)6626)))))))) : (var_6)));
}
