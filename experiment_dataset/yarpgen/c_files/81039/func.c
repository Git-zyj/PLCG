/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81039
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
    var_10 += ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? ((-(arr_0 [(signed char)16]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0]))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0])))) || (((/* implicit */_Bool) ((unsigned short) var_7)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 2] [i_1])))))) - ((~(arr_5 [i_1 + 1] [i_1 + 2] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] = ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */long long int) max((((/* implicit */unsigned char) (!(var_5)))), (((unsigned char) (signed char)-71)))))));
                                arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) (+(var_3)));
                                var_11 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((signed char) (unsigned char)7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_12 -= ((/* implicit */signed char) ((((/* implicit */int) var_2)) & (((/* implicit */int) ((unsigned char) ((arr_6 [(signed char)4]) / (((/* implicit */long long int) var_3))))))));
        var_13 = max((((((/* implicit */_Bool) arr_5 [2LL] [i_0] [(signed char)12])) ? (-7454564284290643662LL) : (((arr_1 [i_0]) - (arr_1 [i_0]))))), (((/* implicit */long long int) ((signed char) ((signed char) arr_11 [(signed char)18] [(signed char)18])))));
    }
    for (int i_5 = 4; i_5 < 9; i_5 += 4) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */_Bool) arr_6 [i_5]);
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((long long int) arr_11 [i_5 - 4] [i_5])), (((/* implicit */long long int) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) arr_3 [i_5] [i_5]))))))))));
        arr_22 [i_5] &= ((/* implicit */short) (+(((((/* implicit */_Bool) max((arr_9 [(signed char)5] [i_5] [i_5]), (((/* implicit */unsigned short) (signed char)-83))))) ? ((~(arr_0 [i_5]))) : ((-(arr_0 [14])))))));
        arr_23 [i_5 + 2] [i_5] = ((/* implicit */long long int) var_4);
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_26 [i_6] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) <= (((/* implicit */int) arr_9 [i_6] [i_6] [i_6])))))) : (((((/* implicit */_Bool) arr_11 [16U] [16U])) ? (arr_0 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (((((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_6] [(signed char)14]) == (((/* implicit */int) (unsigned short)0)))))) & (576460717943685120LL)))));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_6])))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)9)) < (-1400161411)))) : (((/* implicit */int) var_0))));
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned long long int) var_5)))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_9))))))));
    var_17 = ((/* implicit */unsigned short) var_6);
}
