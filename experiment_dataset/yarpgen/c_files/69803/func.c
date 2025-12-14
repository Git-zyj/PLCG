/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69803
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
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] = (~(((arr_0 [i_0 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 *= max((((/* implicit */int) ((-9223372036854775790LL) <= (var_10)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_1] [2LL] [i_2 - 1] [i_2] [i_4])) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [(_Bool)0] [i_2 - 1] [i_2 - 1] [i_2])))));
                                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_1);
                                arr_15 [i_3 + 3] [i_1] [i_2] [i_1] [i_2] [i_0 - 1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [8LL] [i_7])), ((+(var_2))))))));
                                arr_24 [15] [15] [15] [i_1] [i_7] = ((/* implicit */signed char) var_11);
                                arr_25 [i_1] [0ULL] = (~(min((((/* implicit */int) arr_22 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 3] [i_0 + 1])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)253)))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [8] [i_0 + 3] [i_0] [i_0]))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1707233946)) ? (-662136872508564881LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42010))))))));
            }
        } 
    } 
}
