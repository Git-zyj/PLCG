/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98842
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((((/* implicit */int) var_1)) | (((/* implicit */int) var_4))))))), (max((var_10), (((/* implicit */long long int) ((int) var_19)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_0]))))))) % (((/* implicit */int) ((_Bool) max((arr_2 [i_0 + 1]), (arr_2 [4])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        var_21 *= arr_2 [i_0];
                        arr_13 [i_0] [i_0] [(signed char)9] [13ULL] = ((/* implicit */short) ((min((2218114930U), (((/* implicit */unsigned int) (signed char)-53)))) % ((-(2218114949U)))));
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) % (arr_5 [i_0 - 1] [i_0 - 1])))) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_0)))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1])), (var_0)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) min((((/* implicit */int) arr_19 [i_0])), (arr_14 [i_2] [i_0 + 1])))) & (var_5)))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_4] [i_2] = ((/* implicit */_Bool) (-(max((((2218114930U) << (((((/* implicit */int) (signed char)46)) - (35))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_0 - 1] [(signed char)2] [i_0] [4LL] [(signed char)2] [(signed char)4] [4LL])) | (((/* implicit */int) arr_6 [i_0] [i_2] [i_2])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_24 |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_6] [i_6 + 2] [i_6 + 1] [i_7])) != (((/* implicit */int) var_2)))))));
                                var_25 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-47)) == (((/* implicit */int) (signed char)-47)))))) <= (max((var_5), (((/* implicit */unsigned int) var_1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_0] |= ((/* implicit */unsigned short) (~(var_5)));
        var_26 = ((/* implicit */short) (-((~(((/* implicit */int) ((unsigned char) (signed char)47)))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (signed char)53))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_28 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)46)))))));
        var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_30 [i_8])) ? (((((/* implicit */int) arr_30 [i_8])) ^ (((/* implicit */int) arr_31 [i_8] [i_8])))) : (((/* implicit */int) ((((/* implicit */int) arr_29 [i_8])) < (((/* implicit */int) arr_31 [i_8] [i_8]))))))) <= (max(((+(((/* implicit */int) (signed char)-48)))), (((/* implicit */int) var_19))))));
    }
}
