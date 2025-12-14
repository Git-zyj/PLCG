/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97536
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
    var_17 = ((/* implicit */unsigned char) 17178820608ULL);
    var_18 = var_6;
    var_19 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [(signed char)7] [(short)13] [i_2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_0 [i_2]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_7 [i_0]);
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned char)6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_7 [i_0]) : (arr_7 [i_4]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))) | (((arr_0 [i_2]) * (((/* implicit */unsigned long long int) 4283267249U))))));
                    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2]))))) : (4283267249U)))));
                    arr_14 [i_0] [9LL] = ((/* implicit */unsigned char) max((arr_7 [i_0]), (((/* implicit */long long int) arr_6 [i_1]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_1)) ? (1390315412356423747LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))))) >> (((18446744073709551611ULL) - (18446744073709551589ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))))))))));
                            var_24 = ((/* implicit */unsigned char) (short)22345);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) var_15);
                var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((7105352562861795414ULL), (arr_3 [i_1])))))) * (((((/* implicit */_Bool) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) 11700047U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_0] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : ((-(arr_10 [i_0] [i_1])))))));
            }
        } 
    } 
}
