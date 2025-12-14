/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9723
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_2] = ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)20985)))) / (arr_3 [i_1] [i_1])))) ? (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned short)13] [i_0])))) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_0))))) + (((/* implicit */int) min((arr_12 [i_0]), (((/* implicit */unsigned char) (signed char)11))))))));
                                var_17 = ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (16758493211640258609ULL))), (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]))) ? (((/* implicit */int) (unsigned short)7171)) : (((/* implicit */int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    var_18 = max((var_1), (((/* implicit */unsigned long long int) var_13)));
                    var_19 = ((/* implicit */long long int) 2131246960);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (_Bool)1);
                                var_21 = ((/* implicit */signed char) var_7);
                                arr_22 [i_0] [i_1] [i_1] [i_5] [i_2] = ((/* implicit */unsigned short) arr_12 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) < (4294967294U)))), (max((arr_18 [i_0]), ((signed char)-47)))))) <= (((/* implicit */int) max((max((((/* implicit */unsigned char) (signed char)-73)), (arr_12 [i_0]))), (((/* implicit */unsigned char) arr_0 [i_0])))))));
        arr_23 [i_0] [(unsigned short)5] = ((/* implicit */short) ((max((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) (short)20985))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((((/* implicit */int) arr_7 [i_0] [i_0])) << (((((/* implicit */int) (signed char)101)) - (85))))), (((/* implicit */int) arr_7 [i_0] [i_0])))))));
    }
    var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1435345453)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7168))) : ((-9223372036854775807LL - 1LL)))) >> (((((/* implicit */int) (signed char)-12)) + (71)))));
    var_25 = ((/* implicit */signed char) 0U);
    var_26 = ((/* implicit */long long int) var_4);
}
