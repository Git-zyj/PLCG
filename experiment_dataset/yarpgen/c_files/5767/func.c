/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5767
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1ULL)) || (((/* implicit */_Bool) 100217968U)))) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || (((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_1))))) && (((/* implicit */_Bool) 596966483U))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 *= ((/* implicit */int) (!(((/* implicit */_Bool) 596966497U))));
                                arr_16 [(unsigned short)3] [i_1] [i_2] [i_2] [(signed char)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (3698000825U) : (0U)))) : (max((arr_1 [i_4]), (((/* implicit */unsigned long long int) arr_6 [10LL] [(unsigned char)5] [i_2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -1056208103)) : (arr_11 [i_0] [i_1] [i_2] [i_0] [i_2])))) ? (((/* implicit */long long int) arr_12 [(unsigned short)16] [i_2] [i_3] [i_2])) : (max((-580195334955733421LL), (((/* implicit */long long int) 1393063725U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (-9223372036854775807LL)))) ? (((((/* implicit */unsigned int) 2147483647)) * (arr_4 [i_0] [i_2] [i_0]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-16178)) : (((/* implicit */int) (short)8501))))))))));
                                var_13 = ((unsigned short) min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_4] [i_1] [13LL])))))));
                                arr_17 [(unsigned short)10] [i_4] [i_0] &= ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */signed char) (((((~(1841896720462456942ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [1ULL] [1ULL] [2U] [1ULL]))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-20665)) / ((~(((/* implicit */int) var_7)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        arr_26 [i_6] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 3673745446657403204ULL)) ? (((/* implicit */unsigned int) 384244295)) : (2311144793U))));
                        arr_27 [i_6] [2U] [i_6] [i_7] [(unsigned short)1] [i_7] = (((+((+(var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_5] [i_6] [i_6]))));
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_32 [i_8] [(short)6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_5] [i_6 + 1] [i_6]))) ? (arr_22 [i_8] [i_6 + 2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) > (3497968809U)))))));
                            arr_33 [i_6] = ((/* implicit */unsigned short) ((9223372036854775807LL) | (((/* implicit */long long int) ((((/* implicit */unsigned int) -2147483647)) | (1789757116U))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_15 -= ((/* implicit */unsigned long long int) (signed char)73);
}
