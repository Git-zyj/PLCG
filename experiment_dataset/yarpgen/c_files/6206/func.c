/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6206
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_7 [i_1 + 1] [i_4 - 1] [i_0]))))) : ((((!(((/* implicit */_Bool) -1266695299809766374LL)))) ? (((/* implicit */int) (!(arr_5 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)20482)) || (((/* implicit */_Bool) (unsigned char)161)))))))));
                                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((arr_0 [i_1 + 1]) ? (((/* implicit */int) arr_5 [i_3] [i_0])) : (((/* implicit */int) var_8)))))))));
                                arr_15 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) (unsigned short)45051)) ? (((/* implicit */int) arr_4 [i_0] [i_3] [i_4 - 1])) : (((/* implicit */int) var_7))))))));
                                var_15 -= ((/* implicit */signed char) min((max((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_11 [i_0] [i_3] [i_0])))), ((((-2147483647 - 1)) < (((/* implicit */int) (short)-28877)))))), (((((/* implicit */int) min((var_6), (arr_0 [i_2])))) == ((+(((/* implicit */int) arr_0 [i_3]))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) (+(max(((~(8459303695208833951LL))), (((/* implicit */long long int) (_Bool)1))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)28)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(-949571379))))))));
}
