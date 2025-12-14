/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6613
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
    var_11 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))))), (((/* implicit */long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= ((((((_Bool)1) ? (((/* implicit */long long int) arr_4 [i_0] [i_1 - 2])) : (var_7))) | (((/* implicit */long long int) ((int) arr_3 [i_0] [i_1])))))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_2 [i_0 + 1]) | (((/* implicit */int) var_3))))))) ? (arr_4 [i_0] [i_1]) : ((~(arr_2 [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (signed char)127);
                            var_15 = ((/* implicit */_Bool) (-(((unsigned long long int) arr_8 [i_0 + 1] [i_1 + 4] [i_3 + 1] [i_3 + 1]))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8767773834553801505LL)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (_Bool)1))))) ? ((-(1542402508705361911LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) <= (((/* implicit */int) (_Bool)0))))))) : (arr_5 [i_0] [i_1 - 1]))))));
                            var_17 = ((/* implicit */unsigned short) 2270000562948321291ULL);
                            arr_11 [i_0 + 1] [i_2] [i_1 - 1] [i_1 + 1] [i_2] [i_3 + 1] = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */_Bool) (short)27658);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (unsigned char)255);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3070911040612873018LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1853))) : (4071460433455992983LL)));
}
