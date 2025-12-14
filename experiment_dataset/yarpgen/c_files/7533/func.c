/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7533
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_7 [i_2] [i_1])))));
                    arr_10 [7ULL] [i_2] [i_0] = ((/* implicit */signed char) ((arr_8 [i_0] [i_1] [i_1] [i_0]) ? ((+(arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) max((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_14 [i_2] [i_3] [i_2] [2LL] [i_1] [i_1] [i_2]))))))));
                            arr_15 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (2863738020032440737LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3] [i_1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] [(short)0])))))) || (((/* implicit */_Bool) 18446744073709551599ULL)))))) % ((((((_Bool)1) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) arr_5 [i_5] [(unsigned char)0] [i_1] [i_0])) : ((+(var_9)))))));
                            arr_18 [i_0] [i_1] [i_2] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_0] [i_0])))));
                            arr_19 [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) 7906284317761513244LL));
                        }
                        var_15 += ((/* implicit */unsigned int) arr_14 [i_3] [i_1] [(signed char)2] [i_2] [i_3] [i_1] [i_3]);
                        arr_20 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_2])))) > (min((arr_11 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */long long int) var_8)))))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_10)));
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) ((_Bool) -1313433792616680181LL)))))));
        arr_23 [i_6] [(signed char)8] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((long long int) (signed char)40)))) ? (((((/* implicit */_Bool) (~(arr_2 [i_6])))) ? (max((25ULL), (((/* implicit */unsigned long long int) 1152690513)))) : (((/* implicit */unsigned long long int) (+(var_9)))))) : (((/* implicit */unsigned long long int) ((int) ((arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) & (arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
    }
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
}
