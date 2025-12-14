/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68030
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [(short)11] [10LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) == (((min((var_14), (((/* implicit */unsigned int) arr_1 [6LL] [i_0])))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238))))))))));
                arr_8 [i_0] |= ((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1] [6U]);
                var_17 = ((/* implicit */unsigned long long int) var_13);
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned short) (short)-27051)))));
                var_19 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (-244228180) : (((/* implicit */int) ((short) (short)-27048)))))))));
}
