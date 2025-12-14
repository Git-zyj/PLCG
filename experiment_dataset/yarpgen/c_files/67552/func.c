/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67552
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
    var_19 = ((/* implicit */long long int) var_15);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)18))))) ? (1879048192U) : (((/* implicit */unsigned int) 1107985894))))));
                    arr_9 [i_0] [i_1] [4ULL] = ((/* implicit */unsigned short) (short)-32540);
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))))), (((/* implicit */unsigned int) (unsigned char)156))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_3] = ((/* implicit */short) arr_2 [16]);
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_1 [20] [i_2])) == (65520)))) >> (((((/* implicit */int) arr_3 [i_1])) + (1628))))))));
                        var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) (+(var_6)))))), (((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) var_10))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (min((905470364U), (((/* implicit */unsigned int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1859)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [11] [i_3]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [24] [24] [i_2] [i_3] [(unsigned short)24] [6U])))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [10LL] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_4] [i_1]))));
                        arr_16 [i_2] [i_1] = ((/* implicit */unsigned short) var_17);
                    }
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 261120U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254))));
                        arr_19 [21] [i_2] [(short)15] [(short)15] = ((/* implicit */short) ((arr_13 [i_1]) > (((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1)))))))));
                        arr_20 [i_0] [i_0] [(short)19] [i_2] [i_2] [12U] = ((/* implicit */long long int) (+(((((/* implicit */int) (signed char)-57)) & (((/* implicit */int) max(((unsigned char)232), ((unsigned char)156))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1495802794352129505ULL))));
                        arr_24 [0] [i_2] [0LL] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) min((((((/* implicit */int) (signed char)87)) >> (((arr_14 [i_6] [i_2] [i_1] [i_0]) - (7731719066091777551LL))))), (((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [11]))))))) + (arr_7 [i_2] [i_2] [i_2])));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32531)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (short)32761))))))) ? (((/* implicit */int) max(((short)-32540), (((/* implicit */short) (signed char)120))))) : (((/* implicit */int) (short)15))));
}
