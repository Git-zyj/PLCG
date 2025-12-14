/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59627
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [(signed char)2] [(short)18] &= ((/* implicit */_Bool) ((unsigned int) (short)-16146));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)16146)) <= (((/* implicit */int) (short)-16148))));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) min((((4294967272U) * (((((/* implicit */_Bool) 33U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16146))) : (1404676941U))))), (((/* implicit */unsigned int) (short)16150))));
        var_19 = ((unsigned short) (short)-16158);
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)67)) > (((/* implicit */int) (unsigned short)43571)))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */signed char) min((((/* implicit */int) (short)-23514)), ((+(((/* implicit */int) (_Bool)1))))));
                arr_14 [i_3] [i_3] [(unsigned short)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)4096)), (4294967278U)));
                arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)8047)), (2158100729U)));
                arr_16 [i_3] [i_2] [i_3] = ((/* implicit */short) ((unsigned int) 4294967272U));
            }
        } 
    } 
}
