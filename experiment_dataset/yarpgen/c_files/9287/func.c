/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9287
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
    var_17 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)0)), (min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) var_15)), (-24LL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)1))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) <= (((((/* implicit */_Bool) (unsigned short)12445)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))), (min((((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)53826)))), (((/* implicit */int) arr_4 [i_0]))))));
                var_19 = ((/* implicit */_Bool) var_4);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_1 [i_5 + 1] [i_2]))))));
                                arr_19 [i_6] [(unsigned char)6] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) 17179836416ULL);
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_5 - 1] [i_3]))))) : (min((arr_13 [i_5 - 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65533)))))))));
                                arr_20 [i_2] [i_3] [i_2] [i_5] [9ULL] = (-(((((/* implicit */_Bool) (short)-26161)) ? (((/* implicit */int) var_0)) : (arr_8 [i_5 + 1] [i_5 - 1]))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_3] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    arr_22 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)127), (((/* implicit */unsigned char) (_Bool)1)))))) : (arr_13 [i_2]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_0), (arr_4 [i_2])))), ((~(((/* implicit */int) arr_1 [i_3] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_25 [8] [8] [i_4] [i_8 + 1] [i_8]))))));
                            var_22 = ((/* implicit */unsigned char) min((((long long int) (unsigned short)57904)), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)13))))))));
                        }
                        for (int i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            var_23 = var_0;
                            var_24 *= (+(11735100341076197832ULL));
                        }
                        arr_31 [i_2] [(unsigned short)7] [i_4] [i_2] = min((((/* implicit */int) (unsigned char)196)), ((-(((/* implicit */int) max((((/* implicit */short) var_2)), (var_15)))))));
                    }
                    var_25 = ((/* implicit */signed char) (unsigned char)110);
                }
            } 
        } 
    } 
}
