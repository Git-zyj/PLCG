/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/797
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((signed char) (unsigned char)235)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_6))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)235))))) / (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_14 = ((/* implicit */int) arr_3 [i_2] [i_1]);
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_6 [(_Bool)1] [(signed char)10] [i_2]))))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_4])) ? (((/* implicit */int) max(((unsigned short)2147), (((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (signed char)-50))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (var_7)));
                        }
                    } 
                } 
            }
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((/* implicit */int) var_8)))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */signed char) (!(arr_20 [i_6 - 1] [i_6] [i_6 - 1] [i_5])))), (var_8))))));
                            arr_23 [i_0] [(unsigned short)5] [i_0] [i_7] = ((/* implicit */signed char) (unsigned short)63389);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_7] [i_7])) ? (arr_14 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_7] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 524225364U))))))));
                            var_20 = ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */unsigned long long int) 1319765009)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_1))))));
                        }
                    } 
                } 
            } 
            var_21 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)-22073)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)21)) != (((/* implicit */int) (signed char)-119)))))))), ((-(((((/* implicit */_Bool) var_4)) ? (8497079446594570726ULL) : (var_1)))))));
            arr_24 [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)-119)) ? (var_10) : (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [13U] [i_1] [(unsigned short)14])))) <= (((/* implicit */long long int) 1484722390)))) ? (((/* implicit */int) (unsigned short)63393)) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
        }
        for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((int) var_4));
            var_23 = ((/* implicit */int) 1268832117U);
        }
    }
    var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)46097)), (-34293706)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (var_1)));
}
