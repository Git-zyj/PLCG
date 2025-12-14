/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84026
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min(((unsigned short)61418), (((/* implicit */unsigned short) ((signed char) 7576172765732106469ULL)))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned short)54612))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1 + 1] [i_2] [i_0 + 2] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-93)) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) (unsigned short)10920)))) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)15619))))), (((unsigned char) var_7)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_12 [(short)11] [(short)7]);
                                arr_16 [14U] [2] [i_2] [i_3] [14U] [(unsigned short)12] = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) var_8)) ? (arr_4 [(unsigned char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)8] [(short)1] [i_0 - 1] [i_0]))))))), (((((/* implicit */_Bool) (short)-25000)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (8191U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2071699877997068235LL))));
                                arr_23 [i_0] [i_0] [i_2] [(unsigned short)5] [i_6] = ((/* implicit */int) 20ULL);
                                var_23 = ((/* implicit */unsigned short) ((2071699877997068228LL) == (((/* implicit */long long int) ((/* implicit */int) (short)30203)))));
                            }
                        } 
                    } 
                    arr_24 [i_0 + 1] [(signed char)4] [(signed char)4] [i_2] = ((/* implicit */int) ((long long int) (unsigned short)54614));
                }
                for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)55864))));
                    arr_28 [i_0] [i_1] [i_7] = ((/* implicit */short) (+(var_7)));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_8);
    var_26 = ((/* implicit */short) var_1);
}
