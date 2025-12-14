/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75951
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
    var_12 |= var_2;
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (max((3U), (((/* implicit */unsigned int) (unsigned short)63708))))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)49))) : (((/* implicit */int) ((min((var_8), (((/* implicit */unsigned int) var_7)))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
        arr_5 [i_0] = ((/* implicit */int) max(((~(arr_2 [i_0]))), (((arr_2 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)1828))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49320))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) var_10);
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) (((!(((((/* implicit */long long int) 3948975011U)) != (-6132024592776284034LL))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1]))) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (max((((/* implicit */unsigned long long int) var_3)), (arr_7 [i_1] [i_1])))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) 1927794513U))));
        arr_12 [i_2] = ((/* implicit */unsigned short) min((max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 2147483647)) * (((((/* implicit */unsigned int) (-2147483647 - 1))) / (4281826159U))))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)16211)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23541))))), (((/* implicit */unsigned long long int) 1450626980U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)16383)) / (((/* implicit */int) (unsigned char)123))))))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_11 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2])))))));
        var_17 = ((/* implicit */signed char) ((arr_6 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (min(((~(arr_11 [i_2]))), (((/* implicit */unsigned int) 585765274))))));
    }
}
