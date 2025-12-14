/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76303
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), (((long long int) ((((/* implicit */_Bool) -7811591321382829209LL)) ? (-7811591321382829229LL) : (((/* implicit */long long int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_3 [i_1 + 1] [i_1 - 1]))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]))) : ((-(arr_1 [i_1 + 2] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) ((var_11) & (((/* implicit */unsigned int) var_5))))));
                                var_18 = ((/* implicit */_Bool) arr_8 [(unsigned char)3] [i_1 + 3] [5] [5] [11]);
                                var_19 += ((((/* implicit */_Bool) (~(((unsigned int) (unsigned char)177))))) ? (((((/* implicit */_Bool) -626064366713845094LL)) ? (((/* implicit */long long int) var_5)) : (626064366713845093LL))) : (((/* implicit */long long int) var_6)));
                                var_20 = ((/* implicit */unsigned int) ((int) ((max((((/* implicit */long long int) 839866018)), (626064366713845093LL))) / (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)17), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [(unsigned char)10] [i_0] [i_2] [(_Bool)1] [i_4])))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_8 [i_4] [i_3] [7U] [i_1 + 3] [i_0]))) ? (((int) arr_9 [(short)11] [i_3 - 1] [i_1 + 3] [i_1 + 1])) : ((-(((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_3 + 1] [i_3 + 1])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        {
                            arr_19 [i_6] [i_0] [i_1 + 3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 626064366713845101LL)) ? (-7811591321382829229LL) : (2534994014142603624LL)));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [(short)4] [i_0] [i_6 - 1] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [12LL] [12LL] [i_6] [i_6 - 1] [i_1 - 2] [15LL])) : (((/* implicit */int) arr_12 [1U] [(unsigned short)6] [i_5] [i_6] [i_6 - 1] [i_1 - 1] [i_6 - 1]))))) < (max((((/* implicit */unsigned int) (unsigned char)184)), (var_6))))))));
                            arr_20 [i_6] [i_5] [i_1 + 1] [i_6] = arr_7 [(short)2] [i_5];
                            arr_21 [i_0] [i_0] [(unsigned short)1] [i_6] = ((/* implicit */unsigned int) ((int) (short)32760));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = (+(((/* implicit */int) (signed char)(-127 - 1))));
    var_24 ^= ((/* implicit */_Bool) var_11);
    var_25 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (var_9)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (4470407918132869338ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) (_Bool)0))))) ? (-7811591321382829194LL) : (((/* implicit */long long int) ((unsigned int) var_3))))))));
}
