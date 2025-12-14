/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94719
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) max(((signed char)(-127 - 1)), ((signed char)-37)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) arr_1 [i_0 + 2])))), (((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_13))))) * ((~(((/* implicit */int) var_3))))))));
                            arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 2]))) : (var_6))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                            arr_14 [0U] [0U] [i_0] [i_3] = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) 3236136853536456845LL)) ? (arr_9 [i_0 - 1] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                            {
                                arr_22 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1]))) ? ((((_Bool)1) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                var_16 = ((/* implicit */unsigned long long int) (signed char)21);
                                var_17 -= ((/* implicit */unsigned long long int) min(((~(var_6))), (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)33298)))), (((/* implicit */int) (signed char)(-127 - 1))))))));
                            }
                            arr_23 [i_0] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_21 [i_0]))))) ? (((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_21 [i_0])))) : ((+(((/* implicit */int) arr_21 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
    {
        for (short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (~(var_12))))))));
                arr_28 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) arr_6 [10LL]);
                var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_12)) ? (arr_16 [i_8] [i_8]) : (arr_16 [i_8] [i_7 + 1]))) : (((/* implicit */long long int) var_12))));
                arr_29 [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) max((min((arr_1 [i_7 + 1]), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_12 [i_7 - 1])), (var_10))))));
                var_20 = ((/* implicit */_Bool) (~(arr_24 [i_7 - 1] [i_8])));
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned char) var_3);
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((/* implicit */int) (signed char)37)))))));
}
