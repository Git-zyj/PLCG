/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93062
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_18)) : (((600273855375385403LL) << (((((var_8) & (((/* implicit */long long int) var_18)))) - (2150762781LL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) 600273855375385423LL);
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (~(6194913687448843164LL)));
                            arr_13 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) var_12);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((4431573918993839855ULL) != (var_4))))) != (var_18)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 2]);
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_4);
            }
            arr_15 [12ULL] [12ULL] [i_1] = ((/* implicit */long long int) var_11);
            var_24 = ((/* implicit */unsigned short) (-(6194913687448843172LL)));
        }
        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_25 |= ((/* implicit */signed char) var_16);
            arr_18 [i_0] = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((max((((/* implicit */unsigned long long int) var_17)), (var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_15))))))))));
        }
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_12)), (var_3)));
    var_28 = ((/* implicit */unsigned long long int) var_16);
}
