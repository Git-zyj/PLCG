/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98622
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)4)) | (((/* implicit */int) (signed char)-4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)132))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned char) (signed char)16)))))) >> (((((/* implicit */int) (unsigned char)32)) - (27)))));
                arr_8 [i_0] [i_0] = ((/* implicit */int) var_0);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_0 [i_2])))))))) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) < (((/* implicit */int) ((signed char) (signed char)4)))))))))));
        var_18 = ((/* implicit */long long int) var_7);
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (short)32736)) != (((/* implicit */int) arr_6 [i_2] [i_2])))))) <= (((/* implicit */int) var_6))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) min((arr_5 [i_2 + 1] [i_2 - 1] [i_2]), (arr_5 [i_2 - 2] [i_2] [i_2]))))));
    }
}
