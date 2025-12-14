/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59496
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned int) -1486333797))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (((((/* implicit */_Bool) 10379756591867597078ULL)) ? (arr_3 [i_0] [i_0] [(short)17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [3LL]))) : (arr_0 [i_0])))) : (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13048))))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) (unsigned short)20605)))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)15928)) == (((/* implicit */int) (unsigned char)119))));
                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_6))) || (((/* implicit */_Bool) min((arr_4 [5] [5] [i_1]), (((/* implicit */unsigned char) (signed char)-4))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_17 [(unsigned short)13] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) arr_8 [i_2 - 2])), (((((/* implicit */_Bool) 586792754)) ? (((/* implicit */int) (short)32256)) : (((/* implicit */int) arr_13 [i_2])))))));
                            arr_18 [i_2 - 1] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */unsigned char) arr_2 [i_2 + 1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32256)) / (-1486333797)));
}
