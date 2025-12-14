/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67143
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
    var_11 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_0)) * (min((2121421104), (((/* implicit */int) (short)-23902)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)250))), (arr_0 [i_0])));
        arr_4 [12U] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_2 [i_0] [i_0])))), ((~(((/* implicit */int) var_0))))))), ((~((~(arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [(unsigned short)4] [i_2 + 3] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)50))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
                        {
                            arr_14 [i_2] [(unsigned short)0] [i_3] [i_4 - 1] = ((/* implicit */short) ((unsigned char) 2462907417U));
                            arr_15 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23901)) ? (((/* implicit */unsigned long long int) ((-5454210645524146053LL) & (-2481299298640966411LL)))) : (arr_13 [i_1 - 2] [i_1 - 1] [i_1 - 2])));
                            arr_16 [i_2] [i_2 + 2] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0] [i_1]))));
                            arr_17 [i_0] [i_1 + 2] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_1 [i_3 - 1]));
                            arr_18 [i_0] [i_1] [i_1 - 1] [i_2 + 2] [i_2] [i_4 - 1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (short)23894)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)254)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            arr_23 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 - 2] [i_3 + 1]))));
                            arr_24 [i_2] [i_2 + 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65519)) >= ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (short)32767)) - (32767)))))));
                            arr_25 [i_5] [i_0] [i_3] [i_2 - 1] [i_0] [i_0] = ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-25589))));
                        }
                    }
                } 
            } 
        } 
        arr_26 [(unsigned char)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)226))));
    }
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 2462907417U)), (1008806316530991104LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) * (min((((var_6) ? (12377576139635795674ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1718))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) & (15534890750177654407ULL)))))));
}
