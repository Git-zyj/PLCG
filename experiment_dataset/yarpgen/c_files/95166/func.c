/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95166
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((~(8965412883274161597ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) arr_1 [i_0])))))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) min((((((/* implicit */int) ((short) var_5))) & (((/* implicit */int) arr_1 [10ULL])))), ((-(-1175458740))))))));
        var_12 += ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 = ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16736)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_4] [i_4]))));
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(var_10))))))));
    var_16 ^= ((/* implicit */int) var_0);
}
