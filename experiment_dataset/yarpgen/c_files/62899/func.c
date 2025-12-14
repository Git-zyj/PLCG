/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62899
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 |= ((/* implicit */unsigned short) (signed char)-68);
                arr_5 [i_1] = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) var_3);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((769252620U), (((/* implicit */unsigned int) (signed char)-42)))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-68)) : (arr_8 [i_0] [i_1] [8U] [19ULL])))) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_2 + 3] [i_2] [i_1 - 2])) : (((/* implicit */int) (unsigned short)47794))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((var_5), (3611000892U)))));
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] [i_0] [i_2] &= ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                        }
                        for (unsigned short i_5 = 3; i_5 < 19; i_5 += 1) 
                        {
                            var_21 = ((signed char) min(((~(arr_1 [i_3] [i_1]))), (((/* implicit */unsigned long long int) var_2))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (var_11)))) - (((arr_6 [i_3 - 1] [i_1 - 3] [i_5 - 3]) + (arr_6 [i_3 - 1] [i_1 - 3] [i_5 - 3])))));
                        }
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_23 |= ((/* implicit */unsigned long long int) max((((signed char) var_6)), (((/* implicit */signed char) ((var_7) < (((/* implicit */unsigned int) var_15)))))));
                            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */int) ((arr_20 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1 + 1] [i_0]) || (arr_20 [i_0] [i_0] [i_2] [i_3 + 1] [i_0] [i_2] [i_2])))) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_6]))))));
                        }
                        var_25 += ((((/* implicit */_Bool) min((3525714673U), (((/* implicit */unsigned int) -989466470))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)116))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_0])) ? (3240982781774954418ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 327676287U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_28 [i_1] = ((/* implicit */signed char) min((min(((-(var_6))), (((/* implicit */unsigned int) ((var_12) != (((/* implicit */unsigned long long int) var_5))))))), (var_0)));
                                arr_29 [i_1] [(unsigned short)10] [i_1] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (arr_19 [i_1] [i_7] [i_1]) : (((((/* implicit */_Bool) arr_19 [i_1] [i_8] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))) : (arr_19 [i_1] [i_2 + 2] [i_1])))));
                                arr_30 [i_7] [i_7] [i_7] [11ULL] [i_7] [11ULL] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) max((var_3), (var_9)))), (arr_17 [i_1 + 1] [i_1]))), (((/* implicit */unsigned int) (_Bool)1))));
                                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_8] [i_8]))));
                                var_27 = ((/* implicit */_Bool) (signed char)-42);
                            }
                        } 
                    } 
                }
                for (signed char i_9 = 3; i_9 < 17; i_9 += 2) 
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((min((((/* implicit */int) arr_18 [i_9 + 3] [i_9])), (((((/* implicit */int) var_13)) + (((/* implicit */int) (_Bool)1)))))) >> (((15205761291934597198ULL) - (15205761291934597195ULL))))))));
                    arr_34 [i_1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned short) 8538123219675549047ULL);
                }
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    arr_38 [i_0] [i_1] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15205761291934597199ULL))));
                    arr_39 [i_0] [i_10] [i_1 + 2] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 14108684419053017333ULL)) ? (3171946950683702061ULL) : (((/* implicit */unsigned long long int) 3475844119U)))))) ? (((/* implicit */int) ((3240982781774954417ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_10] [i_1] [i_1] [i_1 - 3] [i_1 + 3])))))) : (989466470)));
                }
                arr_40 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (+((-(arr_12 [i_1] [i_1 - 1] [i_0] [i_1 - 1] [i_1] [i_1 + 4]))))));
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_1 + 4] [i_1])))) | (min((15667952971731024022ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_7 [i_1] [i_1] [4ULL] [i_1]))))))))))));
            }
        } 
    } 
    var_30 -= (-((~(((/* implicit */int) var_14)))));
}
