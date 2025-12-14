/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77668
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
    var_16 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-20234)))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) arr_7 [22U] [i_0]))) == (((/* implicit */int) (short)20256))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2U)), (var_2)))))))));
                var_17 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (2143611641U))), (664322190U))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_10)), (-3789606498566202308LL))), (((/* implicit */long long int) (unsigned char)1))))) && (((/* implicit */_Bool) (unsigned char)71))));
                arr_9 [i_0] = arr_6 [i_0] [i_0];
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((((unsigned int) arr_12 [i_2] [i_2])) << (((778129808475971070ULL) - (778129808475971053ULL))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (4463986673547047908LL)))) ? (var_10) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3])) != (arr_12 [i_3] [2U])))))))));
                arr_14 [i_3] = ((/* implicit */unsigned int) var_12);
                arr_15 [i_3] = -8081625135533680009LL;
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20234)) ? (arr_11 [i_2]) : (((/* implicit */int) arr_0 [6ULL] [6ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3733129489U)) / (arr_6 [i_2] [i_3])))) : (((arr_0 [i_2] [i_2]) ? (arr_4 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) (short)-20239)) : (((/* implicit */int) (unsigned char)0))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_21 [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))) ^ (7386450465268130974ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [0LL] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [7ULL] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_16 [i_3] [i_4] [i_3]))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)147)), (8081625135533680031LL)))) && ((!(((/* implicit */_Bool) arr_6 [i_2] [i_4])))))))));
                            var_22 = ((/* implicit */unsigned int) arr_10 [i_4]);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_4 [i_5] [(_Bool)1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (_Bool)0);
}
