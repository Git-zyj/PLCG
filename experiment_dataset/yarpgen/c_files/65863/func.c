/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65863
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)6);
                var_19 = ((/* implicit */unsigned long long int) (signed char)-44);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) ^ (576460752303423487ULL))) % (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0] [i_1] [i_1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (short)0))));
                    var_21 *= ((/* implicit */signed char) ((short) ((_Bool) (signed char)-121)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (signed char)95);
                                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_4 - 2]);
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-121)) ? (16630319561336923279ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                arr_14 [i_2] [i_2] [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (arr_3 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-8228))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)121);
                                var_24 = ((/* implicit */signed char) ((unsigned long long int) arr_6 [i_1] [i_1] [i_2] [i_5 + 1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 9; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) -6078599963773024856LL);
                                var_26 = ((/* implicit */signed char) ((unsigned char) arr_17 [i_7 - 1] [i_7 - 3] [i_7 + 1] [i_1]));
                                var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0ULL)))) | (13ULL));
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-121)) < (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((unsigned char) 0ULL));
                            var_29 *= ((/* implicit */unsigned int) 16400081181935175013ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) var_8);
    var_31 *= ((/* implicit */unsigned long long int) ((short) min((13ULL), (((/* implicit */unsigned long long int) ((short) 13373799671405206921ULL))))));
}
