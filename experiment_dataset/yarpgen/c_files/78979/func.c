/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78979
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
    var_17 = ((/* implicit */signed char) min((max((min((979779683U), (var_12))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned short) var_16))))))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-69)), ((short)-27184))))));
    var_18 = ((/* implicit */unsigned int) min((min((((/* implicit */int) var_15)), (var_5))), (var_5)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) max((var_16), (((/* implicit */short) var_15))))), (min((var_14), (((/* implicit */long long int) var_16)))))));
        arr_4 [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned short) (short)-27184)), ((unsigned short)65535))), (max((var_11), (((/* implicit */unsigned short) (unsigned char)143))))));
        arr_5 [i_0] [i_0] = var_0;
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) max((((long long int) var_11)), (((/* implicit */long long int) var_11)))));
            arr_13 [i_1] [i_1] = ((/* implicit */short) var_2);
            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned char) var_0)), (var_10))))), (max((((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_13))))), (max((((/* implicit */unsigned int) var_10)), (var_12)))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) ((int) var_13))))))));
        }
        arr_14 [i_1] = ((/* implicit */unsigned long long int) max(((unsigned char)50), ((unsigned char)184)));
    }
    var_22 = ((/* implicit */short) var_5);
}
