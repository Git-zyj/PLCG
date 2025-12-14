/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94360
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_2))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (7496711793451979694ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_14)), (var_5)))))))) > (min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = max((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) -9LL))))))), (var_3));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = (!(((/* implicit */_Bool) ((arr_1 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (7LL)))));
            var_20 = ((/* implicit */short) (-(max((((/* implicit */long long int) min((3003721997U), (((/* implicit */unsigned int) var_5))))), (max((-9LL), (var_7)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 *= ((/* implicit */int) (((!(((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (((unsigned long long int) ((unsigned long long int) (unsigned char)142))) : (((/* implicit */unsigned long long int) ((int) var_6)))));
            var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
        }
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_18 [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1111335409177147870LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (-7LL)))) ? ((~(7408376297658627652ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((var_6), (arr_9 [3LL])))), (arr_11 [i_5] [2ULL] [(short)13]))))));
                        arr_19 [i_0] [8U] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) -8LL);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_30 [i_8] [i_7] [(signed char)6] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_6] [(signed char)10] [i_7]))))))))));
                    var_23 = ((/* implicit */signed char) 9LL);
                }
            } 
        } 
    } 
}
