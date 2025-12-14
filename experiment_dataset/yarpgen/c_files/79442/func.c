/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79442
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
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (var_5)))) % (min((arr_4 [i_2]), (((/* implicit */long long int) arr_6 [2ULL] [i_1] [i_0]))))))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((8761733283840LL) <= (((/* implicit */long long int) 2035348852)))))));
                            var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [14ULL] [10LL] [i_3])) * (((/* implicit */int) var_0))))) ? (max((((/* implicit */long long int) (short)-4096)), (arr_3 [i_3]))) : (((/* implicit */long long int) (~(var_14)))))))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned short) ((signed char) var_13));
                var_18 = ((/* implicit */unsigned int) var_0);
                var_19 = ((/* implicit */unsigned short) var_4);
                arr_15 [(short)0] [(short)9] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)32481)), (var_1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max(((unsigned short)32475), (((/* implicit */unsigned short) (unsigned char)174))))), (min((((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))), (((/* implicit */unsigned long long int) var_6))))));
    var_21 = ((/* implicit */int) var_11);
}
