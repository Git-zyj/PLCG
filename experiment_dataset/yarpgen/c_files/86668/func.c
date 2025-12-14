/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86668
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35272))))) | (var_1)))) && (((/* implicit */_Bool) var_8))));
    var_20 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (1127923717) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-12578))))) : ((-(4294967290U))))))));
                                arr_14 [i_0] [i_0] [i_0] [5ULL] [9] [i_3] = ((/* implicit */unsigned short) ((17042430230528ULL) | (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [7U] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_1] [i_1])))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5857))) % (var_2))) - (7893821292917413087ULL))))))));
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = arr_0 [i_1] [i_1];
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((((/* implicit */_Bool) (short)-18633)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32040)) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)26650))))))))) : (9782642854210456767ULL));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (short i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned short i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_33 [i_8] = ((/* implicit */short) arr_32 [i_8 - 1] [i_6 + 1] [i_6 + 1]);
                                arr_34 [i_5] [i_8] [i_5] [(short)15] [18ULL] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1127923723)) ? (((((/* implicit */int) (short)26630)) ^ (((/* implicit */int) min((var_15), ((short)5850)))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) -286406531))))), ((+(((/* implicit */int) arr_28 [i_5] [i_5] [i_7] [i_8 + 1]))))))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_5] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_5] [i_5]) ^ (((/* implicit */unsigned int) arr_6 [i_5])))))))) <= (((/* implicit */int) ((unsigned short) arr_2 [i_5] [i_6 - 1])))));
            }
        } 
    } 
}
