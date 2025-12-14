/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68792
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
    var_12 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (var_6)))), (var_11));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) min((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_4 [i_0] = min((min((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) 1892623304)))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) (short)28177))))) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) 1728590432))))) ? (((/* implicit */int) (short)17255)) : ((+(((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) -2001480238)) ? (-1200991604) : (((/* implicit */int) (short)127))))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) (short)-11979);
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_13 [i_1] = ((/* implicit */int) ((short) arr_10 [i_1] [i_2]));
            arr_14 [i_1] = ((/* implicit */long long int) (+((+(arr_12 [i_1])))));
            arr_15 [i_1] [i_2] [i_2] = ((/* implicit */long long int) max((-1892623304), (((/* implicit */int) ((_Bool) (short)28177)))));
            arr_16 [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) min((536346624U), (4160749568U)))) ? (var_5) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */long long int) max(((~(((/* implicit */int) arr_9 [i_1] [i_2])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_19 [i_1] [i_1] [i_1] = (~(arr_18 [i_3] [i_3] [i_3]));
            arr_20 [i_1] [i_1] = (-(((/* implicit */int) ((_Bool) min((var_10), (288230376151711743LL))))));
            arr_21 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) min(((short)-28181), ((short)-28177)))))) ? (((((/* implicit */int) var_8)) << (((arr_10 [i_1] [i_3]) + (1188079326))))) : ((~(((/* implicit */int) arr_17 [i_1] [i_3]))))));
        }
        arr_22 [i_1] [i_1] = ((/* implicit */int) min(((-(((((/* implicit */long long int) -2032349650)) & (arr_7 [i_1]))))), (((/* implicit */long long int) min(((((_Bool)1) ? (arr_12 [i_1]) : (-2001480217))), (var_7))))));
        arr_23 [i_1] [i_1] = ((unsigned short) (_Bool)1);
        arr_24 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)7627)) & (-1892623303)));
    }
    var_13 = ((/* implicit */unsigned int) (+((-(var_11)))));
}
