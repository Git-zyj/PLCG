/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87086
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
    var_11 = ((/* implicit */unsigned short) (+(-1570979108)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) var_1);
                var_13 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((int) (+(-1570979107)))))));
                            var_15 = ((/* implicit */unsigned short) var_1);
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_1] [i_1])), (min((var_6), (((/* implicit */unsigned long long int) (short)-4689)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)9] [i_1])) ? (-1570979127) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */unsigned long long int) max((1570979116), (-1570979106)))) : (arr_2 [i_3 - 1] [i_3 - 1])))));
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)122))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) (+(3570898838U)));
                                arr_18 [i_0] [i_0] [(signed char)17] [i_1] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_3 + 1] [i_3 + 1] [i_3]))), (max((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (short)-4700))))), (((((/* implicit */_Bool) (short)4699)) ? (((/* implicit */int) (short)-4699)) : (((/* implicit */int) var_0))))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_9)) ? (-1934168566507166461LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (short)-4682)))) < (((/* implicit */int) ((724068457U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))))) : (((((/* implicit */_Bool) ((5297686684071463528LL) ^ (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_1] [i_2] [i_4]))) | (724068439U)))) : (arr_11 [i_3 + 1] [i_4] [i_3 - 1] [(unsigned short)0] [i_3 + 1] [i_3]))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (!(((-1570979134) < (-1570979133)))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)42644)) ^ (1570979099))) / ((+(((/* implicit */int) (signed char)85))))))) ^ (((arr_6 [i_3] [i_3 - 1] [(unsigned short)12]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0])))))));
                                arr_24 [i_0] [i_1] [(unsigned short)10] [i_3] [i_5] &= ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                                var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = min((((/* implicit */int) var_8)), (-1570979099));
}
