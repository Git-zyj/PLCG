/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60854
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
    var_11 -= ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
    var_12 += ((/* implicit */unsigned int) ((short) var_1));
    var_13 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 18446744073709551600ULL)) ? (188455962456013611ULL) : (((/* implicit */unsigned long long int) 1354841474U))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_2]);
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((arr_4 [i_0] [i_1] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) || (((/* implicit */_Bool) (unsigned char)35))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_1] [i_2] [i_1] [i_0]));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            arr_15 [i_3] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [(_Bool)1]);
                            arr_16 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((arr_3 [i_3] [i_2] [i_0]) > (arr_3 [i_0] [(unsigned short)4] [i_3])));
                            var_17 &= ((/* implicit */unsigned int) arr_5 [(_Bool)1] [i_1] [i_2] [i_4 - 1]);
                            arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_10);
                        }
                        arr_18 [i_3] [i_0] = ((/* implicit */unsigned int) ((((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])))));
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) arr_21 [i_0] [i_1] [i_2] [i_0] [i_0]);
                            var_19 = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0]);
                            arr_25 [i_6] [(_Bool)1] [i_2] [i_5] [12ULL] = ((/* implicit */int) ((unsigned long long int) ((arr_14 [i_0] [i_1] [i_2] [i_5] [i_6] [18U]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))));
                            var_20 = ((/* implicit */_Bool) (unsigned char)241);
                            var_21 -= var_3;
                        }
                        arr_26 [i_5] [7LL] [i_1] [i_1] [i_0] [i_0] = ((_Bool) (+(arr_21 [i_5] [i_2] [i_1] [i_1] [i_0])));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)3))) ? (arr_13 [i_0]) : (((arr_4 [i_0] [i_0] [5ULL]) >> (((/* implicit */int) var_1)))))))));
        arr_27 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-8176187471787839049LL) < (-1LL)))) >> (((arr_23 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]) + (7908955468349139086LL)))));
    }
    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
    {
        arr_30 [i_7] [i_7] = ((/* implicit */signed char) var_2);
        var_23 = ((/* implicit */long long int) ((unsigned long long int) arr_12 [i_7] [i_7] [i_7] [i_7]));
    }
}
