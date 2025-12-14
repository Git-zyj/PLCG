/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66488
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
    var_19 = ((/* implicit */short) var_15);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((arr_1 [i_0]), (((/* implicit */long long int) 3629277218U))))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) arr_9 [i_0] [6LL] [i_2] [i_3]);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-462421796), (1496962777)))) ? (arr_8 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1 + 1] [i_2 - 4] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1 - 2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1 + 1] [i_2 + 1] [i_2])))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
        var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-254)) >= (((/* implicit */int) arr_12 [i_0] [i_0])))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 3; i_4 < 8; i_4 += 1) 
    {
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_16)) ? (-7407195936305542674LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_5] [i_5] [i_7]))))) : (((/* implicit */long long int) ((arr_2 [i_7] [(signed char)17]) << (((((/* implicit */int) arr_17 [(unsigned short)5])) + (9281)))))))));
                            arr_28 [i_4] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_5] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_5] [i_7]) > (((/* implicit */unsigned long long int) 6395714723981095575LL)))))) : ((~(arr_2 [i_4] [i_6])))))) ? (((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned long long int) -6395714723981095576LL)), (arr_20 [i_4] [i_6 + 1]))))) : (min((((/* implicit */long long int) arr_19 [i_6 + 1] [i_6 + 1] [i_6 - 2])), ((-(-6395714723981095576LL)))))));
                            var_25 = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) 7052056710760757190LL)) ? (33553408) : (-33553409))) | (((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_7]))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) ((((5111253065302605825ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [0] [0] [i_4]))) & (511U)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_4 + 3])))));
                arr_29 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)15570))))), ((unsigned short)0))))) : (((((((/* implicit */_Bool) 2268986047U)) || (((/* implicit */_Bool) 2268986051U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) arr_27 [i_4] [i_4] [(signed char)4])))))) : (((long long int) arr_5 [i_4] [i_5 - 1] [i_4]))))));
                var_27 = ((/* implicit */unsigned int) -1);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_11);
}
