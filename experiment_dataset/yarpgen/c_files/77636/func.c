/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77636
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)-101)) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (3274836029665396853ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_0]))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-1320), (((/* implicit */short) (signed char)111)))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((arr_3 [i_3] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            arr_13 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) max(((_Bool)1), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) <= (18446744073709551615ULL)))));
                            arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((short) (signed char)114)))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_0))));
                            arr_21 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4226481640453211080LL)) ? (((/* implicit */int) (short)1314)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))) : (1256331454U)))), (((long long int) arr_18 [i_1] [i_1] [i_5 + 1] [i_5]))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 4095U))))), (((((/* implicit */_Bool) (short)22131)) ? (((/* implicit */int) (signed char)-82)) : (504427719))))))));
                arr_22 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-4226481640453211081LL) + (9223372036854775807LL))) << (((4226481640453211080LL) - (4226481640453211080LL)))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((long long int) arr_1 [i_0] [i_0])) <= (((/* implicit */long long int) ((((/* implicit */int) (signed char)95)) - (((/* implicit */int) (_Bool)0)))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)32)) ? (var_2) : (((/* implicit */int) var_8))))) : (min((((/* implicit */long long int) var_8)), (var_0)))))) ? ((+(((/* implicit */int) (unsigned char)99)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) == (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) & (4194304U))))))));
}
