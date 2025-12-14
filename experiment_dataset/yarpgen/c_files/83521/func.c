/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83521
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) min(((-((-(4294967291U))))), (((/* implicit */unsigned int) ((unsigned short) max((var_0), (((/* implicit */unsigned long long int) var_4))))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)19)), (var_6))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0]))));
        }
        var_11 = ((/* implicit */signed char) (!((!(arr_5 [(_Bool)1])))));
    }
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_0), (var_0)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [(_Bool)1]))))))))))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1]))))), (min((((/* implicit */unsigned long long int) var_5)), (var_0))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_1 [i_2 - 1])))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 1])))))))));
    }
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (max(((-(((/* implicit */int) var_2)))), (((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
    var_16 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) 4294967291U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-11))))))))) == (((((/* implicit */_Bool) min((8380416U), (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) & (0ULL))) : (((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))))));
}
