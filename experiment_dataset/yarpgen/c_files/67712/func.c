/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67712
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
    var_10 = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), (-456643805)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))) ? ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) / (((/* implicit */int) ((signed char) arr_1 [i_0]))))) : (var_8))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_12 [23] [i_1] [i_2] [i_2] [i_2] [19U] = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) (~(3112196874U)))) & (arr_7 [i_1] [i_3])))));
                        arr_13 [i_2] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_7) ? (((/* implicit */int) var_2)) : (456643805))), (((/* implicit */int) var_9))))) ? (var_3) : (((/* implicit */unsigned long long int) ((min((-456643805), (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) max(((unsigned short)41235), (((/* implicit */unsigned short) arr_3 [(short)5] [i_1] [i_2]))))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */int) min((var_12), ((((~(((/* implicit */int) arr_6 [i_0] [i_0])))) ^ ((~((~(((/* implicit */int) (_Bool)0))))))))));
        var_13 = ((/* implicit */unsigned long long int) var_9);
        var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) > (-456643805))))) : (min((((/* implicit */long long int) var_8)), (var_6)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) ((int) 456643805));
                    arr_24 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) ((456643802) << (((((-456643821) + (456643846))) - (25)))))), (arr_1 [i_4])))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_3 [i_4] [i_4] [i_4]))));
    }
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_17 = ((/* implicit */int) var_2);
        arr_27 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 456643804)) ? (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7])) : (((-1411975285) % (-456643815))))) : ((+(1495813991)))));
        var_18 = ((/* implicit */long long int) (~(((((arr_1 [12]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))))) << (((((var_0) ^ (1411975284))) + (470375490)))))));
    }
    var_19 = ((/* implicit */_Bool) -456643831);
}
