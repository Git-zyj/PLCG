/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84934
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) max((((unsigned int) (_Bool)0)), (((((/* implicit */_Bool) 1226340488U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45528))) : (1847465768U))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_3 [i_4]))) || (((/* implicit */_Bool) arr_4 [i_0] [i_4]))));
                                var_12 = 6399927034289867896LL;
                                var_13 = ((/* implicit */signed char) max((0ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))));
                                arr_13 [i_0] [i_0] [(short)12] [(_Bool)1] = ((/* implicit */unsigned short) 2251799813681152ULL);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) (((~(((long long int) arr_12 [i_0] [i_0] [i_0] [5])))) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [(short)2])))));
                arr_14 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_1]);
            }
        } 
    } 
}
